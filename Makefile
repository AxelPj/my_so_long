# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 15:17:12 by axelpeti          #+#    #+#              #
#    Updated: 2025/03/16 17:05:30 by axelpeti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'exécutable
NAME = so_long

# Sources
SRCS = ./src/main/main.c \
       ./src/parsing/parsing.c ./src/parsing/verif_map.c ./src/parsing/flood_files.c \
       ./src/utils/utils_map.c ./src/utils/utils_mlx.c ./src/utils/utils_init_struct.c ./src/utils/change_map.c ./src/utils/draw_img.c \
	   ./src/img_utils/charge_img_wall.c ./src/img_utils/free_img1.c ./src/img_utils/free_img2.c ./src/img_utils/charge_img.c ./src/img_utils/charge_img2.c ./src/img_utils/charge_img3.c ./src/img_utils/charge_img4.c ./src/img_utils/charge_img5.c \
       ./src/img_utils/charge_img_kamehameha.c ./src/img_utils/charge_img_attaque_ssj.c ./src/img_utils/charge_img_attaque.c \
	   ./src/mouv/mouv_sprite1.c ./src/mouv/mouv_ssj1.c ./src/mouv/mouv_exit1.c ./src/mouv/mouv_exit2.c ./src/mouv/anim.c ./src/mouv/anim_ssj.c \
	   ./src/intro/charge_intro1.c ./src/intro/charge_intro2.c ./src/intro/charge_intro3.c ./src/intro/intro.c \
	   ./src/attaque/attaque.c ./src/attaque/kamehameha.c ./src/attaque/kamehameha2.c ./src/attaque/compteur_att.c \
	   ./include/GNL/get_next_line.c

# Répertoire et archive de la libft
LIBFT_DIR = ./include/libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ./include/printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

# Répertoires
BUILD_DIR = build
MINILIBX_DIR = ./include/minilibx
MLX = $(MINILIBX_DIR)/libmlx.a

# Fichiers objets
OBJS = $(SRCS:%.c=$(BUILD_DIR)/%.o)

# Compilateur et options
CC = cc
CFLAGS = -g  -Werror -Wextra -Wall
LDFLAGS = -L$(MINILIBX_DIR) -lmlx -L/usr/lib -lXext -lX11 -lm

# ---------------------------- macOS (XQuartz) ---------------------------- #
# Sur Mac, X11 est fourni par XQuartz (installé dans /opt/X11).
UNAME := $(shell uname)
X11_DIR = /opt/X11
ifeq ($(UNAME),Darwin)
	X11_INC = -I$(X11_DIR)/include
	LDFLAGS = -L$(MINILIBX_DIR) -lmlx -L$(X11_DIR)/lib -lXext -lX11 -lm
	MLX_BUILD = $(MAKE) -C $(MINILIBX_DIR) -f Makefile.mk INC=$(X11_DIR)/include
else
	MLX_BUILD = $(MAKE) -C $(MINILIBX_DIR)
endif
MAP ?= map/map1.ber


# Couleurs pour affichage
YELLOW = \033[0;33m
GREEN = \033[0;32m
RESET = \033[0m
RED = \033[0;31m

# Règle par défaut
all: $(MLX) $(LIBFT) $(PRINTF) $(NAME)

# Compilation de la minilibx (X11)
$(MLX):
	@echo "$(YELLOW)🔨 Compiling minilibx... 🚀$(RESET)"
	$(MLX_BUILD)

# Compilation de l'exécutable
$(NAME): $(MLX) $(LIBFT) $(PRINTF) $(OBJS)
	@echo "$(YELLOW)🔨 Linking $(NAME)... 🚀$(RESET)"
	$(CC) $(OBJS) $(LIBFT) $(PRINTF) $(LDFLAGS) -o $(NAME)
	@echo "$(GREEN)✅ Compilation successful!$(RESET)"

# Compilation de la libft
$(LIBFT):
	@echo "$(YELLOW)🔨 Compiling libft... 🚀$(RESET)"
	$(MAKE) -C $(LIBFT_DIR)

# Compilation de la libftprintf
$(PRINTF):
	@echo "$(YELLOW)🔨 Compiling libftprintf... 🚀$(RESET)"
	$(MAKE) -C $(PRINTF_DIR)

# Règle pour les fichiers objets
$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@echo "$(YELLOW)📝 Compiling $<...$(RESET)"
	$(CC) $(CFLAGS) $(X11_INC) -I$(MINILIBX_DIR) -I$(LIBFT_DIR) -I$(PRINTF_DIR) -c $< -o $@
	@echo "$(GREEN)✅ Compilation of $< finished$(RESET)"

# Nettoyage des fichiers objets
clean:
	@echo "$(RED)🧹 Cleaning object files...$(RESET)"
	rm -rf $(BUILD_DIR)
	@echo "$(RED)🧹 Cleaning libft objects...$(RESET)"
	$(MAKE) clean -C $(LIBFT_DIR)
	@echo "$(RED)🧹 Cleaning libftprintf objects...$(RESET)"
	$(MAKE) clean -C $(PRINTF_DIR)

# Nettoyage complet
fclean: clean
	@echo "$(RED)🧼 Removing executable...$(RESET)"
	rm -f $(NAME)
	@echo "$(RED)🧼 Cleaning libft archive...$(RESET)"
	$(MAKE) fclean -C $(LIBFT_DIR)
	@echo "$(RED)🧼 Cleaning libftprintf archive...$(RESET)"
	$(MAKE) fclean -C $(PRINTF_DIR)

# Recompilation complète
re: fclean all

# Mode debug
debug: CFLAGS += -g -fsanitize=address
debug: re

# Lancement sur Mac : vérifie XQuartz, compile, ouvre XQuartz puis le jeu
# Utilisation : make mac            (map par défaut : map/map1.ber)
#               make mac MAP=map/map2.ber
mac: check_xquartz all
	@open -a XQuartz
	@echo "$(GREEN)🎮 Lancement de $(NAME) avec $(MAP)...$(RESET)"
	DISPLAY=$${DISPLAY:-:0} ./$(NAME) $(MAP)

check_xquartz:
	@if [ "$(UNAME)" != "Darwin" ]; then \
		echo "$(RED)❌ 'make mac' est réservé à macOS : utilise 'make' puis ./$(NAME) <map>.$(RESET)"; \
		exit 1; fi
	@if [ ! -f $(X11_DIR)/include/X11/Xlib.h ]; then \
		echo "$(RED)❌ XQuartz n'est pas installé.$(RESET)"; \
		echo "   Installe-le avec : brew install --cask xquartz"; \
		echo "   puis déconnecte-toi / reconnecte-toi à ta session macOS."; \
		exit 1; fi

# Déclaration des cibles phony
.PHONY: all clean fclean re debug mac check_xquartz
