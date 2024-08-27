#include <stdio.h>

struct duration {
    int hrs;
    int min;
    int sec;
}d1,d2,difference,sum,result;


struct duration addDurations(struct duration d1, struct duration d2) {
    result.hrs = d1.hrs + d2.hrs;
    result.min = d1.min + d2.min;
    result.sec = d1.sec + d2.sec;

    
    if (result.sec >= 60) {
        result.min += result.sec / 60;
        result.sec %= 60;
    }

    
    if (result.min >= 60) {
        result.hrs += result.min / 60;
        result.min %= 60;
    }

    return result;
}

struct duration subtractDurations(struct duration d1, struct duration d2) {
    struct duration result;
    result.hrs = d1.hrs - d2.hrs;
    result.min = d1.min - d2.min;
    result.sec = d1.sec - d2.sec;

    if (result.sec < 0) {
        result.min -= 1;
        result.sec += 60;
    }

    
    if (result.min < 0) {
        result.hrs -= 1;
        result.min += 60;
    }

    return result;
}

int main() {    
    printf("enter first duration : ");
    scanf("%d %d %d",&d1.hrs,&d1.min,&d1.sec);
    printf("enter second duration : ");
    scanf("%d %d %d",&d2.hrs,&d2.min,&d2.sec);

    sum = addDurations(d1, d2);
    difference = subtractDurations(d1, d2);

    printf("Addition of durations: %d hours, %d minutes, %d seconds\n", sum.hrs, sum.min, sum.sec);
    printf("Subtraction of durations: %d hours, %d minutes, %d seconds\n", difference.hrs, difference.min, difference.sec);

    return 0;
}

