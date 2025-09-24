#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i;
    printf("Entrer une lettre: ");
    scanf("%s", &i);
    if(i>='A' && i<'Z'){
        printf("\nla lettre est majuscule.\n");
    }
    else{
        printf("\nla lettre est muniscule.\n");
    }
    return 0;
}
