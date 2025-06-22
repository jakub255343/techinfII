#ifndef BAZA_H
#define BAZA_H

typedef struct {
    char marka[50];
    char model[50];
    int rok;
    float cena;
} Samochod;

void pokazAuta();
void dodajAuto();
void usunAuto();
void edytujAuto();
void filtrujAuta();
void zapiszDoPliku();
void dodajZPliku();
void zamienZPliku();
void zwolnijPamiec();

#endif

