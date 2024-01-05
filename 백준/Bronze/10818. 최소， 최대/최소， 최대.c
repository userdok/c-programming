#include <stdio.h>

int main(){
    
    int n, i, min, max;

    scanf("%d", &n);
    
    // n개 만큼 배열 선언
    int arr[n];
    
    // n개의 정수 입력 받기
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    //최솟값 최댓값은 배열의 맨 처음 숫자로 초기화 한다
    min = arr[0];
    max = arr[0];
    
    for(int j = 0; j < n; j++){
        // 최솟값 구하기
        if(min > arr[j]){
            min = arr[j];
        }
        // 최댓값 구하기
        if(max < arr[j]){
            max = arr[j];
        }
    }
    printf("%d %d", min, max);
    return 0;
}