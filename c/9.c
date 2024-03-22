/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/
//
//  양의 정수 n을 입력 받아 1부터 n까지의 합을 출력하는 프로그램을 작성하시오.
// 단, 양의 정수가 아닐 경우 반복하여 입력 받아야합니다.
// 실행 결과 (아래의 결과는 연속된 결과입니다.)

#include <stdio.h>
int sum(int n) {
    return (n * (n + 1) / 2);
}
int main() {
    int data;
    
    do {
        scanf("%d", &data);
        if (data <= 0)
            printf("X\n");
    } while (data <= 0);

    printf("%d", sum(data));

    return 0;
}