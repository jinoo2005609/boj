#include <stdio.h>
#include <string.h>

int main() {
    char dish[51]; // dish 정의
    int height = 10; // 높이가 10
    scanf("%s", dish); // dish 값 받기
    for (int i = 1; i < strlen(dish); i++) { // dish 길이만큼 반복
        if (dish[i] == dish[i - 1]) { // dish의 i번째 값과 i-1번째 값이 같다면, 즉 현재 접시와 이전 접시가 같다면
            height += 5; // 5 증가
        }
        else { // 아니라면
            height += 10; // 10 증가
        }
    }
    printf("%d\n", height); // 높이 출력
    return 0;
}