# VisualNovel

## Denumirea jocului
Mistery Lake

## Descrierea jocului
"Mistery Lake" este un roman vizual plasat într-un orășel izolat de lângă un lac misterios.
Jucătorul preia rolul unui protagonist care revine în oraș pentru a investiga dispariția unui prieten din copilărie.
Pe parcurs, va interacționa cu locuitorii enigmatici, va descoperi amintiri ascunse și va explora împrejurimile pline de suspans,
luând decizii care influențează povestea și finalul jocului.

## Descrierea regulilor de joc
- Jucătorul citește dialoguri și descrieri de scenă.
- La anumite momente, jucătorul face alegeri care influențează firul narativ și relațiile cu personajele.
- Fiecare alegere poate dezvălui indicii sau poate ascunde informații, afectând finalul jocului.
- Jocul se termină cu unul dintre mai multe finaluri, în funcție de deciziile luate.

## Descrierea fiecărei structuri de date (rol / sarcină)

- `Character`: Reprezintă un personaj din joc, incluzând nume, descriere, relații și starea emoțională. Folosit pentru a gestiona interacțiunile și evoluția personajelor.
- `Scene`: Definește o scenă din poveste, incluzând decorul, personajele prezente și posibilele acțiuni sau alegeri. Ajută la structurarea narativă și la tranziția între momentele cheie.
- `Dialog`: Stochează replicile și opțiunile de dialog pentru fiecare scenă. Permite ramificarea poveștii în funcție de alegerile jucătorului.
- `Engine`: Gestionează logica principală a jocului, inclusiv progresul narativ, salvarea/încărcarea stării și procesarea alegerilor jucătorului.
