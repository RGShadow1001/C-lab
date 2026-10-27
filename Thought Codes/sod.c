#include <stdio.h>
int sod(int n) {
    if (n==0)
        return 0;
    else
        return((n%10)+sod(n/10));
}
void main() {
    int n;
    scanf("%d",&n);
    printf("Sum of digits=%d",sod(n));
}