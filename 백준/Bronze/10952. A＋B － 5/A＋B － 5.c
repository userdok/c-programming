#include <stdio.h>

int main(){
    
    int a, b;

    while(1){
        scanf("%d %d", &a, &b);
        // 0 0이 들어오면 반복문 중단
        if (a == 0 && b == 0){
            break;
        }
        printf("%d\n", a + b);
    }
        return 0;
}