//la somme 
#include <stdio.h>

int somme(int a, int b){
    return a + b;
}

int main(){

    int x,y;

    int s;

    printf("entrer le nombre x :\n");
    scanf("%d", &x);

    printf("entrer le nombre y :\n");
    scanf("%d", &y);

    s = somme(x,y);

    printf("la somme de %d et %d = %d", x,y,s);

    return 0;
}