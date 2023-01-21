#include<stdio.h>
int arr[43];
int main(){
    for(int i=1; i<11; i++){
        int a=1;
        scanf("%d", &a);
        arr[a%42] = a;
    }
    int b=0;
    for(int i = 0; i < 43; i++){
        if (arr[i] != 0){
            b++;
        }
    }
    printf("%d", b);
}
