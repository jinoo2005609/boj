#include <stdio.h>

int main() {
    int score1, score2, score3, score4, score5, total=0;
    
    scanf("%d", &score1);
    if(score1<40) {
        score1 = 40;
    }
    total+=score1;
    
    scanf("%d", &score2);
    if(score2<40) {
        score2 = 40;
    }
    total+=score2;
    
    scanf("%d", &score3);
    if(score3<40) {
        score3 = 40;
    }
    total+=score3;
    
    scanf("%d", &score4);
    if(score4<40) {
        score4 = 40;
    }
    total+=score4;
    
    scanf("%d", &score5);
    if(score5<40) {
        score5 = 40;
    }
    total+=score5;
    
    printf("%d\n", total/5);

    return 0;
}