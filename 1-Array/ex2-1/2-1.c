#include <stdio.h>

/*
    배열의 개념

    배열은 자료형이 같은 자료를 나열하여 메모리에 연속으로 저장하여 만든 자료 그룹이다.
    월~금요일을 각각 변수로 선언하면 7개를 만들어 선언해야하지만 배열로 한 번에 만들 수 있다.

    자료형 정리
    char
        size: 1byte
    int
        size: 4byte
    short
        size: 2byte
    float, long
        size: 4byte
    
    핵심
    Index : 배열 요소를 간단하게 구별하기 위한 번호 0부터 시작 {변수명[인덱스번호]}로 사용한다.
        ex)test[0]


    %d: 10진수(정수형)

    %f: 실수형

    %e: 지수형

    %o: 8진수

    %x: 16진수

    %u: 부호없는 10진수

    %g: 실수형 자동출력

    %p: 포인터의 주소

    %c: 하나의 문자로 출력

    %s: 문자열
    
    
    
*/

//2-1 메모리 할당 확인하기

int main(){
    
    char c, c_array[100];
    int i, i_array[100];
    short s, s_array[100];
    float f, f_array[100];
    long l, l_array[100];

   

    printf("\n char c size = %d\t: char c_array size=%d", sizeof(c),sizeof(c_array));
    printf("\n int i size = %d\t: int i_array size=%d", sizeof(i),sizeof(i_array));
    printf("\n short s size = %d\t: short s_array size=%4d", sizeof(s),sizeof(s_array));
    printf("\n float f size = %d\t: float f_array size=%4d", sizeof(f),sizeof(f_array));
    printf("\n long l size = %d\t: long l_array size=%4d", sizeof(l),sizeof(l_array));
    
    getchar();


}