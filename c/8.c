/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/
//
//정수 n을 입력받아 1 n까지의 정수 합 및 n! 출력
#include <stdio.h>

int recursion_factorial(int n) {
    if (n == 1) return 1;
    else return n * recursion_factorial(n - 1);
}
int sum(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("%d\n", sum(n));
    if (n == 0)
        printf("1");
    else
       printf("%d\n", recursion_factorial(n));

    return 0;
}