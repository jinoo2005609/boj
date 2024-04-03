#include <stdio.h>

int main() {
    int score, person, total=0;
    for(person=0; person<5; person++) {
        scanf("%d", &score);
        if(score<40) {
            score = 40;
        }
        total+=score;
    }
    printf("%d\n", total/5);

    return 0;
}