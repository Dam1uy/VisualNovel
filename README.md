# VisualNovel

## Scopul proiectului

Acest proiect are ca scop familiarizarea studentului cu implementarea claselor și interacțiunea cu obiectele acestora în C++. De asemenea, studentul va dobândi cunoștințe de bază despre compilarea și construcția proiectelor din linia de comandă, gestionarea fișierelor sursă și utilizarea unui sistem de versionare (Git).

## Structura și rolul fișierelor

### character.hpp / character.cpp
- **Ce conține:** Definirea structurii `Character` cu atribute pentru nume, rol, descriere, nivel de emoție, nivel de relație și stare activă.
- **Pentru ce se folosește:** Reprezintă un personaj din joc și oferă metode pentru afișare, modificarea emoției și relației, precum și obținerea unor descrieri simple ale stării.

### Dialog.hpp / Dialog.cpp
- **Ce conține:** Structura `Dialog` cu atribute pentru identificator, vorbitor, text, emoție, importanță, legături către dialoguri următoare și opțiuni de alegere.
- **Pentru ce se folosește:** Permite gestionarea dialogurilor din joc și aplicarea efectelor alegerilor asupra personajelor.

### Scene.hpp / Scene.cpp
- **Ce conține:** Structura `Scene` cu atribute pentru identificator, nume, descriere, imagine de fundal, muzică, stare de blocare, legături către scene următoare și dialoguri.
- **Pentru ce se folosește:** Reprezintă o scenă din poveste, cu metode pentru afișarea conținutului acesteia.

### Engine.hpp / engine.cpp
- **Ce conține:** Clasa `Engine` cu atribute pentru starea jocului, scena curentă, numele jucătorului, lista de personaje și scene.
- **Pentru ce se folosește:** Gestionează logica principală a jocului, inițializarea, actualizarea și rularea buclei de joc.

### main.cpp
- **Ce conține:** Punctul de intrare al aplicației.
- **Pentru ce se folosește:** Creează un obiect `Engine`, îl inițializează cu numele jucătorului și pornește bucla principală a jocului.

### build.cmd
- **Ce conține:** Script pentru compilarea fișierelor sursă și generarea executabilului.
- **Pentru ce se folosește:** Permite construcția manuală a proiectului din linia de comandă, fără a folosi un IDE.

### .gitignore
- **Ce conține:** Reguli pentru ignorarea fișierelor obiect, executabile și artefacte temporare.
- **Pentru ce se folosește:** Asigură că fișierele generate automat nu sunt urcate în repository.




