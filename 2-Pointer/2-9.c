#include <stdio.h>

/*
    포인터를 초기화하는 방법은 일반 변수를 초기화 하는 것과 같음
    다만 메모리 주소이기 때문에 기존처럼 int a = 5 형식처럼 값을 지정하면 안된다
    만약 간접적으로 지정하고 싶으면
    int i;
    int *ptr = &i;
    이런식으로 주소 연산자를 사용하여 변수 주소를 지정할 수 있다.
    
    동적 메모리를 할당하고 싶으면 이렇게 지정하자
    char *ptr = (char *)malloc(100);
    동적 메모리를 할당하는 malloc()함수를 사용하여 문자형 공간 100개를 할당하고
    그 시작 주소를 ptr에 지정한다.

    문자형 포인터에 문자열 시작 주소를 지정할 수 있다.
    char *ptr = "korea";
    문자열 자료형은 다른 자료형과 다르게 문자열 지정만으로
    그 시작 주소를 전달할 수 있다. 
    korea 문자열이 포인터 ptr에 저장되는게 아닌 korea 문자열이
    저장된 위치의 시작 주소가 포인터 ptr에 저장된다.
    즉 "k"의 주소 값이 저장된다.

    char A[100];
    char *ptr = A;
    char *ptr_ = &A[0];

    printf("%u\n", ptr);
    printf("%u", ptr_);

    printf 되어 나오는 값은 동일하다 :)



*/

int main() {
    int i;
    char string_1[20] = "Dreams come true!", string_2[20], *ptr1, *ptr2;

    ptr1 = string_1;
    printf("\n string_1의 주소 = %u \t ptr1 = %u", string_1, ptr1);
    printf("\n string_1 = %s \n ptr1 = %s", string_1, ptr1);

    printf("\n\n %s", ptr1+7);
    
    ptr2 = &string_1[7];

    printf("\n %s\n\n ",ptr2);

    for (i = 16; i >= 0; i--) {
        putchar(*(ptr1 + i));
    }
    
    for (i = 0; i < 20; i++) {
        string_2[i] = *(ptr1 + i);
    }

    printf("\n\n string1 = %s", string_1);
    printf("\n\n string2 = %s", string_2);

    *ptr1 = 'P';

    printf("\n%s", string_1);


}