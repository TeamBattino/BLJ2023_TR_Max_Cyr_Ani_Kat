# Realisieren

Hier ist ein Überblick, wer wann was gemacht hat.

|   |   |   |   |   |
|---|---|---|---|---|
||21.09|22.09|27.09|28.09|
|Anik|Ein Teil der Tasklist & Zeitaufteilung erstellt|Exponenten, Subtrahieren, Multiplizieren, gecoded|Fehler behoben, Präsentation||
|Cyrill|Flussdiagramm + Tasklist + ReadMe erstellt + Git repo erstellt|Schere, Stein, Papier erstellt|Fehler behoben, Dokumentation||
|Katarina|Ein Teil der Tasklist & Zeitaufteilung erstellt|Summieren, Wurzel, Fakultät erledigt|Fehler behoben, Wurzel überarbeited||
|Max|Flussdiagramm + Tasklist erledigt|Main, Dividieren gecodet|Fehler behoben, Main verbessert||

_______
### Cyrill

Ich habe mit der Zusatzaufgabe Schere, Stein, Papier angefangen, da wir sicher eine Zusatzaufgabe brauchen und wir uns für diese entschieden haben. 

Für das habe ich zuerst eine neue Funktion erstellt die man dan einfach in das Main einbauen kann.

Dannach habe ich überlegt wie ich Schere, Stein, Papier coden kann. Ich bin mit dem System aufgekommen das ich jeder Aktion eine Zahl gebe und diese dann mit einer vom Computer generierten Zahl vergleiche.

1 = Schere  
2 = Stein  
3 = Papier  

1 < 2 -> Schere - Stein  
1 < 3 -> Schere - Papier  
1 = 1 -> Schere - Schere  
2 < 3 -> Stein - Papier  
2 = 2 -> Stein -Stein   
3 < 1 -> Papier - Schere  
3 = 3 -> Papier - Papier  

Doch als ich das am coden war habe ich gemerkt dass es nicht funktioniert, nur schon weil 3 < 1 nicht funktionieren kann.

Also habe ich mir etwas anderes überlegt und mit dem herausgekommen:

Ich habe es so gemacht dass zuerst mit if else überprüft wird was der Spieler geraten hat. Davor wird natürlich eine zufällige Zahl von 1-3 generiert, um dem Computer entweder Schere, Stein oder Papier zugewiesen. Und nach dem wir noch auch mit if else überprüft was der Computer für eine Zahl hat. Aus der Kombination von deiner und der Zahl von dem Computer wird dann das Ergebnis herausgefunden und ausgegeben.

______
### Max
Meine Aufgabe war es das Main und die Funktion für das Dividieren des Taschenrechners zu erstellen.

**Beginn des Taschenrechners:**

Bevor ich mit dem Einfügen und bearbeiten der Funktionen begonnen habe, erstellte ich eine kurze Einführung in den Taschenrechner → In einer While (1) loop beginnt der Taschenrechner in einem Menü, bei dem man auswählen kann ob man den Taschenrechner benutzen will oder unsere Zusatzfunktion, das Schere, Stein, Papier, verwenden möchte.

Wenn man die Zusatzfunktion auswählt wird man direkt in die Funktion des Schere, Stein, Papier Spiels befördert.

**Im Taschenrechner:**

Beim Auswählen des Taschenrechners wird der Code wie folgt ablaufen: Ich erstellte ein kurzes Willkommen und eine Liste mit den möglichen mathematischen Operationen. In einer weiteren While loop, welche besagt, dass während man im Taschenrechner ist, die Switch Cases und das Wiederverwenden des Taschenrechners funktioniert.

**Switch Cases und Funktionen:**

Um mit verschiedenen mathematischen Operationen zu rechnen entschied ich mich für ein Switch Case Kontrollstruktur. Dazu habe ich zu jeder Operation einen Case erstellt und die dazugehörige Funktion eingefügt. Damit die Funktionen im Main funktionieren musste ich als erstes das Head-File im Main includen und die Deklaration der Funktionen ins Head-File einfügen. Als nächstes passte ich die Parameter in der Funktion auf die Variablen im Main-File anpassen.

Damit es möglich ist eine Möglichkeit zu haben bei der man das Operationszeichen am Anfang schreiben kann (Bei den Wurzeln und Fakultät) und eine Möglichkeit hat bei dem man eine normale Rechnung eingeben kann musste ich die scanf() Funktion in die Switch Cases einfügen. Mein Plan war es zuerst, dass man von Anfang an die Rechnung schreibt und man erst danach in einer der Cases fällt, da es aber Optionen gibt bei dem man das Operationszeichen am Anfang schreiben muss, war dies nicht mehr möglich.

Die Lösung dazu war, dass man eine Operation auswählen muss bevor man mit dem Rechnen beginnt. Somit war es möglich bei den Operationen, welche 1 oder 2 Zahlen benötigten, die gewünschten Zahlen einzugeben und das Resultat zu erhalten ohne, dass man auf Probleme stösst.

**Funktion für das Dividieren:**

Ich erstelle als erstes eine if else Kontrollstruktur damit es im Terminal angezeigt wird, dass es nicht möglich ist durch eine 0 zu teilen.

Als nächstes deklarierte und initialisierte ich die Variable für die Rechnung. Dabei musste ich achten, dass ich die Parameter der Funktion, innerhalb der Funktion zu einem Float Datentyp ändere damit wir eine Dezimalzahl erhalte. Um ein Resultat zu erhalten welches auf 3 Stellen genau ist, habe ich den format specifier ein bisschen verändert. Und zwar habe ich anstatt ein “%f” ein “%.3f” geschrieben → das “.3” vor dem “f” macht es, dass das Resultat auf 3 Stellen genau angezeigt wird.
__________
### Anik
Ich habe mit dem Coden der einen hälfte der Operatoren begonnen, da wir die Operatoren auf Katarina und mich augeteilt haben.
Wir haben uns geeinigt das ich die Operatoren Minus, Mal und Exponente übernehme und Katarina die anderen drei. Ich brauchte am anfang etwas Hilfe die ich auch von meinen Gruppenmitgliedern erhielt.
Ich habe den Code auch so geschrieben das man ihn gut ins Main einbauen kann.

____________
### Katarina
Mir wurden das Addieren, die Wurzel und die Fakultät als Operatoren zugewiesen. 

**Addieren**
Ich fing zuerst mit dem Addieren an, das es der einfachste Operator zum coden war. Hier wird eine ganz einfache addition mit dem '+' Symbol durchgeführt.
________________
