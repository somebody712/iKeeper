#include <stdio.h>

int main(void)
{
    int a[4] = {0}, b = 0;
    
    scanf("%d", a);
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (a[j] > a[j + 1]) {
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
    
    if (a[0] == a[1] && a[1] == a[2]) {
        printf("%d\n", 10000 + a * 1000);
    }
    else if (a != b && b != c) {
        printf("%d\n", a[2] * 100);
    }
    else {
        if (a[0] == a[1]) {
            printf("%d\n", 1000 + a[1] * 100);
        }
        else {
            printf("%d\n", 1000 + a[1] * 100);
        }
    }
    
    return 0;
}
