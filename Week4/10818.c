#include <stdio.h>

int main() {
    int n; // n 정의
    scanf("%d", &n); // n 값 받기
    int arr[n]; // arr 정의
    int max = -1000000, min = 1000000; // max, min 값 설정

    for (int i = 0; i < n; i++) { // n번 반복
        scanf("%d", &arr[i]); // arr[i] 입력 받기
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) { // arr[i]가 max보다 크면
            max = arr[i]; // max를 arr[i]로 변경
        }
        if (arr[i] < min) { // 아니라면
            min = arr[i]; // min을 arr[i]로 변경
        }
    }

    printf("%d %d", min, max); // min, max 출력
    return 0;
}