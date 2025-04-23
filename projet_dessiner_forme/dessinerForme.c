#include <stdio.h>
#include "dessinerForme.h"

void carre(int longueur) {
    for (int i = 0; i < longueur; i++) {
        for (int j = 0; j < longueur; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void rectangle(int longueur, int largeur) {
    for (int i = 0; i < largeur; i++) {
        for (int j = 0; j < longueur; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void triangleQuelconque(int long1, int long2, int long3) {
    // Pour simplifier, nous allons dessiner un triangle rectangle
    // avec la base et la hauteur égales à long1
    for (int i = 1; i <= long1; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void triangleIsocele(int long1, int long2) {
    // Pour simplifier, nous allons dessiner un triangle isocèle
    // avec la base égale à long1
    int hauteur = long2;
    for (int i = 0; i < hauteur; i++) {
        for (int j = 0; j < hauteur - i - 1; j++) {
            printf("  "); // espaces pour centrer le triangle
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleEquilateral(int longueur) {
    for (int i = 0; i < longueur; i++) {
        for (int j = 0; j < longueur - i - 1; j++) {
            printf("  "); // espaces pour centrer le triangle
        }
        for (int j = 0; j < i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}