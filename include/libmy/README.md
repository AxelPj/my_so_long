# Libmy

Bienvenue dans mon repository **Libmy** ! Ce projet vise à construire une bibliothèque en C en réimplémentant certaines fonctions standard, ainsi qu'en ajoutant des fonctionnalités utiles pour les futurs projets. L'objectif est de développer une compréhension approfondie de la manipulation de la mémoire, des chaînes de caractères et de la modularité du code.

## Sommaire

- [À propos](#à-propos)
- [Fonctionnalités](#fonctionnalités)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Structure du projet](#structure-du-projet)
- [Contributions](#contributions)

## À propos

Le projet **Libmy** est conçu pour se familiariser avec des fonctions essentielles de la bibliothèque standard du C et les recréer à partir de zéro. En réalisant ce projet, on apprend à manipuler des pointeurs, à gérer la mémoire efficacement, et à écrire du code modulaire qui pourra être réutilisé dans de futurs projets. Cette bibliothèque servira également de base pour des projets plus avancés.

## Fonctionnalités

La bibliothèque **Libmy** comprend plusieurs catégories de fonctions :

### 1. Fonctions de la bibliothèque standard C
Les fonctions suivantes sont recréées pour comprendre leur fonctionnement interne :
- `my_memset`, `my_bzero`, `my_memcpy`, `my_memmove` – Manipulation de la mémoire.
- `my_strlen`, `my_strdup`, `my_strcpy`, `my_strncpy` – Gestion des chaînes de caractères.
- `my_strcat`, `my_strncat`, `my_strlcat` – Concatenation de chaînes.
- `my_strchr`, `my_strrchr`, `my_strstr`, `my_strnstr` – Recherche de sous-chaînes et de caractères.
- `my_atoi`, `my_itoa` – Conversion entre chaînes et nombres.
- `my_isalpha`, `my_isdigit`, `my_isalnum`, `my_isascii`, `my_isprint` – Fonctions de vérification de caractères.
- `my_toupper`, `my_tolower` – Conversion de casse.

### 2. Fonctions de manipulation de listes chaînées
Création et manipulation de listes chaînées, avec les fonctions :
- `my_lstnew` – Créer un nouvel élément de liste.
- `my_lstdelone`, `my_lstdel` – Suppression d'éléments de la liste.
- `my_lstadd`, `my_lstiter`, `my_lstmap` – Ajout et application de fonctions aux éléments de la liste.

### 3. Fonctions additionnelles
Des fonctions utiles non présentes dans la bibliothèque standard :
- `my_strtrim` – Suppression des espaces inutiles au début et à la fin d'une chaîne.
- `my_split` – Découpe d'une chaîne en un tableau de chaînes, basé sur un séparateur.
- `my_substr` – Extraction d'une sous-chaîne.
- `my_strjoin` – Concatenation de deux chaînes dans une nouvelle chaîne.

## Installation

Pour cloner ce repository et compiler la bibliothèque :

```
git clone https://github.com/AxelPj/libmy.git
cd libmy
make
```

Cette commande génère un fichier libmy.a, qui est la bibliothèque compilée que tu pourras inclure dans d'autres projets.

### Utilisation
Pour utiliser Libmy dans vos propres projets, ajoutez simplement le fichier libmy.a et l'inclusion des headers au moment de la compilation :

```
gcc -Wall -Wextra -Werror -L. -lmy votre_fichier.c -o votre_programme
```
Dans le code source, incluez le fichier d'en-tête libmy.h :

```
#include "libmy.h"
```

## Structure du projet
Le projet est organisé de la manière suivante :

libmy.h : Le fichier d'en-tête de la bibliothèque contenant les prototypes de toutes les fonctions.
src/ : Ce dossier contient les fichiers source (.c) de chaque fonction de la bibliothèque.
obj/ : Ce dossier est généré pour stocker les fichiers objet (.o) lors de la compilation.
Makefile : Fichier de construction pour compiler la bibliothèque facilement en exécutant make.

## Contributions
Les contributions sont les bienvenues ! Si vous souhaitez ajouter des fonctions supplémentaires ou améliorer le code existant, suivez ces étapes :

Forker ce repository.
Créer une branche pour vos modifications 
```(git checkout -b feature/nouvelle-fonctionnalité).```

Committer vos modifications 
```(git commit -m "Ajout d'une nouvelle fonctionnalité").```

Pousser votre branche 
```(git push origin feature/nouvelle-fonctionnalité).```

Créer une Pull Request pour examiner vos changements.
