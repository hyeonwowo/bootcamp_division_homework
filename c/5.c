/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/
//14세 이상 혹은 160이상이면 입장 불가능하다. 사용자로부터 나이와 키를 입력받아 놀이방 입장 여부 판별 출력
#include <stdio.h>

int main() {   
    int age,height;

    scanf("%d",&age);
    scanf("%d",&height);

    if(age>=14 || height >=160)
        printf("X");
    else
        printf("O");

    return 0;
}