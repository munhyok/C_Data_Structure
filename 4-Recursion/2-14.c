#include <stdio.h>
/*
    Recursion 재귀호출
    재귀호출은 함수가 자기 자신을 호출하고 순환하여 수행되는 것
    대표적인 재귀호출 함수는 팩토리얼

    직접 재귀호출을 써서 팩토리얼을 구현해보자
*/

int factorial(int x) {
    
    if (x <= 1) {
        return(1);
    } else {
        return(x * factorial(x-1));
        
    }

}

int main() {
    int v, result;


    printf("원하는 정수를 입력하세요: ");
    scanf("%d", &v);

    result = factorial(v);

    printf("%d의 팩토리얼은 %d입니다.\n", v, result);

}
