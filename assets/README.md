# 🚴 Jeu du Cycliste - Évitez les Obstacles !

## 🎮 Introduction

Bienvenue dans **"Jeu du Cycliste"**, un jeu 2D développé en **C++** avec la bibliothèque **raylib**, où le joueur incarne une personne à vélo qui doit **éviter des obstacles** sur son chemin. Le jeu repose sur des mécaniques simples mais addictives, basées sur la **réactivité**, **l’anticipation**, et **le timing**.

Ce projet a été conçu dans le but de se familiariser avec la programmation de jeux en C++, tout en explorant les possibilités offertes par **raylib**, une bibliothèque graphique moderne, légère et simple à prendre en main. Le jeu met en scène un environnement dynamique dans lequel le joueur doit manœuvrer son vélo pour éviter des obstacles aléatoires qui apparaissent progressivement à l’écran.

Le joueur devra ainsi faire preuve de réflexes rapides pour éviter des objets tels que des rochers, des plots de signalisation, ou d'autres dangers, tout en parcourant la plus grande distance possible. Le score est basé sur la distance parcourue sans collision, ce qui pousse le joueur à améliorer sa performance à chaque essai.

Le choix de raylib s’est imposé pour plusieurs raisons :
- Une API claire et bien documentée
- Une prise en charge facile des fenêtres, du rendu 2D, des entrées clavier/souris
- Une compilation rapide et multiplateforme (Windows, Linux, macOS)

Le développement de ce jeu a permis de mettre en pratique plusieurs compétences en programmation :
- Utilisation de boucles de jeu en temps réel
- Gestion des entrées clavier
- Détection de collisions entre objets
- Création et animation de sprites
- Organisation modulaire du code C++ pour séparer la logique du jeu, le rendu, et la gestion des événements
## 🧠 Pourquoi le choix de la bibliothèque raylib ?

Le choix de **raylib** pour le développement de ce jeu n'est pas anodin. Plusieurs raisons techniques et pédagogiques justifient son utilisation :

### ✅ Simplicité d'utilisation
Raylib a été conçu pour être **simple, claire et intuitive**, notamment pour les débutants ou les développeurs souhaitant créer rapidement des prototypes. Son API suit une logique cohérente avec des fonctions comme `DrawRectangle()`, `IsKeyDown()`, `LoadTexture()`, etc., qui sont très lisibles.

### ✅ Idéale pour le C et C++
Contrairement à des moteurs lourds comme Unity ou Unreal, raylib est une **bibliothèque légère et écrite en C**, parfaitement adaptée à la programmation en **C++** sans surcouche inutile. Cela permet un meilleur contrôle du code et une meilleure compréhension des bases de la programmation graphique.

### ✅ Documentation claire et communauté active
Raylib dispose d’une documentation très bien faite ainsi qu'une communauté active. Cela facilite grandement l'apprentissage, la recherche de solutions, et le partage de projets.

### ✅ Support natif du 2D
Le moteur est spécialement adapté pour le développement de **jeux 2D**, avec de nombreuses fonctions intégrées pour le dessin de formes, le rendu d’images, les animations, la gestion de clavier/souris, le son, etc.

### ✅ Multiplateforme
Raylib fonctionne sur **Linux**, **Windows**, **macOS**, et même sur des plateformes embarquées. Cela garantit une **portabilité maximale** du projet, un avantage important pour tout développeur indépendant ou étudiant.

---

## 🛠️ Installation de raylib sur Linux (Ubuntu/Debian)

Pour installer raylib sous Linux, voici les étapes recommandées :

### 1. Installer les dépendances nécessaires

Avant d’installer raylib, assure-toi que les outils de compilation sont présents :

```bash
sudo apt update
sudo apt install build-essential cmake git libasound2-dev libpulse-dev libx11-dev libxcursor-dev libxrandr-dev libxinerama-dev libxi-dev libgl1-mesa-dev libegl1-mesa-dev
```
###2. Cloner le dépôt officiel de raylib
```
git clone https://github.com/raysan5/raylib.git
cd raylib
```
##3. Compiler et installer raylib

```
mkdir build && cd build
cmake ..
make -j$(nproc)
sudo make install
```
✅ Vérification de l'installation
Crée un fichier test main.cpp :
````
#include "raylib.h"

int main() {
    InitWindow(800, 600, "Test Raylib");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Raylib fonctionne !", 190, 200, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
````
ompile-le avec :
```
g++ main.cpp -o test -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```
Puis lance le jeu :
```
./test
```
## 💻 Choix de l’Environnement de Développement

Le choix de l’environnement de développement joue un rôle fondamental dans la réussite d’un projet logiciel, en particulier lorsqu’il s’agit d’un projet en C++ orienté graphique, comme ce jeu vidéo développé avec raylib. Dans ce projet, nous avons opté pour un environnement **minimaliste, transparent et orienté apprentissage** : le **terminal Linux** en combinaison avec l’éditeur de texte **Gedit**.

Ce choix peut sembler atypique face à des environnements de développement intégrés (IDE) modernes comme Visual Studio Code, CLion ou QtCreator. Cependant, il s’inscrit dans une volonté claire : **maîtriser pleinement le processus de compilation, de gestion des dépendances, et d'exécution d’un programme en C++**, sans recours à des outils qui automatisent excessivement ces tâches.

---

### 🎯 Objectifs pédagogiques et techniques du choix

1. **Compréhension du fonctionnement bas niveau**
   - Compilation manuelle avec `g++`
   - Gestion explicite des bibliothèques (`-lraylib`, `-lGL`, etc.)
   - Exécution contrôlée via la console
   - Navigation dans l’arborescence du projet

2. **Légèreté et accessibilité**
   - Aucun besoin d’installer un IDE lourd
   - Fonctionne sur n’importe quelle distribution Linux standard
   - Utilisable même sur des machines peu puissantes ou en environnement serveur distant

3. **Stimulation de l’autonomie du développeur**
   - Habituation à la ligne de commande
   - Capacité à résoudre les erreurs de compilation manuellement
   - Maîtrise des outils GNU/Linux essentiels au développement moderne

---

## 📝 Gedit : éditeur simple mais puissant

### 🖥️ Présentation

**Gedit** est l’éditeur de texte officiel de l’environnement de bureau GNOME. Il s’agit d’un outil graphique, léger, souvent préinstallé sur les distributions Linux telles que Ubuntu, Debian, Fedora.

### 🔍 Fonctionnalités pertinentes pour le C++ :

- **Coloration syntaxique** pour le C, C++, Python, etc.
- **Numérotation des lignes**, indentation automatique
- Prise en charge des fichiers multiples via des onglets
- Recherche/remplacement avec expressions régulières
- Extensible via des **plugins** (mini-terminal, console de compilation, etc.)

### 🧪 Exemple d’utilisation :

Pour ouvrir un fichier source :

```bash
gedit src/main.cpp &
```
# Collaboration sur le Projet de Jeu

Ce document présente le rapport détaillé sur le développement du jeu réalisé en collaboration entre [ItsHaname](https://github.com/ItsHaname) et [karimaboutskaouin](https://github.com/karimaboutskaouin). Le projet est basé sur l'utilisation de **Raylib** et a été développé en **C++**. Ce rapport couvre les outils utilisés pour la gestion de version, ainsi que la conception et la modélisation du projet.

---

## Outils Utilisés

### Git et GitHub

#### 1. Git : Un Outil de Contrôle de Version

Git est un système de contrôle de version décentralisé qui permet de gérer les différentes versions du code et de collaborer efficacement entre les développeurs. Grâce à Git, nous avons pu suivre l'historique de chaque modification et revenir à des versions antérieures lorsque cela était nécessaire.

- **Suivi des Modifications** : Chaque modification dans le code est enregistrée par un "commit", ce qui nous permet de suivre l'évolution du projet de manière claire et ordonnée.
  
- **Branches** : Nous avons utilisé des branches pour travailler sur des fonctionnalités spécifiques sans perturber la branche principale du projet (`main`). Cela nous a permis de développer des fonctionnalités indépendamment et de les tester avant de les intégrer à la version stable. 
  - **Branche principale (`haname`)** : Cette branche contient les principales mises à jour et fonctionnalités réalisées par [ItsHaname](https://github.com/ItsHaname).
  - **Branche secondaire (`karimak_G`)** : La branche de mon ami [karimaboutskaouin](https://github.com/karimaboutskaouin) où il a travaillé sur des améliorations spécifiques et des ajouts au projet.

- **Fusion de Code (Merge)** : Après avoir terminé une fonctionnalité sur une branche distincte, nous avons fusionné les changements dans la branche principale en utilisant des "pull requests". Cela nous a permis de discuter et de valider les modifications avant de les intégrer.

#### 2. GitHub : Collaboration à Distance

GitHub est une plateforme qui nous a permis de centraliser le code source du projet et de collaborer à distance. Voici les fonctionnalités clés que nous avons utilisées :

- **Fork et Pull Request** : Mon ami [karimaboutskaouin](https://github.com/karimaboutskaouin) a fait un fork de mon dépôt afin de travailler sur le projet en parallèle. Une fois ses modifications terminées, il a soumis une **pull request** pour que je puisse revoir et intégrer ses modifications.

- **Issues et Discussions** : Nous avons utilisé les "issues" pour discuter des problèmes rencontrés et suivre l'avancement des tâches. Cela nous a permis de structurer notre travail et d'assurer une bonne communication tout au long du développement.

- **Documentation** : GitHub nous a également permis de maintenir une documentation claire et accessible, ce qui est essentiel pour comprendre rapidement les fonctionnalités du projet et les instructions d'installation.

---

## Conception et Modélisation du Projet

### 1. Structure du Projet

La structure du projet a été pensée pour être modulaire, claire et maintenable. Voici l'organisation générale du projet :
```
/src
    /Game.cpp         # Logique principale du jeu, boucles, gestion des événements.
    /Bike.cpp         # Gestion du vélo (mouvement, interactions, etc.)
    /Person.cpp       # Gestion du personnage (réactions, contrôles, état)
    /Obstacle.cpp     # Gestion des obstacles (apparition, collisions)
    /Menu.cpp         # Gère le menu du jeu (démarrage, pause, options)
    /main.cpp         # Point d'entrée, démarrage du jeu
    /Game.h           # Déclarations des classes et fonctions pour Game
    /Bike.h           # Déclarations des classes et fonctions pour Bike
    /Person.h         # Déclarations des classes et fonctions pour Person
    /Obstacle.h       # Déclarations des classes et fonctions pour Obstacle
    /Menu.h           # Déclarations des classes et fonctions pour Menu
/assets
    - Images et autres ressources utilisées (sprites, icônes, etc.)
````
Diagramme de Classe
````

+----------------+        +-------------+         +--------------+
|     Game       |<>------|    Bike     |<>------>|   Person     |
+----------------+        +-------------+         +--------------+
| - timer         |        | - x, y     |         | - texture    |
| - gameOver      |        | - speed    |         +--------------+
| +Update()       |        | +Draw()    |
| +Draw()         |        +-------------+        +------------------+
+----------------+                               |     Obstacle      |
                                                 +------------------+
                                                 | - x, y, speed     |
                                                 | +Update(), Draw() |
                                                 +------------------+
             +--------+
             | Menu   |
             +--------+
             | - bool |
             | +Draw()|
             +--------+
````
Diagramme de Séquence Simplifié
```
Utilisateur        → App (main)           → Game          → Bike / Obstacle / Menu
Appuie sur Entree  → InitWindow()         → Update()      → Update()
                   → Boucle de jeu        → Draw()        → Draw()
                   → Quit                 → CloseWindow()
```
