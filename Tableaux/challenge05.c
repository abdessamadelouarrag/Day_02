#include <stdio.h>

int main(){
    int nbr[40];
    int min;
    int a;

    printf("entrer nbr d element : ");
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("entrer le nombre : ");
        scanf("%d", &nbr[i]);
    }

    min = nbr[0];

    for (int i = 0; i < a; i++)
    {
        if (nbr[i] < min)
        {
            min = nbr[i];
        }
    }
    printf("le min est : %d", min);

    return 0;
}