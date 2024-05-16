#include <stdio.h>

int q1=0, q2=0, q3=0, q4=0, axis=0; // 정의

int di(int x, int y) { // di 함수 정의
    if (x > 0 && y > 0) q1++; // 1사분면
    else if (x < 0 && y > 0) q2++; // 2사분면
    else if (x < 0 && y < 0) q3++; // 3사분면
    else if (x > 0 && y < 0) q4++; // 4사분면
    else axis++; // 축
    return 0;
}

int main() {
    int n; // 정의
    scanf("%d", &n); // 값 입력

    for (int i = 0; i < n; i++) { // 입력받은 n만큼 반복
        int x, y;
        scanf("%d %d", &x, &y); // x, y 좌표값 입력
        di(x, y); // di 함수 호출
    }
    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", q1, q2, q3, q4, axis);
    return 0;
}