#include <stdio.h>

/*
    structs 구조체
    
    개념 정리
    구조체도 배열처럼 여러 데이터를 그룹으로 묶어 하나의 자료형으로
    정의하고 사용하는 자료형이다.
    배열은 자료형이 같을 때만 그룹으로 묶을 수 있지만, 구조체는 서로 다른
    자료형도 그룹으로 묶을 수 있어 복잡한 자료 형태를 정의할 때 유용하게 사용할 수 있다.

    체계적으로 관리하기 위해선 일정한 단위로 구성해야하는데,
    이런 단위 형식을 Record라고 한다.
    Record를 구성하는 하위 항목을 Field라고 하고
    Record가 여러 개 모이면 File이 된다.

    File > Record > Field


*/

struct employee {
    char name[10];
    int year;
    int pay;
};

int main() {
    int i;
    struct employee Lee[4] = {
        {"강문혁", 2023, 6000},
        {"이한영", 2015, 3300},
        {"이상원", 2021, 4000},
        {"이상범", 2016, 2900}
    };

    for (i = 0; i < 4; i++) {
        printf("\n이름 : %s", Lee[i].name);
        printf("\n입사 : %d", Lee[i].year);
        printf("\n연봉 : %d", Lee[i].pay);

    }
    
}
