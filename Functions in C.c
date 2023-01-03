#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}



int max_of_four(int a,int b,int c,int d) { 
    
    int maxAB;
    int maxCD;
    int maxABCD;
    
    maxAB=max(a,b);
    maxCD=max(c,d);
    maxABCD=max(maxAB,maxCD);
    
    return maxABCD;
}



int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

