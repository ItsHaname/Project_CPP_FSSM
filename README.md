
<div align="center" style="margin: 40px 0;">

<table style="border: none; width: 100%; max-width: 1000px; margin: 0 auto;">
  <tr>
    <td style="text-align: center; padding: 30px; border-right: 1px solid #eee; width: 50%;">
      <img 
        src="https://raw.githubusercontent.com/ItsHaname/Project_CPP_FSSM/main/assets/fssm.png" 
        alt="Logo FSSM"
        style="height: 200px; width: auto; object-fit: contain; display: block; margin: 0 auto;"
      />
      <div style="margin-top: 20px; font-family: 'Segoe UI', sans-serif; font-size: 15px; color: #444; line-height: 1.5;">
        <strong style="font-size: 16px;">Faculté des Sciences Semlalia</strong><br/>
        Université Cadi Ayyad
      </div>
    </td>
    
 <td style="text-align: center; padding: 30px; width: 50%;">
      <img 
        src="https://raw.githubusercontent.com/ItsHaname/Project_CPP_FSSM/main/assets/uni.png" 
        alt="Logo Université"
        style="height: 180px; width: auto; object-fit: contain; display: block; margin: 0 auto;"
      />
      <div style="margin-top: 20px; font-family: 'Segoe UI', sans-serif; font-size: 15px; color: #444; line-height: 1.5;">
        <strong style="font-size: 16px;">Université Cadi Ayyad</strong><br/>
        Marrakech, Maroc
      </div>
    </td>
  </tr>
</table>
</div>
<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&size=32&pause=1000&color=FFFFFF&center=true&vCenter=true&width=800&lines=%F0%9F%9A%80+Rapport+de+Projet+de+Fin+de+Module" alt="Typing SVG" />
</p>

## Université Cadi Ayyad - Faculté des Sciences Semlalia

**Auteurs** :  
- Hanane AIT BAH  
- Karima BOUTISKOUI

  
**Professeur** : Professeur R. HANNANE  
**Date** : Année Universitaire 2024/2025


----
# 🚴 Jeu du Cycliste - Évitez les Obstacles !

Un jeu 2D simple et amusant créé en C++ avec Raylib. Vous contrôlez un cycliste et vous devez éviter les obstacles pour aller le plus loin possible !

## Fonctionnalités
- ✅ **Contrôles faciles** (flèches haut/bas)
- ✅ Obstacles qui apparaissent au hasard avec une vitesse qui augmente
- ✅ Système de score basé sur la distance parcourue
- ✅ Menu au démarrage (Jouer/Quitter)
- ✅ Gestion des collisions en temps réel

## Comment jouer ?
1. Téléchargez le projet
2. Compilez-le avec Raylib
3. Lancez le jeu
4. Évitez les obstacles en utilisant les flèches !

## Technologie
- **Langage** : C++
- **Bibliothèque** : Raylib (graphismes 2D simples)
- **Structure** : Code organisé (Game, Bike, Obstacle...)

> Ce projet est parfait pour apprendre les bases du développement de jeux en C++ !


----
# 🧠 Pourquoi avons-nous choisi la bibliothèque raylib ?

Nous avons choisi **raylib** pour plusieurs raisons :

#### ✅ **Facilité d’utilisation**
Raylib est conçu pour être **simple et facile à utiliser**. C’est une bonne bibliothèque pour les débutants qui veulent créer des jeux rapidement. Les fonctions sont claires et faciles à comprendre, comme `DrawRectangle()` pour dessiner un rectangle, `IsKeyDown()` pour vérifier si une touche est pressée, et `LoadTexture()` pour charger une image.

#### ✅ **Idéale pour le C et C++**
Raylib est une bibliothèque **légère**, écrite en **C**. Elle est parfaite pour les développeurs qui utilisent **C++**, car elle ne rajoute pas de complexité inutile. Cela permet de mieux contrôler le code et d’apprendre les bases de la programmation graphique.

#### ✅ **Documentation claire et communauté active**
Raylib a une **documentation très claire** et une **grande communauté** de développeurs. Cela aide beaucoup à résoudre des problèmes et à apprendre de nouvelles choses.

#### ✅ **Support natif du 2D**
Raylib est spécialement conçu pour créer des **jeux en 2D**. Il offre beaucoup de fonctions pour dessiner des formes, afficher des images, gérer le clavier et la souris, jouer des sons, etc.

#### ✅ **Multiplateforme**
Raylib fonctionne sur **Windows**, **Linux**, **macOS** et même sur des appareils mobiles. Cela permet de **partager facilement les projets** et de les faire tourner sur plusieurs types de systèmes.

---

## 🛠️ Installation de raylib sur Linux (Ubuntu/Debian)

Si vous utilisez **Linux** (Ubuntu ou Debian), voici comment installer raylib :

#### 1. Installer les dépendances nécessaires

Avant d'installer raylib, vous devez installer des outils pour la compilation avec cette commande :

```bash
sudo apt update
sudo apt install build-essential cmake git libasound2-dev libpulse-dev libx11-dev libxcursor-dev libxrandr-dev libxinerama-dev libxi-dev libgl1-mesa-dev libegl1-mesa-dev
```
# Installation de raylib sur Linux (Ubuntu/Debian)

Suivez les étapes ci-dessous pour installer raylib sur Linux (Ubuntu ou Debian).

## 2. Cloner le dépôt officiel de raylib

Ensuite, vous devez télécharger le code source de raylib en utilisant **git** :

```bash
git clone https://github.com/raysan5/raylib.git
cd raylib
```

#3. Compiler et installer raylib

Une fois raylib téléchargé, il faut le compiler et l'installer avec les commandes suivantes :
```
mkdir build && cd build
cmake ..
make -j$(nproc)
sudo make install
````
# 💻 Choix de l’Environnement de Développement

Nous avons choisi d’utiliser **le terminal Linux** et **Gedit** pour ce projet C++ avec raylib. Ce choix permet de mieux comprendre comment fonctionne la compilation et l’exécution d’un programme, sans utiliser des outils automatiques.

---

### 🎯 Pourquoi ce choix ?

1. **Comprendre le processus** :
   - Compiler manuellement avec `g++`.
   - Gérer les bibliothèques et l'exécution du programme via le terminal.

2. **Légèreté et accessibilité** :
   - Pas besoin d'un IDE lourd.
   - Fonctionne sur n’importe quelle machine Linux.

3. **Stimuler l’autonomie** :
   - Apprendre à utiliser le terminal et résoudre les erreurs de compilation.

---

## 📝 Gedit : éditeur de texte simple et puissant

**Gedit** est un éditeur de texte léger utilisé pour écrire et modifier le code source en C++.

### Fonctionnalités utiles :
- **Coloration syntaxique** : facilite la lecture du code.
- **Numérotation des lignes** et **indentation automatique**.
- Prise en charge de plusieurs fichiers ouverts en même temps.

### Exemple d’utilisation :

Pour ouvrir un fichier source, tapez cette commande dans le terminal :

```bash
gedit src/main.cpp
```
# Collaboration sur le Projet de Jeu

Ce projet de jeu a été réalisé en collaboration entre [ItsHaname](https://github.com/ItsHaname) et [karimaboutskaouin](https://github.com/karimaboutskaouin). Le jeu est développé en **C++** avec la bibliothèque **Raylib**. Ce document explique les outils utilisés pour la gestion de version et la collaboration sur le projet.

---

## Outils Utilisés

### Git et GitHub

#### 1. Git : Outil de Contrôle de Version

**Git** est un système qui nous permet de gérer les différentes versions du code et de travailler ensemble efficacement. Voici comment nous l'avons utilisé :

- **Suivi des Modifications** : Chaque changement dans le code est enregistré dans Git via des "commits", ce qui permet de suivre l’évolution du projet.
  
- **Branches** : Nous avons créé des branches pour travailler sur différentes fonctionnalités sans perturber la branche principale.  
  - **Branche principale (`haname`)** : C'est la branche principale où [ItsHaname](https://github.com/ItsHaname) a ajouté les principales fonctionnalités.
  - **Branche secondaire (`karimak_G`)** : La branche où [karimaboutskaouin](https://github.com/karimaboutskaouin) a travaillé sur des améliorations spécifiques.

- **Fusion du Code (Merge)** : Une fois une fonctionnalité terminée, nous avons fusionné les modifications de chaque branche dans la branche principale via des **pull requests**. Cela nous a permis de vérifier et de valider les changements avant de les intégrer.

#### 2. GitHub : Collaboration à Distance

**GitHub** est la plateforme où nous avons stocké le code et collaboré à distance. Voici comment nous avons utilisé GitHub :

- **Fork et Pull Request** : [karimaboutskaouin](https://github.com/karimaboutskaouin) a créé un **fork** de mon dépôt pour travailler en parallèle. Après avoir terminé ses modifications, il a soumis une **pull request** pour que je puisse réviser et intégrer ses changements.
  
- **Issues et Discussions** : Nous avons utilisé les **"issues"** pour discuter des problèmes et suivre l’avancement des tâches. Cela nous a aidés à organiser notre travail.

- **Documentation** : GitHub a facilité la création et la gestion d'une documentation claire et accessible, importante pour comprendre le projet et les instructions d'installation.

---
 # Stucture de projet :
```
├── assets/ # Sprites, sons et textures
├── bin/ # Exécutable (monJeu)
├── include/ # Headers (.h)
│ ├── Bike.h # Déclarations des classes et fonctions pour Bike
│ ├── Game.h # Déclarations des classes et fonctions pour Game
│ ├── Menu.h # Déclarations des classes et fonctions pour Menu
│ ├── Obstacle.h # Déclarations des classes et fonctions pour Obstacle
│ └── Person.h # Déclarations des classes et fonctions pour Person
└── src/ # Code source (.cpp)
├── Bike.cpp # Gestion du vélo (mouvement, interactions)
├── Game.cpp # Logique principale du jeu, gestion des événements
├── main.cpp # Point d'entrée, démarrage du jeu
├── Menu.cpp # Gestion du menu du jeu
├── Obstacle.cpp # Gestion des obstacles (apparition, collisions)
└── Person.cpp # Gestion du personnage (réactions, contrôles)
```






