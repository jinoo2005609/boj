#include <stdio.h>

int main() {
    int a, b;

    for (int i=0; ; i++) { // 무한으로 입력 받음
        scanf("%d %d", &a, &b); // a b 값을 입력 받음
        if (a==0 && b==0) { // a와 b가 둘 다 0이면
            break; // for문을 빠져나감
        }
        printf("%d\n", a+b); // a+b 출력
    }

    return 0;
}