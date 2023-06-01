#include <stdio.h>

int sumDigits(int *num){
    int sum;

    while (*num > 0)
    {
        sum += *num % 10;
        *num /= 10;
    }
    
    return sum;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d ", sumDigits(&num));
    return 0;
}