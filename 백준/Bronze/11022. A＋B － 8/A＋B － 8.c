#include <stdio.h>

int main(){
    
    int n, a, b;
    int count = 0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        count++;
        printf("Case #%d: %d + %d = %d\n", count, a, b, a + b);
    }
    return 0;
}