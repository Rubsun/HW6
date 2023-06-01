#include <stdio.h>

int main(){
    int n, fib, num1=0, num2=1;
    scanf("%d", &n);
    for (int i=1; i<n; i++){
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
    }
    printf("%d\n", fib);
}