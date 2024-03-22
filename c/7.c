/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/
//
// 입력한 달의 존재하는 날의 수를 출력
#include <stdio.h>

int main() {
    int month, year;
    int yoon_year = 0;

    scanf("%d", &year);
    scanf("%d", &month);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        yoon_year = 1;
    }

    if (yoon_year && month == 2) {
        printf("29");
    }
    else {
        switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        case 2:
            printf("28");
            break;
        default:
            printf("31");
            break;
        }
    }
    return 0;
}