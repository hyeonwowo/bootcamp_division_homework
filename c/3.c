/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/
//시간을 입력 받아 12시 전이라면 '오전', 12시 이후라면 '오후'를 출력
#include <stdio.h>

int main() {
    int hour;

    scanf("%d",&hour);

    if(hour >= 0 && hour <=23){
        if(hour<12)
            printf("AM");
        else
            printf("PM");
    }

    return 0;
}