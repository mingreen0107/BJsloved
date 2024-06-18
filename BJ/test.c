#include <stdio.h>
int i = 15;

int main() {

    int i = 5;
    for (i = 15; i > 3; i = i - 5)
        printf("%d", i);
    printf("%d", i);

    return 0;
}