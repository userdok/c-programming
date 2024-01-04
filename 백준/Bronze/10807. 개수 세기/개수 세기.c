// 백준 1차원 배열 10807번
#include <stdio.h>

int main(){
    
    int arr[100];
    int n, f;
    int i, j, count = 0;
    
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    
    scanf("%d", &f);
    
    // 선택한 정수가 몇개인지 판단
    for(j = 0; j < n; j++){
        if(arr[j] == f){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}