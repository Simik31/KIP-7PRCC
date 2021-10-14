#include "my.h"

int poctyZnaku(int* pocetMalych, int* pocetVelkych, int* pocetCislic) {
	char znak;
	int pocetZnaku = 0;
	*pocetMalych = 0;
	*pocetVelkych = 0;
	*pocetCislic = 0;

	do {
		znak = getchar();
		if (znak >= 'a' && znak <= 'z') (*pocetMalych)++;
		if (znak >= 'A' && znak <= 'Z') (*pocetVelkych)++;
		if (znak >= '0' && znak <= '9') (*pocetCislic)++;
		pocetZnaku++;
	} while (znak != '.');
	return pocetZnaku;
}

void nactiCisla(int* prvni, int* druhe, int* treti) {
	printf("Zadejte 1: ");
	scanf_s("%d", prvni);
	printf("Zadejte 2: ");
	scanf_s("%d", druhe);
	printf("Zadejte 3: ");
	scanf_s("%d", treti);
}

void vymenPodleVelikosti(int* prvni, int* druhy, int* treti) {
	if (*treti > * prvni)swap(prvni, treti);
	if (*treti > *druhy) swap(druhy, treti);
	if (*druhy > *prvni) swap(prvni, druhy);
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}