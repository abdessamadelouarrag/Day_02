#include <stdio.h>

int mult(int a, int b){
    return a * b;
}

int main(){
    int x,y;
    int m;

    printf("entrer x :\n");
    scanf("%d", &x);

    printf("entrer y :\n");
    scanf("%d", &y);

    m = mult(x,y);

    printf("le multiplication de %d et %d = %d", x,y,m);

    return 0;
}
//multiplication