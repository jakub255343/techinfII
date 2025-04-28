#include <stdio.h>
#include <string.h>

void male_litery(char *ciag)
{
    while (*ciag)
    {
        if ('A' <= *ciag && *ciag <= 'Z')
        {
            *ciag += ('a' - 'A');
        }
        ciag++;
    }
}

void policzznaki(char *ciag)
{
    int wszystkie = 0;
    int litery = 0;

    while (*ciag)
    {
        wszystkie++;
        if ((*ciag >= 'A' && *ciag <= 'Z') || (*ciag >= 'a' && *ciag <= 'z'))
            litery++;
        ciag++;
    }

    printf("Wszystkie znaki: %d\n", wszystkie);
    printf("Litery: %d\n", litery);
}

void wielkie_litery(char *ciag)
{
    while (*ciag)
    {
        if ('a' <= *ciag && *ciag <= 'z')
        {
            *ciag -= ('a' - 'A');
        }
        ciag++;
    }
}


void combineStrings(char *result, char *str1, char *str2, char *str3) {

    snprintf(result, 150, "%s %s %s", str1, str2, str3);
}

int main(int argc, char const *argv[]) {

    char str1[] = "MikroSypek";
    char str2[] = "2003";
    char str3[] = "100%";
    char nowy_tekst[150];

    printf("\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);


    // Zmiana na małe litery
    male_litery(str1);
    male_litery(str2);
    male_litery(str3);
    printf("\n\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);


    // Połączmy z powrotem
    combineStrings(nowy_tekst, str1, str2, str3);
    printf("\n%s\n", nowy_tekst);

    wielkie_litery(str1);
    wielkie_litery(str2);
    wielkie_litery(str3);
    printf("\n\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    combineStrings(nowy_tekst, str1, str2, str3);
    printf("\n%s\n", nowy_tekst);

    printf("\n\n");
    policzznaki(str1);
    policzznaki(str2);
    policzznaki(str3);

    return 0;
}
