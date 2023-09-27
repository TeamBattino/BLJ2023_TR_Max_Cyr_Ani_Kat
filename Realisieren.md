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

```c
int PaperStoneSissors()
{
    char playrps = 'y';
    while (playrps == 'y')
    {
        int playerguess = 0;
        srand(time(NULL));
        int randomnumber = (rand() % (3 - 1 + 1)) + 1;
        printf("\e[33mRock Paper Sissors\e[0m\n\nEnter your Guess!\n<1> Sissor\n<2> Rock\n<3> Paper\n");
        scanf("%d", &playerguess);
        if (playerguess == 1)
        {
            if (randomnumber == 1)
            {
                printf("\e[30mTie!\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[31mYou Lose!\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[32mYou Win!\e[0m\n");
            }
        }
        else if (playerguess == 2)
        {
            if (randomnumber == 1)
            {
                printf("\e[32mYou Win!\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[30mTie!\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[31mYou Lose!\e[0m\n");
            }
        }
        else if (playerguess == 3)
        {
            if (randomnumber == 1)
            {
                printf("\e[31mYou Lose!\e[0m\n");
            }
            else if (randomnumber == 2)
            {
                printf("\e[32mYou Win!\e[0m\n");
            }
            else if (randomnumber == 3)
            {
                printf("\e[30mTie!\e[0m\n");
            }
        }
        else
        {
            printf("\e[31mError!\e[0m\n");
        }
        printf("Do you want to play again? (y/n)\n");

        scanf(" %c", &playrps);
    }

}
```

______
### Max

__________
### Anik
Ich habe mit dem Coden der einen hälfte der Operatoren begonnen, da wir die Operatoren auf Katarina und mich augeteilt haben.
Wir haben uns geeinigt das ich die Operatoren Minus, Mal und Exponente übernehme und Katraina die anderen drei. Ich brauchte am anfang etwas Hilfe die ich auch von meinen Gruppenmitgliedern erhielt.
Ich habe den Code auch so geschrieben das man ihn gut ins Main einbauen kann.

So sieht mein Code aus:

int subtract(int num1, int num2)
{
    int subtract = num1 - num2;
    printf("%d\n", subtract);
}

int multiplication(int num1, int num2)
{
    int multiplication = num1 * num2;
    printf("%d\n", multiplication);
}
int Expo(int base, int expo)
{
    int result = 1;
    while (expo > 0)
    {
        if (expo % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        expo /= 2;
    }
    printf("%d\n", result);
}




____________
### Katarina
________________
