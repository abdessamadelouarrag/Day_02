#include <stdio.h>

int main(){
    int nbr[4];
    int mul = 1;
    int nm;

    printf("entrer le nombre de mul :");
    scanf("%d", &nm);

    for (int i = 0; i < 4; i++)
    {
        printf("entrer le nombre : ");
        scanf("%d", &nbr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        mul = nm * nbr[i];
        printf("le multiplication de nbr[%d] : %d\n", i,mul);
    }

    return 0;
    
}