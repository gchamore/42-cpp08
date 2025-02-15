# 📦 C++ - Module 08

## 📝 Présentation

Le module **C++ 08** introduit les **conteneurs de la STL**, les **itérateurs**, et les **algorithmes** standards en C++.  
L'objectif est d’apprendre à manipuler efficacement les collections de données avec des **outils modernes** de la bibliothèque standard.

---

## 🛠️ Fonctionnalités

- **Exercice 00 : Easy find**
  - Implémentation d’une fonction **template** `easyfind(T, int)`.
  - Recherche d’un entier dans un **container d’entiers**.
  - Retourne un **itérateur** pointant vers la première occurrence trouvée.
  - Lève une **exception** si l’élément est introuvable.

- **Exercice 01 : Span**
  - Création d’une classe `Span` capable de stocker **N entiers**.
  - Fonction `addNumber(int)` pour ajouter des nombres (**limité à N**).
  - Deux méthodes :
    - `shortestSpan()` : trouve la plus petite différence entre deux éléments.
    - `longestSpan()` : trouve la plus grande différence entre deux éléments.
  - Ajout d’une **fonction d’insertion par plage d’itérateurs**.

- **Exercice 02 : Abomination mutante**
  - Création d’une classe `MutantStack<T>` dérivée de `std::stack<T>`.
  - Ajout d’**itérateurs** pour rendre `std::stack` **itérable**.
  - Compatibilité avec **les itérateurs STL** (`begin()`, `end()`).
  - Comparaison avec **std::list** pour valider le comportement.

---

## 📌 Technologies Utilisées

- **C++ 98**  
- **Templates (fonctions et classes)**  
- **STL (Standard Template Library)**  
- **Conteneurs (`std::vector`, `std::list`, `std::stack`, etc.)**  
- **Itérateurs et algorithmes (`std::find`, `std::sort`, etc.)**  
- **Exceptions (`try` / `catch`)**  

---

## 🏗️ Structure du Projet

📂 ex00  
┣ 📜 Makefile  
┣ 📜 easyfind.hpp  
┣ 📜 easyfind.tpp  
┗ 📜 main.cpp  

📂 ex01  
┣ 📜 Makefile  
┣ 📜 Span.cpp  
┣ 📜 Span.hpp  
┗ 📜 main.cpp  

📂 ex02  
┣ 📜 Makefile  
┣ 📜 MutantStack.hpp  
┣ 📜 MutantStack.tpp  
┗ 📜 main.cpp  


---

## 🔥 Difficultés Rencontrées

- **Utilisation correcte des itérateurs STL** (`std::vector<int>::iterator`).  
- **Gestion des exceptions et erreurs (`std::exception`)** pour les cas limites.  
- **Optimisation des opérations sur les conteneurs (`std::sort`, `std::min_element`)**.  
- **Manipulation de `std::stack` avec des itérateurs** sans modifier son comportement natif.  
- **Compréhension du comportement des conteneurs standards (`std::vector`, `std::list`)**.  

---

## 🏗️ Mise en place

1. **Cloner le dépôt** :  
  ```bash
  git clone https://github.com/ton-repo/cpp08.git
  cd cpp08
  ```

2. **Compiler et exécuter chaque exercice** :

**Exercice 00** :   
   ```bash
   cd ex00
   make
   ./easyfind
   make fclean
   ```

**Exercice 01** :  
  ```bash
   cd ex01
   make
   ./span
   make fclean
   ```

**Exercice 02** :  
   ```bash
   cd ex02
   make
   ./mutantstack
   make fclean
   ```

---

## 👨‍💻 Équipe  

👤 Grégoire Chamorel (Gchamore)  

---

## 📜 Projet réalisé dans le cadre du cursus 42.  

Tu peux bien sûr modifier ce README selon tes besoins, ajouter plus de détails sur ton approche et des instructions d’installation précises. 🚀  
