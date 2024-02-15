#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    int c, d, e;
    c = b/100;
    d = (b-c*100)/10;
    e = (b-c*100-d*10);
    printf("%d\n%d\n%d\n%d", a*e, a*d, a*c, a*b);
    return 0;
}