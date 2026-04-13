#include <stdio.h>

int main(void) {
    int a[4] = {0}, b = 0, i, j;
    
    for (i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (a[j] > a[j + 1]) {
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
    
    printf("%d\n", a[1]);
    
    return 0;
}
