#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) { // i는 1부터 시작해서 n까지 증가
        for (int j=0; j<n-i; j++) { // j가 1씩 증가하는데 j가 n-i 보다 작으면 공백 출력
            printf(" ");
        }
        for (int j=0; j<i; j++) { // j가 1씩 증가하는데 j가 i보다 작으면 * 출력
            printf("*");
        }
        
        printf("\n"); // 줄 바꿈
    }

    for (int i = n-1; i>0; i--) { // i는 n-1부터 시작해서 1까지 감소
        for (int j=0; j<n-i; j++) { // j가 1씩 증가하는데 j가 n-i 보다 작으면 공백 출력
            printf(" ");
        }
        for (int j=0; j<i; j++) { // j가 1씩 증가하는데 j가 i보다 작으면 * 출력
            printf("*");
        }
        
        printf("\n"); // 줄 바꿈
    }

    return 0;
}
