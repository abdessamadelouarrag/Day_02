#include <stdio.h>

int min(int a, int b){
    if (a < b)
    {
        return a;
    }
    else
    return b;
}

int main(){
    int x,y;
    int mn;

    printf("entrer x : \n");
    scanf("%d", &x);

    printf("entrer y : \n");
    scanf("%d", &y);

    mn = min(x,y);

    printf("le min entre %d et %d est = %d", x,y,mn);

    return 0;
}