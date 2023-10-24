#include <stdio.h>

/*
    1차원 배열 선언
    형식
        자료형 배열이름[배열크기] = {초기값 리스트};
        int A[5] = {1,2,3,4,5};
    


*/

int main() {
   
   int score[] = {80, 90, 95};
   char grade[] = {'B', 'A', 'A'};

   for (int i = 0; i < 3; i++){
    printf("점수: %d, 등급: %c\n", score[i], grade[i]);
   }
   getchar();
}