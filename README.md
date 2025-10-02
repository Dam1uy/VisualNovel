# Visual Novel

## Character.hpp
- Adăugat `emotionLevel` (0-100) pentru a urmări intensitatea emoției personajului.
- Adăugat `relationshipLevel` (0-100) pentru a urmări relația cu jucătorul.
- Adăugat `ChangeEmotion(int delta)` pentru a modifica nivelul emoției.
- Adăugat `UpdateRelationship(int delta)` pentru a modifica nivelul relației.
- Adăugat `GetEmotionText()` pentru a returna emoția ca text.
- Adăugat `GetRelationshipStage()` pentru a returna stadiul relației ca text.

## Dialog.hpp
- Adăugat structura `Choice` cu `id`, `text`, `emotionDelta` și `relationshipDelta`.
- Adăugat structura `Dialog` cu `dialogId`, `speaker`, `text` și `choices`.
- Adăugat metoda `ApplyChoice(Character& c, int choiceId)` pentru a aplica efectele unei alegeri asupra unui personaj.

## Scene.hpp
- Adăugat structura `Scene` cu `sceneId`, `name`, `description`, `backgroundImage`, `musicTrack`, `isLocked`, `nextSceneIds` și `dialogs`.
- Adăugată metoda `ShowScene()` pentru a afișa scena și dialogurile acesteia.

## Engine.hpp / engine.cpp
- Adăugată clasa `Engine` pentru a gestiona bucla jocului și starea acestuia.
- Membri adăugați: `isRunning`, `currentSceneId`, `playerName`, `characters`, `scenes`.
- Metode adăugate:
  - `Init(const std::string& name)` – inițializează jocul și încarcă fișierul salvat.
  - `SaveGame()` – salvează starea jocului în fișier.
  - `LoadGame()` – încarcă starea jocului din fișier.
  - `Update()` – procesează scena curentă, dialogurile și alegerile.
  - `Loop()` – bucla principală a jocului.

## main.cpp
- Adăugat punct de intrare simplu:
  - Creează obiect `Engine`.
  - Inițializează cu numele jucătorului.
  - Apelează `Loop()` pentru a porni jocul.

## build.cmd
- Adăugat script pentru a compila `engine.cpp` și `main.cpp` și a le lega într-un `VisualNovel.exe`.

## .gitignore
- Adăugat intrări pentru a ignora fișierele obiect (*.obj) și executabile (*.exe), plus artefacte comune de build.




