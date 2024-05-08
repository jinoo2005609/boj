#include <stdio.h>

char arr[5][15]; // 5 * 15 배열 생성

int main() {
    for (int i = 0; i < 5; i++) { // 5번 반복
        scanf("%s", arr[i]); // 문자열 입력
    }

    for (int i = 0; i < 15; i++) { // 15번 반복
        for (int j = 0; j < 5; j++) { // 5번 반복
            if (arr[j][i] != '\0') { // 문자열이 null이 아니라면
                printf("%c", arr[j][i]); // 출력
            }
        }
    }
    return 0;
}