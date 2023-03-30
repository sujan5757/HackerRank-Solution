#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s = 0;
    int n;
    scanf("%d", &n);
    while (n != 0) {
       s += n % 10;
       n /= 10;
    }
    printf("%d", s);
    return 0;
}
