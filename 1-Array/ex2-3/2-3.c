#include <stdio.h>

/*
    배열 써서 1~9 구구단 만들기
*/

int main(){
    int i=0, n;
    int multiply[9];

    printf("\n2~9의 숫자를 입력하세요: ");

    while(1){
        scanf("%d", &n);

        if (n < 2 || n > 9){
            printf("\n2~9의 숫자를 입력하세요: ");
        } else break;
    }

    for (i = 0; i < 9; i++){
        multiply[i] = n * (i+1);
        printf("%d*%d = %d\n", n, i+1, multiply[i]);
    }
    getchar();

}