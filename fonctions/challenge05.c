#include <stdio.h>

int fact(int n){

    int res = 1;

    for (int i = 1; i <= n ; i++)
    {
        res *= i;
    }
    return res;
}

int main(){
    int x;
    int f;

    printf("entrer x : \n");
    scanf("%d", &x);
    
    f = fact(x);

    printf("%d", f);

    return 0;
}