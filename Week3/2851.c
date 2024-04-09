#include <stdio.h>

int main() {
    int mush, score=0, sum=0;

    for (int i=0; i<10; i++) { // 10번 입력 받음
        scanf("%d", &mush); // 버섯의 점수 입력
        score += mush; // score에 버섯의 점수 더함
        int score_diff = score > 100 ? score - 100 : 100 - score; // score가 100보다 크면 score - 100, 아니면 100 - score

        if (score_diff > (sum > 100 ? sum - 100 : 100 - sum)) { // score_diff가 sum이 100보다 크면 sum - 100, 아니면 100 - sum 한 것보다 크면
            break; // for문 빠져 나감
        }

        sum = score; // sum 변수의 값을 score로 지정
    }

    printf("%d", sum); // sum 출력

    return 0;
}