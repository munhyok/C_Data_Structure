#include <stdio.h>

/*
    char와 string으로 초기화 했을 때 차이점

    만약 "string"으로 배열을 초기화 할 때 char와 string의 차이는 무엇일까?

    char s1[10]="string";
    char s2[10]={'s','t','r','i','n','g'};

    s1은 메모리에
    0   1   2   3   4   5   6   7   8   9
    s   t   r   i   n   g   \0
    형식으로 할당

    s2는 메모리에
    0   1   2   3   4   5   6   7   8   9
    s   t   r   i   n   g       
    형식으로 할당

    차이점
        string형식은 메모리에 할당될 때 \0 = NULL이 추가가 된다
    
    char s1[10]="string"; == char s1[10]={'s','t','r','i','n','g','\0'};
    동일하게 메모리에 할당하고 싶으면 이런식으로 뒤에 \0을 별도로 추가해줘야한다.
    이 사실을 모르고 string의 갯수만으로 배열에 할당하면 컴파일 오류가 발생한다.

    char s1[6]="string"; 이 아니고 NULL을 포함한 char s1[7]="string"을 선언해야한다.


*/

int main() {
    char string[20]= "Data Structure!";
    
    printf("string 배열: ");
    for (int i = 0; string[i]; i++) {
        printf("%c", string[i]);
    }

    
    
}