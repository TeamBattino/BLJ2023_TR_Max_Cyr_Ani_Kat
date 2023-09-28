# Kontrollieren

## Testprotokoll

|   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|
|Nr.|Test|Eingabe|Erwartetes Ergebnis|Erhaltenes Ergebnis|Status|Überarbeited|
|1|Addieren von zwei positiven Zahlen|2 + 2|4|4|ok|-|
|2|Addieren von zwei negativen Zahlen|-2 + -3|-5|-5|ok|-|
|3|Subtrahieren von zwei positiven Zahlen|5 - 4|1|1|ok|-|
|4|Subtrahieren von zwei negativen Zahlen|-2 - -5|3|3|ok|-|
|5|Multiplizieren von zwei positiven Zahlen|2 * 36|72|72|ok|-|
|6|Multiplizieren von zwei negativen Zahlen|-27 * -60|1620|1620|ok|-|
|7|Dividieren von zwei positiven Zahlen|80 / 2|40|40|ok|-|
|8|Dividieren von zwei negativen Zahlen|-80 / 2|-40|-40|ok|-|
|9|Wurzel von einer Zahl ziehen|25|5|5|ok|-|
|10|Exponenten berechnen|2 (Basis) 5 (Exponent)|32|32|ok|-|
|11|Fakultät berechnen|5|120|120|ok|-|
|12|Dividieren durch 0|2 / 0|Error Meldung|Error Meldung|ok|-|
|13|Buchstaben anstelle von Operator|a|Error Meldung|Enter a math calculation:Enter a valid operation next time!Do you want to calculate again? (y/n)|nicht ok|ok|
|14|Buchstaben anstelle von Zahlen|a a|Error Meldung|Rechner restarted|nicht ok|ok|
|15|Bei Schere, Stein, Papier Buchstaben eingeben|a|Error Meldung|Error Meldung|ok|-|
|16|Bei Schere, Stein, Papier ungültige Zahl eingeben|4|Error Meldung|Error Meldung|ok|-|
|17|Sehr grosse zahlen eingeben|999999 / 999999|1|1|ok|-|
|18|Bei Menu Selectscreen zahl eingeben|3|Error Message|Started Calculator|nicht ok|ok|
|19|Bei Menu Selectscreen ungültiger Buchstaben eingeben|a|Error Message|Started Calculator|nicht ok|ok|

## Definition of Done

- [x] Funktionalität des Programmes ist gegeben und getestet
- [x] Code ist vollständig kompilierbar ohne Warnings und Errors
- [x] Include-Files enthalten eine Include-Guard
- [ ] Code einer Zeile soll nicht länger als 80 Zeichen sein
- [x] Code Convention gemäss diesem Dokument ist eingehalten, z.B. Struktur mit Klammern, eingerückt mit einheitlich 3-4 Leerschlägen
- [x] Bezeichner und Dateien folgen der Naming Convention gemäss diesem Dokument z.B. keine Umlaute und Leerschläge
- [x] Sprechende Namensgebung für Bezeichner (z.B. Variablen, Funktionen. Dateien)
- [x] Abstand vor und nach Operatoren (Ausnahme: i ++)
- [x] Redundanz vermeiden, d.h. Codezeilen, die mehrfach gebraucht werden in Funktionen auslagem
- [x] Kein «Toter Code» (heisst keine nicht verwendete Variablen, unerreichbarer oder auskommentierter Code)
- [ ] Defensiver Programmierstil, d.h. Vergleiche mit Konstante links, Vergleichswert rechts des Vergleiches
- [ ] Konstanten wurden sinnvoll angewendet (keine redundanten String-Literals)
- [x] Alle Variablen sind sinnvoll initialisiert
- [x] Globale Variablen sind verpönt d.h. sie müssen sehr gut begrünbar sein
- [x] Kommentare sind prägnant und unverzichtbar, also keine überflüssigen oder trivialen Kommentare
- [ ] Funktionen sind übersichtlich und eher kurzgefasst max 50 Zeilen
- [x] Treffende Verwendung von Loops, weshalb while, for, do-while
- [x] Wenn immer möglich positive Logik verwenden
- [ ] Fallthrough in switch-Statements müssen kommentiert sein, wenn es nicht offensichtlich ist (z.B. gleiches Verhalten bei ' a' und 'A' wäre offensichtlich)





