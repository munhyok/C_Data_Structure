#include <stdio.h>

/*
    Pointer Array
    포인터 배열은 여러 개의 포인터를 하나의 배열로 구성한 것
    배열과 포인터의 특징을 모두 활용할 수 있다.
    
    선언 예시
    int *ptr [100] = {{},{}, ... };
    char *ptr_[3] = {{"Dreams"}, {"come"}, {"true"}};

    이렇게 하면 문자열의 길이를 정확히 예측할 수 없거나 문자열의 길이가
    자주 변하는 경우도 좀 더 효율적으로 사용할 수 있다.


*/

int main() {
    int i;
    char *ptrArray[4] = {{"Korea"}, {"Seoul"}, {"Mapo"}, {"152번지"}};

    for (i = 0; i < 4; i++) {
        printf("\n %s", ptrArray[i]);

    }

    printf("\n\n");

    ptrArray[2] = "Jongno";
    for (i = 0; i < 4; i++) {
        printf("\n %s", ptrArray[i]);
    }
    
}
