#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Entrer un nombre: ");
    scanf("%d", &i);

    if(i%2==0){
        printf("\nce nombre est pair.\n");

    }
    else {
        printf("\nce nombre est impair.\n");
    }

    return 0;
}
