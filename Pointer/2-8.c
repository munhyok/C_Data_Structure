#include <stdio.h>
/*
    Pointer 연산자를 이용한 변수 액세스 하기


    i 메모리 주소 = 1868754268
    ptr 메모리 주소 = 1868754256
    ptr -> i 참조 = 1868754268 -> 1868754268

    *ptr의 참조값 = 10
*/

int main () {
    int i = 10, j = 20;
    int *ptr;

    printf("\n i의 값 = %d \n j의 값 = %d", i, j);

    printf("\n i의 주소 값 = %u", &i);
    printf("\n j의 주소 값 = %u", &j);

    ptr = &i;

    printf("\nptr에 i주소 할당");
    printf("\nptr 메모리 주소 = %u", &ptr);
    printf("\nptr 의 값 = %u", ptr);
    printf("\n*ptr의 참조값 = %d",*ptr);
}