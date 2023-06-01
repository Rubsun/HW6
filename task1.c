#include <stdio.h>

int main(){
    int a, b, c, d, count;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int i=a; i<=b; i++){
        count=0;
        while (i % d == c && count == 0){
            count+=1;
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}