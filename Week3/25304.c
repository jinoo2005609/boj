#include <stdio.h>

int main() {
    int total1, total2=0, jongryu, price, i, gaesu;
    scanf("%d", &total1);
    scanf("%d", &jongryu);

    for (i=1; i<=jongryu; i++) {
        scanf("%d %d", &price, &gaesu);
        total2 += price*gaesu;
    }

    if (total1==total2) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    
    return 0;
}