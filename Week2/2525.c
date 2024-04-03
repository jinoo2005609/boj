#include <stdio.h>

int main() {
    int hour, minute, time, temp;
    scanf("%d %d", &hour, &minute);
    scanf("%d", &time);

    temp = hour * 60 + minute + time; // 단위를 분으로 통일
    hour = temp / 60; // 몫이 시간
    minute = temp % 60; // 나머지가 분

    if(hour > 23) {
        hour -= 24; // 24시를 넘어가면 0시부터
    }
    
    printf("%d %d", hour, minute);
    
    return 0;
}