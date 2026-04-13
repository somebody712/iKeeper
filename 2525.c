#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0;
    
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    
    d = (b + c) / 60;
    
    if (b + c < 60) {
        printf("%d %d\n", a, b + c);
    }
    else {
        if (a + d < 24) {
            printf("%d %d\n", a + d , (b + c) % 60);
        }
        else {
            printf("%d %d\n", (a + d) - 24, (b + c) % 60);
        }
    }
    
    return 0;
}
