#include <stdio.h>

int q1=0, q2=0, q3=0, q4=0, axis=0;

int di(int x, int y) {
    if (x > 0 && y > 0) q1++;
    else if (x < 0 && y > 0) q2++;
    else if (x < 0 && y < 0) q3++;
    else if (x > 0 && y < 0) q4++;
    else axis++;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        di(x, y);
    }
    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", q1, q2, q3, q4, axis);
    return 0;
}