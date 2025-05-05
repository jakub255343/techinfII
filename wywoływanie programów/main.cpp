/* #include <stdio.h>
#include <stdlib.h>

void usage(const char *program_name) {
    printf("Sposob uzycia: %s \n<liczba1> <operator> <liczba2>\n", program_name);
    printf("Dostepne operacje: add(+), substract(-), multiply(*), divide(/)\n");
    exit(1);
}

double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
            if (num2 == 0) {
                printf("Blad: dzielenie przez zero!\n");
                exit(1);
            }
            return num1 / num2;
        default:
            printf("Blad: nieznany operator '%c'.\n", op);
            exit(1);
    }
}

int main(int argc, char const *argv[]) {

    if (argc != 4) {
        usage(argv[0]);
    }

    double num1 = atof(argv[1]);
    double num2 = atof(argv[3]);
    char op = argv[2][0];

    double result = calculate(num1, num2, op);

    printf("Wynik: %.2f\n", result);

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
void usage(const char *program_name) {
    printf("Sposob uzycia: %s \n<liczba1> <operator> <liczba2>\n", program_name);
    printf("Dostepne operacje: add(+), substract(-), multiply(*), divide(/)\n");
    exit(1);
}

int main(int argc, char const *argv[]) {
    if (argc < 4)
        usage(argv[0]);
    double num1 = atof(argv[2]);
    double num2 = atof(argv[4]);
    if (argc<3)
        usage(argv[0]);
    
    return 0;
}
}



