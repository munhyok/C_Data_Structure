#include <stdio.h>

/*
    gets = 보안문제로 deprecated 되었다.
    fgets()로 대체되었고
    fgets()
        char, int, FILE*
        문자열  길이  출력

    FILE* 은 콘솔에 출력하고 싶으면 stdin으로 하자

*/


int main() {

    int length = 0;
    char str[50];
    printf("문장을 입력해주세요: ");
    
    fgets(str, 50, stdin);
    printf("입력한 문자열: ");
    for (int i = 0; str[i]; i++) {
        printf("%c",str[i]);
        length++;

    }
    
    printf("길이는 %d입니다.", length);



}