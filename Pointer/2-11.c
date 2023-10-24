#include <stdio.h>

/*
    2중 포인터
    일반 변수의 주소가 아니라 포인터의 주소를 가지고 있는 포인터를 의미

    char **ptr;

*/

int main() {
    char *ptrArray[2];
    char **ptptr;
    int i;

    ptrArray[0] = "Korea";
    ptrArray[1] = "Seoul";

    ptptr = ptrArray;

    printf("\n ptrArray[0] 주소 = %u", &ptrArray);
    printf("\n ptrArray[0] 값 = %u", ptrArray);
    printf("\n ptrArray[0] 참조값 = %c", *ptrArray[0]);
    printf("\n ptrArray[0] 참조 문자열 = %s \n", *ptrArray);

    printf("ptptr의 주소 = %u\n", &ptptr);
    printf("ptptr의 값 = %u\n", ptptr);
    printf("ptptr 1차 참조값 = %u\n", *ptptr);
    printf("ptptr 2차 참조값 = %u\n", **ptptr);

    printf("ptptr 2차 참조 문자열 = %s", *ptptr);
}