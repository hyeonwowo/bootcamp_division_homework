/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/
//세자리 정수를 입력받아 역순으로 출력
//
#include <stdio.h>
#define SIZE 4

int main() {
    char data[SIZE];
    char array[SIZE];

    fgets(data, SIZE, stdin);

    for (int i = 0; i < SIZE; i++) {
        array[i] = data[SIZE - i - 1];
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%c", array[i]);
    }

    return 0;
}