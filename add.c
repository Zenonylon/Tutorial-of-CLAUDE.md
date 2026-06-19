#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int a, b;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &a);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, add(a, b));

    return 0;
}
