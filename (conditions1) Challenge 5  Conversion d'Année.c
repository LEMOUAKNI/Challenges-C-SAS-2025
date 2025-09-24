#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, n;
    printf("Entrer le nombre d'annee:");
    scanf("%d", &n);
    printf("\n********MENU*********\n");
    printf("1.convertire en mois.\n");
    printf("2.convertire en jours.\n");
    printf("3.convertire en heures.\n");
    printf("4.convertire en minutes.\n");
    printf("5.convertire en secondes.\n");
    printf("\nentre votre choix: ");
    scanf("%d", &c);

    switch(c){
case 1:
    printf("\nmois: %d\n", n * 12);
    break;
case 2:
    printf("\njours: %d\n", n * 365);
    break;
case 3:
    printf("\nheures: %d\n", n * 365 * 24);
    break;
case 4:
    printf("\nminutes: %d\n", n * 365 * 24 * 60);
    break;
case 5:
    printf("\nsecondes: %d\n", n * 365 * 24 * 60 * 60);
    break;
default:
    printf("ERREUR");

      }
    return 0;
}

