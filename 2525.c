#include<stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d", &a, &b, &c);
    d = a*60+b+c;
    a = d/60;
    b = d%60;
    if (a>=24){
        a = a-24;
    }
    printf("%d %d", a, b);
}