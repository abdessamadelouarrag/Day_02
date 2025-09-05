#include <stdio.h>

int max(int a, int b){
    if (a > b)
    {
        return a;
    }
    else
    return b;
}

int main(){
    int x,y;
    int mx;

    printf("entrer x : \n");
    scanf("%d", &x);

    printf("entrer y : \n");
    scanf("%d", &y);

    mx = max(x,y);

    printf("le max entre %d et %d = %d",x,y,mx);

    return 0;
}