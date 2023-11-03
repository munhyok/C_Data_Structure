#include <stdio.h>
/*
    재귀호출의 예시 : 하노이 탑



*/

void hanoi(int n, int start, int target, int work) {
    // n: 원판개수, start: 시작, target: 목표지점, work: 시작과 목표지점 사이
    if(n == 1) {
        printf("%c에서 원반 %d를 %c로 옮김\n", start,n,target);

    } else {
        hanoi(n - 1, start, work, target);
        
        printf("%c에서 원반 %d를 %c로 옮김p\n", start, n, target);
        hanoi(n - 1, work, target, start);

    }
}

int main () {
    hanoi(3, 'A','C','B');

}

//하노이 알고리즘 수학적으로 카운터 계산 공식 (2^원판개수) - 1