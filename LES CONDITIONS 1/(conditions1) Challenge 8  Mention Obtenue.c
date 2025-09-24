#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Entrer votre note:");
    scanf("%d", &i);
    if(i<10){
        printf("\nRecale\n");
    }
    else if(i>=10 && i<12){
        printf("\nPassable\n");
    }
    else if(i>=12 && i<14){
        printf("\nAssez bien\n");
    }
    else if(i>=14  &&  i<16){
        printf("\nBien\n");
    }
    else{
        printf("\nTres bien\n");
    }
    return 0;
}
