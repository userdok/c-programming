#include <stdio.h>

int main(){
    
    int a, b;
    
    // 입력이 없을 때 파일을 종료하기 위한 EOF 사용
    while(scanf("%d %d", &a, &b) != EOF){
        printf("%d\n", a + b);
    }
    return 0;
}