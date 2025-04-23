#include <stdio.h>
#include "dessinerForme.h"
int main() {
    printf("Carre:\n");
    carre(5);

    printf("\nRectangle:\n");
    rectangle(5, 3);

    printf("\nTriangle Quelconque:\n");
    triangleQuelconque(5, 5, 5);

    printf("\nTriangle Isocele:\n");
    triangleIsocele(5, 5);

    printf("\nTriangle Equilateral:\n");
    triangleEquilateral(5);
    
    return 0;
}