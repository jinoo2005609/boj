#include <stdio.h>

int main() {
    int a, b, c, money;
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && b==c) {
        money=10000+a*1000; // 3개가 모두 같은 경우
    }
    else if (a==b || a==c) {
        money=1000+a*100; // example : 2 2 3 or 2 4 2
    }
    else if (b==c) {
        money=1000+b*100; // example : 3 2 2
    }
    else {
        if (a>b && a>c) {
            money=a*100; // a가 가장 큰 경우
        }
        else if (b>a && b>c) {
            money=b*100; // b가 가장 큰 경우
        }
        else if (c>a && c>b) {
            money=c*100; // c가 가장 큰 경우
        }
    }

    printf("%d\n", money);
    return 0;
}