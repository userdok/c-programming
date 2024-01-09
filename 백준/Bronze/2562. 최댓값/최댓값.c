#include <stdio.h>

int main(){
    
    int i, max;
    int count = 0;
    
    int arr[9];
    
    // 9개의 정수 입력 받기
    for(i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
    }
    
    // 최댓값은 배열의 맨 처음 숫자로 초기화 한다
    max = arr[0];
    
    for(int i = 0; i < 9; i++){
        // 최댓값 구하기
        if(max < arr[i]){
            max = arr[i];
            count = i;
        }
    }
    
    printf("%d\n%d", max, count + 1 );
    return 0;
}