#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Entrer le premier nombre: ");
    scanf("%d", &a);

    printf("Entrer le deuxieme nombre: ");
    scanf("%d", &b);

    if(a==b){
        printf("\nLe triple de la somme est: %d\n", a * b * 3);

    }
    else{
        printf("\nla somme est: %d\n", a + b);
    }
    return 0;
}
