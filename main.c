#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double R = 8.314;

double P, V, n, T;
char choice;

int main() {

    printf("What do you want to calculate? (P, V, n, T): ");
    scanf(" %c", &choice);

    if (choice == 'P' || choice == 'p') {

        printf("Enter volume V [m^3]: ");
        scanf("%lf", &V);

        printf("Enter amount of substance n [mol]: ");
        scanf("%lf", &n);

        printf("Enter temperature T [K]: ");
        scanf("%lf", &T);

        P = (n * R * T) / V;
        printf("Pressure P = %.2f Pa\n", P);
    }
    else if (choice == 'V' || choice == 'v') {

        printf("Enter pressure P [Pa]: ");
        scanf("%lf", &P);

        printf("Enter amount of substance n [mol]: ");
        scanf("%lf", &n);

        printf("Enter temperature T [K]: ");
        scanf("%lf", &T);

        V = (n * R * T) / P;
        printf("Volume V = %.6f m^3\n", V);
    }
    else if (choice == 'n' || choice == 'N') {

        printf("Enter pressure P [Pa]: ");
        scanf("%lf", &P);

        printf("Enter volume V [m^3]: ");
        scanf("%lf", &V);

        printf("Enter temperature T [K]: ");
        scanf("%lf", &T);

        n = (P * V) / (R * T);
        printf("Amount of substance n = %.6f mol\n", n);
    }
    else if (choice == 'T' || choice == 't') {

        printf("Enter pressure P [Pa]: ");
        scanf("%lf", &P);

        printf("Enter volume V [m^3]: ");
        scanf("%lf", &V);

        printf("Enter amount of substance n [mol]: ");
        scanf("%lf", &n);

        T = (P * V) / (n * R);
        printf("Temperature T = %.2f K\n", T);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
