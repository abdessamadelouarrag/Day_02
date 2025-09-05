#include <stdio.h>

int fibo(int n){
    if (n <= 1)
    {
        return n;
    }
    else
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int nb;
    int fb;

    printf("entrer le nombre de fibo : \n");
    scanf("%d", &nb);

    fb = fibo(nb);

    printf("le fibo de %d est : %d\n", nb,fb);

    return 0;
}