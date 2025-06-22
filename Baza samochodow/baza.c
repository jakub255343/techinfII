#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "baza.h"

Samochod* baza = NULL;
int liczba_aut = 0;

void pokazAuta() {
    if (liczba_aut == 0) {
        printf("Brak samochodow w bazie.\n");
        return;
    }
    for (int i = 0; i < liczba_aut; i++) {
        printf("[%d] %s %s, Rok: %d, Cena: %.2f\n", i + 1,
               baza[i].marka, baza[i].model, baza[i].rok, baza[i].cena);
    }
}

void dodajAuto() {
    baza = realloc(baza, (liczba_aut + 1) * sizeof(Samochod));
    printf("Podaj marke: ");
    scanf("%s", baza[liczba_aut].marka);
    printf("Podaj model: ");
    scanf("%s", baza[liczba_aut].model);
    printf("Podaj rok produkcji: ");
    scanf("%d", &baza[liczba_aut].rok);
    printf("Podaj cene: ");
    scanf("%f", &baza[liczba_aut].cena);
    liczba_aut++;
}

void usunAuto() {
    int index;
    printf("Podaj numer auta do usuniecia: ");
    scanf("%d", &index);
    index--;
    if (index < 0 || index >= liczba_aut) {
        printf("Niepoprawny indeks.\n");
        return;
    }
    for (int i = index; i < liczba_aut - 1; i++) {
        baza[i] = baza[i + 1];
    }
    liczba_aut--;
    baza = realloc(baza, liczba_aut * sizeof(Samochod));
    printf("Auto usuniete.\n");
}

void edytujAuto() {
    int index;
    printf("Podaj numer auta do edycji: ");
    scanf("%d", &index);
    index--;
    if (index < 0 || index >= liczba_aut) {
        printf("Niepoprawny indeks.\n");
        return;
    }
    printf("Nowa marka: ");
    scanf("%s", baza[index].marka);
    printf("Nowy model: ");
    scanf("%s", baza[index].model);
    printf("Nowy rok: ");
    scanf("%d", &baza[index].rok);
    printf("Nowa cena: ");
    scanf("%f", &baza[index].cena);
}

void filtrujAuta() {
    char marka[50];
    printf("Podaj marke do wyszukania: ");
    scanf("%s", marka);
    for (int i = 0; i < liczba_aut; i++) {
        if (strcmp(baza[i].marka, marka) == 0) {
            printf("[%d] %s %s, Rok: %d, Cena: %.2f\n", i + 1,
                   baza[i].marka, baza[i].model, baza[i].rok, baza[i].cena);
        }
    }
}

void zapiszDoPliku() {
    FILE* plik = fopen("auta.txt", "w");
    if (!plik) {
        printf("Blad otwierania pliku.\n");
        return;
    }
    fprintf(plik, "%d\n", liczba_aut);
    for (int i = 0; i < liczba_aut; i++) {
        fprintf(plik, "%s %s %d %.2f\n", baza[i].marka, baza[i].model,
                baza[i].rok, baza[i].cena);
    }
    fclose(plik);
    printf("Zapisano dane do pliku.\n");
}

void dodajZPliku() {
    FILE* plik = fopen("auta.txt", "r");
    if (!plik) {
        printf("Nie mozna otworzyc pliku.\n");
        return;
    }
    int ile;
    fscanf(plik, "%d", &ile);
    baza = realloc(baza, (liczba_aut + ile) * sizeof(Samochod));
    for (int i = 0; i < ile; i++) {
        fscanf(plik, "%s %s %d %f", baza[liczba_aut].marka,
               baza[liczba_aut].model, &baza[liczba_aut].rok,
               &baza[liczba_aut].cena);
        liczba_aut++;
    }
    fclose(plik);
    printf("Dane dodane z pliku.\n");
}

void zamienZPliku() {
    FILE* plik = fopen("auta.txt", "r");
    if (!plik) {
        printf("Nie mozna otworzyc pliku.\n");
        return;
    }
    int ile;
    fscanf(plik, "%d", &ile);
    free(baza);
    baza = malloc(ile * sizeof(Samochod));
    liczba_aut = 0;
    for (int i = 0; i < ile; i++) {
        fscanf(plik, "%s %s %d %f", baza[i].marka, baza[i].model,
               &baza[i].rok, &baza[i].cena);
        liczba_aut++;
    }
    fclose(plik);
    printf("Dane zastapione danymi z pliku.\n");
}

void zwolnijPamiec() {
    free(baza);
}
