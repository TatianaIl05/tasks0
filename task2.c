#include <stdio.h>

int main() {
    int A, B;

    scanf("%d", &A);
    scanf("%d", &B);
    
    printf("%d\n%d %d", A*B, A%B, B%A);

    return 0;
}
