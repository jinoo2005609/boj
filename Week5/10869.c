#include <stdio.h>

int domath(int a, int b) { // domath 함수 정의
    printf("%d\n%d\n%d\n%d\n%d\n", a+b, a-b, a*b, a/b, a%b); // a+b, a-b, a*b, a/b, a%b 값 출력
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // 두 값 입력 받기
    domath(a, b); // domath 함수에 a, b 값 전달
    return 0;
}