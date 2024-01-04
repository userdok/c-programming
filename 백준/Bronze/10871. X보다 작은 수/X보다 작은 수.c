#include <stdio.h>

int main(){

    int a, n, f;
    
    scanf("%d %d", &n, &f);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a);
        
        if(a < f){
            printf("%d ", a);
        }
    }
    return 0;
}