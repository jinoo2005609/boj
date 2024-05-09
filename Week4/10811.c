#include <stdio.h>
#include <string.h>

int main() {
    int n, m, i, j; // n은 바구니 개수, m은 바구니의 순서를 총 몇 번 바꿀지 설정
    scanf("%d %d", &n, &m); // n, m 값 받기
    int arr[n]; // n개 만큼의 바구니 arr 정의

    for (int k = 1; k <= n; k++) { // arr 배열에 1부터 n까지 정의
        arr[k - 1] = k;
    }

    for (int k = 0; k < m; k++) { // m번 바꿀 것이므로 m번 만큼 반복
        scanf("%d %d", &i, &j);
        for (int l = 0 ; l <(j-i+1)/2; l++) {
			int first = arr[i + l - 1];
			arr[i + l - 1] = arr[j - l - 1];
			arr[j - l - 1] = first;
			}
    }
    
    for (int k = 0; k < n; k++) { // n개의 바구니의 순서 출력
        printf("%d ", arr[k]);
    }
    
    return 0;
}