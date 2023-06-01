#include <stdio.h>

int sumDigits(int *num){
    return *num + *num;

}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d ", sumDigits(&num));
}