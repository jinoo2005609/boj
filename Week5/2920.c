#include <stdio.h>

int main() {
    int doremi[9];
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &doremi[i]);
    }
    if (doremi[0] == 1 && doremi[1] == 2 && doremi[2] == 3 && doremi[3] == 4 && doremi[4] == 5 && doremi[5] == 6 && doremi[6] == 7 && doremi[7] == 8) {
        printf("ascending");
    }
    else if (doremi[0] == 8 && doremi[1] == 7 && doremi[2] == 6 && doremi[3] == 5 && doremi[4] == 4 && doremi[5] == 3 && doremi[6] == 2 && doremi[7] == 1) {
        printf("descending");
    }
    else {
        printf("mixed");
    }

    return 0;
}