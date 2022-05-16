#include <stdio.h>
#include <math.h>

int main(){
    int x;
    scanf("%d", &x);
    
    int hour = x/360;
    int resto = x%360;
    
    int minutes = resto/60;
    resto = resto%60;
    
    printf("%d:%d:%d\n", hour, minutes, resto);
 
    return 0;
}