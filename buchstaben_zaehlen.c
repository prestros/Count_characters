// Programm zum Zählen von Zeichen in Zeichenketten/Strings
// Autor: Fabian Prestros
// Datum: 01.12.2020
#include <stdio.h>
#include <string.h>


int main()
{
	char zeichenkette[20];
	char zeichen;
	int laenge = 0;
	int kleinbuchstaben = 0;
	int grossbuchstaben = 0;
	int restzeichen = 0;

	// Zeichenkette einlesen
	printf("Bitte geben Sie eine Zeichenkette ein: ");
	gets_s(zeichenkette, 20);

	// Das in der Zeichenkette zu suchende Zeichen einlesen
	printf("Bitte geben Sie das suchende Zeichen ein: ");
	zeichen = getchar();

	laenge = strlen(zeichenkette);							// Anzahl der Zeichen in der Zeichenkette ermitteln

	// Kleinbuchstaben zählen
	if (zeichen >= 'a' && zeichen <= 'z')
	{
		for (int i = 0; i < laenge; i++)
		{
			if (zeichenkette[i] == zeichen)
				kleinbuchstaben++;
		}

		zeichen = toupper(zeichen);							// Umwandeln von Klein- in Großbuchstaben

		for (int i = 0; i < laenge; i++)
		{
			if (zeichenkette[i] == zeichen)
				grossbuchstaben++;
		}
	}

	// Großbuchstaben zählen
	else if (zeichen >= 'A' && zeichen <= 'Z')
	{
		for (int i = 0; i < laenge; i++)
		{
			if (zeichenkette[i] == zeichen)
				kleinbuchstaben++;
		}

		zeichen = tolower(zeichen);							// Umwandeln von Groß- in Kleinbuchstaben

		for (int i = 0; i < laenge; i++)
		{
			if (zeichenkette[i] == zeichen)
				grossbuchstaben++;
		}
	}

	// Andere Zeichen als Buchstaben zählen
	else
	{
		for (int i = 0; i < laenge; i++)
		{
			if (zeichenkette[i] == zeichen)
				restzeichen++;
		}
	}

	printf("Anzahl der Kleinbuchstaben = %d\n", kleinbuchstaben);
	printf("Anzahl der Gro\xe1 \bbuchstaben = %d\n", grossbuchstaben);
	printf("Anzahl anderer Zeichen = %d\n", restzeichen);
}