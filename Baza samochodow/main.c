#include <stdio.h>
#include "baza.h"

int main() {
    int wybor;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Pokaz auta\n");
        printf("2. Dodaj auto\n");
        printf("3. Usun auto\n");
        printf("4. Edytuj auto\n");
        printf("5. Filtruj auta\n");
        printf("6. Zapisz do pliku\n");
        printf("7. Dodaj z pliku\n");
        printf("8. Zamien z pliku\n");
        printf("0. Wyjdz\n");
        printf("Twoj wybor: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1: pokazAuta(); break;
            case 2: dodajAuto(); break;
            case 3: usunAuto(); break;
            case 4: edytujAuto(); break;
            case 5: filtrujAuta(); break;
            case 6: zapiszDoPliku(); break;
            case 7: dodajZPliku(); break;
            case 8: zamienZPliku(); break;
            case 0: break;
            default: printf("Nieznana opcja.\n"); break;
        }
    } while (wybor != 0);

    zwolnijPamiec();
    return 0;
}
