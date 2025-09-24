#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    printf("Entrer un caractère: ");
    scanf("%s", &i);
    switch(i){
case 'a':
    printf("C'est une voyelle.");
    break;
case 'e':
    printf("C'est une voyelle.");
    break;
case 'i':
    printf("C'est une voyelle.");
    break;
case 'o':
    printf("C'est une voyelle.");
    break;
case 'u':
    printf("C'est une voyelle.");
    break;
case 'y':
    printf("C'est une voyelle.");
    break;
    default:
        printf("c'est pas une voyelle.");

    }
    return 0;
}
