#include <stdio.h>

/*
    3차원 배열을 이용한 문자 배열 입출력하기

*/

void main() {
    int i, j, k;
    char student[2][3][20]; //[학생번호][이름 학과 학번][문자열 길이]

    for (i = 0; i < 2; i++) {
        printf("\n 학생 %d의 이름 : ", i+1);
        gets(student[i][0]);
        printf("\n 학생 %d의 학과 : ", i+1);
        gets(student[i][1]);
        printf("\n 학생 %d의 학번 : ", i+1);
        gets(student[i][2]);
    }

    for (i = 0; i < 2; i++){
        printf("\n\n 학생 %d", i+1);
        
        for(j = 0; j < 3; j++){
            printf("\n\t");
            for(k = 0; student[i][j][k] != '\0'; k++){
                printf("%c", student[i][j][k]);
            }
        }
    }
    getchar();
}