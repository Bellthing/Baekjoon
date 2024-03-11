#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[101];
    for (int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    int v;
    scanf("%d", &v);
    int b=0;
    for (int i = 1; i <=n; i++){
        if (v == a[i]){
            b++;
        }
    }
    printf("%d", b);
    return 0;
}