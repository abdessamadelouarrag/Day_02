#include <stdio.h>

int main(){
    int nbr[3];
    int som = 0;
    int n;

    printf("entrer les element :");
    scanf("%d", &n);

    for (int i = 0; i < n ; i++)
    {
        printf("entrer le nombre :");
        scanf("%d", &nbr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        som = som + nbr[i];
    }
    printf("la somme est : %d",som);

    return 0;
    
}