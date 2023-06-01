#include <stdio.h>

int ispolnitel(int *num){
    int f, s, t, ans, f2,s2;
    f = *num / 100;
    s = (*num / 10) % 10;
    t = *num % 10;
    f2 = f * s;
    s2 = s * t;
    if (f2 > s2)
    {
        printf("%d%d", f2, s2);
    }
    else
    {
        printf("%d%d", s2, f2);
    }
    
}

int main(){
    int num;
    scanf("%d", &num);
    ispolnitel(&num);
    return 0;
}