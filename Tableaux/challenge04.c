#include <stdio.h>

int main(){
    int nbr[4];
    int max;
    int a;

    printf("entrer le nbr d element :");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("entrer le nombre :");
        scanf("%d", &nbr[i]);
    }

    max = nbr[0];

    for (int i = 0; i < a; i++)
    {
        if (nbr[i] > max)
        {
            max = nbr[i];
        } 
    }
    printf("le max = %d", max);
    return 0;
}