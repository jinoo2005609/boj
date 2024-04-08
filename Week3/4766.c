#include <stdio.h>

int main() {
    float a, b;
    scanf("%f", &a); // 첫 번째 측정 온도 값 지정

    for (int i=0; ; i++) { // 무한으로 입력
        scanf("%f", &b); // 두 번째 측정 온도 값 지정
        if (b==999) break; // 999를 입력 받으면 중단
        printf("%.2f\n", b-a); // b-a를 소숫점 둘째 자리까지 출력
        a = b; // a 값을 b로 지정
    }

    return 0;
}