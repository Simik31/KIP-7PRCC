#include "my.h"

int main()
{
    int poctyMalych, poctyVelkych, pocetCislic;
    int pocetZnaku = poctyZnaku(&poctyMalych, &poctyVelkych, &pocetCislic);
    printf("Malych: %d\nVelkych: %d\nCisel: %d\nCelkem: %d\n\n", poctyMalych, poctyVelkych, pocetCislic, pocetZnaku);

    int *prvni, *druhe, *treti;
    if ((prvni = (int*)malloc(sizeof(int))) == NULL) return -1;
    if ((druhe = (int*)malloc(sizeof(int))) == NULL) return -2;
    if ((treti = (int*)malloc(sizeof(int))) == NULL) return -3;

    nactiCisla(prvni, druhe, treti);
    printf("\nPrvni: %d\nDruhe: %d\nTreti: %d\n\n", *prvni, *druhe, *treti);

    vymenPodleVelikosti(prvni, druhe, treti);
    printf("Serazene:\nPrvni: %d\nDruhe: %d\nTreti: %d\n\n", *prvni, *druhe, *treti);

    free(prvni);
    free(druhe);
    free(treti);

    prvni = NULL;
    druhe = NULL;
    treti = NULL;
}