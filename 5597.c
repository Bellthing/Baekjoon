#include<stdio.h>
int arr[31];
int main(){
    for(int i = 1; i < 29; i++){
        int a;
        a=1;
        scanf("%d", &a);
        arr[a] = a;
    }
    for(int i = 1; i < 31; i++){
        if (arr[i] == 0){
            printf("%d\n", i);
        }
    }
}