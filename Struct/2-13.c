#include <stdio.h>
#include <string.h>
/*
    화살표 연산자 사용해 데이터 항목 참조해보기

    포인터는 모든 자료형에 사용할 수 있으므로 구조체형에도
    화살표 연산자를 이용해 포인터 사용이 가능하다.

    //https://studywithowl.tistory.com/entry/C-C%EC%96%B8%EC%96%B4%EC%97%90%EC%84%9C-strcpy%EB%8A%94-%EB%AD%90%EA%B3%A0-%EC%99%9C-%EC%93%B0%EB%8A%94-%EA%B1%B8%EA%B9%8C
    //strcpy 관련 글
*/

struct employee {
    char name[20];
    int year;
    int pay;

};

int main() {
    struct employee Lee;

    struct employee *sPtr = &Lee; // 메모리 주소 할당
    strcpy(sPtr -> name, "이순신");
    
    sPtr -> year = 2015;
    sPtr -> pay = 5900;

    printf("\n이름 : %s", sPtr->name);
    printf("\n입사 : %d", sPtr->year);
    printf("\n연봉 : %d", sPtr->pay);
    
}
