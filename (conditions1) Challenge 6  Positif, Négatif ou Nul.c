#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
     printf("Entrer un nombre: ");
     scanf("%d", &i);
     if(i<0){
        printf("\nce nombre est negatif.\n");
     }
     else if(i>0){
        printf("\nce nombre est positif.\n");
     }
    else{
        printf("\nle nombre est nul\n.");
    }
    return 0;
}
