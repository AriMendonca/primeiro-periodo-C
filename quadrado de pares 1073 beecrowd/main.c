#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, quadrado;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i%2==0) {
            quadrado= i*i;
            printf("%d^2 = %d\n",i, quadrado);
        }
    }
    return 0;
}
