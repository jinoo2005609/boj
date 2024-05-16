#include <stdio.h>

int main() {
    int doremi[9]; // 정의 (배열)
    
    for (int i = 0; i < 8; i++) { // 8번 반복
        scanf("%d", &doremi[i]); // 값 입력 받아서 0번 배열부터 저장
    }
    if (doremi[0] == 1 && doremi[1] == 2 && doremi[2] == 3 && doremi[3] == 4 && doremi[4] == 5 && doremi[5] == 6 && doremi[6] == 7 && doremi[7] == 8) {
        printf("ascending"); // 오름차순이면 ascending 출력
    }
    else if (doremi[0] == 8 && doremi[1] == 7 && doremi[2] == 6 && doremi[3] == 5 && doremi[4] == 4 && doremi[5] == 3 && doremi[6] == 2 && doremi[7] == 1) {
        printf("descending"); // 내림차순이면 descending 출력
    }
    else {
        printf("mixed"); // 섞여 있다면 mixed 출력
    }

    return 0;
}