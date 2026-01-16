
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
- Karima boutskaouin

  
**Professeur** : Professeur R. HANNANE  
**Date** : Année Universitaire 2024/2025


----
# 🚴 Jeu du Cycliste - Évitez les Obstacles !
[▶️ Voir la vidéo de démonstration](https://github.com/ItsHaname/Project_CPP_FSSM/blob/main/assets/WhatsApp%20Video%202025-05-12%20at%2004.58.39.mp4)

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
![image](https://github.com/user-attachments/assets/ce1ff0e0-22e7-48a9-8f6c-d3bd69ccc84f)


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

1. Compiler le projet:
```
   g++ -o bin/monJeu src/*.cpp -Iinclude -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```
2. Exécuter le projet
   ```
   ./bin/monJeu
  ``
  # #Modelisation et conception:
  ```
+------------------+            +-----------------+           +-----------------+
|      Game        |<>----------|      Bike       |<>---------|    Person       |
+------------------+            +-----------------+           +-----------------+
| - bike           |            | - x, y          |           | - texture       |
| - obstacle       |            | - speed         |           | - width, height |
| - menu           |            | - person        |           |                 |
| - gameOver       |            | + Update()      |           | + Draw()        |
| - win            |            | + Draw()        |           +-----------------+
| - timer          |            | + GetRect()     |
| - moneyPos       |            | + GetSeatPos()  |
| - moneyWidth     |            +-----------------+
| - moneyHeight    |
+------------------+
         |
         | 1
         |
         v
+-------------------+
|    Obstacle       |
+-------------------+
| - x, y            |
| - width, height   |
| - speed           |
| + Update()        |
| + Draw()          |
| + GetRect()       |
+-------------------+
         |
         |
         v
+-------------------+
|       Menu        |
+-------------------+
| - isPlaying       |
| - shouldQuit      |
| + Update()        |
| + Draw()          |
| + IsPlaying()     |
| + ShouldQuit()    |
+-------------------+

```

2. Diagramme de classes

Le diagramme de classes est une excellente façon de visualiser les relations entre les différentes entités du projet.
Classes principales

    Bike : Représente le vélo, sa position, sa vitesse, et la personne qui le conduit.

    Person : Représente la personne sur le vélo (une image).

    Obstacle : Représente les obstacles que le vélo doit éviter.

    Game : La logique du jeu, gère les objets principaux (Bike, Obstacle, Menu), et contrôle l'état du jeu.

    Menu : Le menu du jeu qui permet au joueur de commencer ou de quitter le jeu.

Relations entre les classes

    Game: contient un Bike, un Obstacle, un Menu, et un Person.

    Bike : contient une instance de Person pour gérer l'affichage de la personne qui conduit le vélo.

    Obstacle: est une classe autonome qui gère l'apparition et le mouvement des obstacles.


# 🎮 Principe du jeu

Au lancement du programme, un **menu principal** s'affiche proposant deux options :
- **Jouer** (en appuyant sur `Entrée`)
- **Quitter** (en appuyant sur `Échap` ou `Espace`)

---

### 🕹️ Déroulement du jeu

- Une fois la partie lancée, un **cycliste sur un vélo** se déplace **horizontalement** à l’écran.
- Le joueur doit **éviter les obstacles** qui apparaissent aléatoirement.
- Le but est de **survivre jusqu'à la fin du chronomètre** sans entrer en collision avec les obstacles.

---

## 🖼️ Aperçu du jeu


![image](https://github.com/user-attachments/assets/a5b25980-3555-4cc5-9f27-296e90aa7017)

----

## Description et rôle dans le jeu:


# 🧩 Classe `Bike` – Description et rôle dans le jeu

La classe `Bike` est un composant essentiel du projet. Elle représente le **vélo du joueur** dans le jeu et gère plusieurs responsabilités :

- Le **déplacement** du cycliste avec le clavier.
- L’**affichage** graphique du vélo et de son conducteur.
- La **gestion des collisions** avec les bords de l'écran.
- L’**intégration** du personnage `Person` sur le vélo.

---

## 📦 Attributs principaux

- `float x, y` : Position du vélo sur l’écran.
- `float width, height` : Dimensions du vélo.
- `float speed` : Vitesse de déplacement du vélo.
- `Person person` : Objet représentant le cycliste.

---

## ⚙️ Méthodes principales

### `Bike::Bike()`
Initialise la position, la taille et la vitesse du vélo.

### `void Update()`
Gère les entrées clavier (`flèches`) pour déplacer le vélo. Empêche aussi le vélo de sortir des limites de l’écran.

### `void Draw()`
Affiche le vélo à l'écran :
- Les roues (cercles),
- Les rayons (lignes),
- Le cadre (lignes),
- Le personnage (avec la classe `Person`).

### `Rectangle GetRect()`
Retourne un rectangle qui encadre le vélo, utile pour détecter les **collisions**.

### `Vector2 GetSeatPosition()`
Renvoie la position du **siège** du vélo, pour y placer correctement le cycliste.

---

## ✅ Résumé simplifié

| Élément                | Rôle                                                 |
|------------------------|------------------------------------------------------|
| `Bike`                 | Gère le cycliste (position, affichage, mouvement)    |
| `Update()`             | Déplace le vélo avec le clavier                      |
| `Draw()`               | Affiche un vélo complet avec le personnage           |
| `GetRect()`            | Donne la zone pour détecter les collisions           |
| `GetSeatPosition()`    | Positionne la personne sur le siège                  |

---
# 👤 Classe `Person` – Cycliste du jeu

La classe `Person` représente le **personnage** (cycliste) qui monte sur le vélo dans le jeu. Elle est utilisée principalement par la classe `Bike` pour afficher le joueur à l’écran.

---

## 🎯 Objectif

- Charger une **texture d’image** représentant le cycliste.
- Afficher le personnage sur le **siège du vélo**.
- Gérer le **déchargement de la texture** pour libérer la mémoire.

---

## 📦 Attributs

| Attribut         | Description                                      |
|------------------|--------------------------------------------------|
| `float width`    | Largeur de la texture du personnage              |
| `float height`   | Hauteur de la texture du personnage              |
| `Texture2D texture` | Texture contenant l’image du cycliste chargée |

---

## ⚙️ Méthodes

### `Person()`
- Charge une image (texture) du personnage à partir d’un chemin local.
- Calcule la largeur et la hauteur à partir de la texture.

> 📝 **Important** : Le chemin vers l’image doit être valide. Exemple utilisé :
```cpp
LoadTexture("/home/kari/Project_CPP_FSSM/file_000000005978620aaba046ed841eafe2.png");
```

![image](https://github.com/user-attachments/assets/a92d3da8-c3b3-46e8-bc2c-4bb6a5d5c78e)

# 🟥 Classe `Obstacle` – Événements à éviter

La classe `Obstacle` représente les **obstacles** que le joueur doit éviter pendant la partie. Ce sont des **barres rouges verticales** qui se déplacent horizontalement à l’écran.

---

## 🎯 Objectif

- Générer des obstacles avec une **position verticale aléatoire**.
- Les faire **se déplacer vers la gauche** pour simuler le mouvement.
- Les **réinitialiser automatiquement** lorsqu’ils quittent l’écran.
- Fournir une **forme géométrique** pour la détection de collision.

---

## 📦 Attributs

| Attribut         | Description                                                      |
|------------------|------------------------------------------------------------------|
| `float x`        | Position horizontale de l’obstacle                               |
| `float y`        | Position verticale de l’obstacle                                 |
| `float width`    | Largeur (20 pixels)                                              |
| `float height`   | Hauteur (150 pixels)                                             |
| `float speed`    | Vitesse de déplacement vers la gauche (6 pixels/frame par défaut) |

---

## ⚙️ Méthodes

### `Obstacle(float startX)`
- Initialise l’obstacle à la position horizontale `startX`.
- Place l’obstacle à une **position verticale aléatoire** dans l’écran :
```cpp
y = GetRandomValue(0, GetScreenHeight() - (int)height);
```

oid Update()

    Déplace l’obstacle vers la gauche (x -= speed).

    Si l’obstacle sort de l’écran à gauche, il est recyclé à droite avec une nouvelle position verticale aléatoire :

if (x + width < 0) {
    x = GetScreenWidth();
    y = GetRandomValue(0, GetScreenHeight() - (int)height);
}

void Draw()

    Dessine un rectangle rouge représentant visuellement l’obstacle :

DrawRectangle(x, y, width, height, RED);

Rectangle GetRect()

    Retourne un rectangle utile pour la détection de collision.
    

![image](https://github.com/user-attachments/assets/ef1f17ac-9ee7-4da1-932f-e3f541e730ec)

# 🎮 Classe `Menu` – Menu Principal du Jeu

La classe `Menu` gère l'affichage et la logique du **menu principal** du jeu. Elle permet au joueur de choisir s’il veut commencer une partie ou quitter le jeu.

---

## 📌 Objectif

- Afficher un écran d’accueil avec une image de fond et du texte.
- Réagir aux **touches clavier** :
  - `ENTRÉE` → Commencer à jouer.
  - `ECHAP` ou `ESPACE` → Quitter le jeu.

---

## 📦 Attributs

| Attribut        | Description                                          |
|------------------|------------------------------------------------------|
| `bool isPlaying` | Indique si le joueur a choisi de lancer le jeu.     |
| `bool shouldQuit`| Indique si le joueur souhaite quitter le jeu.       |

---

## ⚙️ Méthodes

### `Menu()`
- Initialise `isPlaying` et `shouldQuit` à `false`.

---

### `void Update()`
- Surveille les **touches clavier** pour mettre à jour l’état du menu :
```cpp
if (IsKeyPressed(KEY_ENTER))       isPlaying = true;
if (IsKeyPressed(KEY_ESCAPE) || IsKeyPressed(KEY_SPACE)) shouldQuit = true;
```

![image](https://github.com/user-attachments/assets/1aa49910-310c-4eaf-b8b7-dbfcdd5f698d)

---
## 🛠️ **Fichiers Principaux**

### **1. Fichier `Game.cpp`**

Le fichier `Game.cpp` contient la classe `Game`, qui gère la logique du jeu, y compris les éléments du jeu, les conditions de victoire et de défaite, ainsi que l'affichage des informations à l'écran.

#### **Détails de la classe `Game`**

- **Attributs** :
  - `Bike bike` : Le vélo contrôlé par le joueur.
  - `Obstacle obstacle` : Les obstacles à éviter dans le jeu.
  - `Menu menu` : Le menu principal du jeu (l'écran d'accueil).
  - `bool gameOver` : Indique si la partie est terminée.
  - `bool win` : Indique si le joueur a gagné.
  - `int timer` : Le temps restant avant la fin du jeu.
  - `int framesCounter` : Un compteur qui sert à gérer le temps du jeu.
  - `Vector2 moneyPos` : La position du carré jaune (argent) à récupérer.
  - `int moneyWidth` et `int moneyHeight` : La taille du carré jaune.

- **Méthodes principales** :
  - **`Update()`** : Met à jour l'état du jeu à chaque frame. Cela inclut :
    - Vérifier si le joueur a perdu ou gagné.
    - Mettre à jour la position du vélo et de l'obstacle.
    - Gérer le temps restant.
    - Vérifier les collisions.
  - **`Draw()`** : Affiche à l'écran les éléments du jeu :
    - Le vélo, les obstacles, et le carré jaune (si le temps le permet).
    - Le temps restant, et un message de victoire ou de défaite lorsque le jeu est terminé.
  - **`Reset()`** : Réinitialise les paramètres du jeu pour recommencer une nouvelle partie.

### **2. Fichier `main.cpp`**

Le fichier `main.cpp` est le point d'entrée du programme. C'est ici que le jeu commence.

#### **Détails de `main.cpp`**

- **Initialisation de la fenêtre** :
  - La fenêtre du jeu est créée avec les dimensions définies (800x450 pixels).
  - Le titre de la fenêtre est défini sur "Jeu de course de vélo 🚲 - Raylib C++".
  - Le jeu fonctionne à 60 images par seconde (FPS).

- **Boucle de jeu** :
  - La boucle `while (!WindowShouldClose())` est l'endroit où le jeu se met à jour et se dessine en continu.
  - À chaque itération de la boucle, la méthode `game.Update()` est appelée pour mettre à jour l'état du jeu.
  - Ensuite, la méthode `game.Draw()` est appelée pour afficher les éléments du jeu à l'écran.

- **Fermeture de la fenêtre** :
  - Quand l'utilisateur ferme la fenêtre, la fonction `CloseWindow()` est appelée pour nettoyer et fermer correctement la fenêtre du je

by Hanane & Karima 
