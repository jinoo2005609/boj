#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    scanf("%s", arr);
    for (int i = 97; i < 123; i++) { // 소문자 알파벳 ASCII 코드 범위 내에서만
        int found = 0;
        for (int j = 0; j < strlen(arr); j++) { // 문자열 길이만큼 반복
            if (arr[j] == i) { // 맨 앞을 0번째라고 할게요, j번째 위치에 ASCII 코드로 i 값에 해당하는 알파벳이 있나요?
                printf("%d ", j); // 그럼 그게 몇 번째인 거죠? j 값을 알려주세요.
                found = 1; // 찾았네요 ㅎ
                break; // 그럼 이만!
            }
        }
        if (found == 0) { // 쓰읍, 이 알파벳은 없네요.
            printf("-1 "); // -1을 출력할게요.
        }
    }
    return 0;
}