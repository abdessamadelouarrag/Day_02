#include <stdio.h>

int main(){
    int nbr[100];
    int h;

    printf("entrer l'elements de tableau :");
    scanf("%d", &h);

    for (int i = 0; i < h; i++)
    {
        printf("entrer les nombre :");
        scanf("%d", &nbr[i]);
    }

    for (int i = 0; i < h; i++)
    {
        printf("nbr [%d]: %d\n", i,nbr[i]);
    }
    return 0;
}