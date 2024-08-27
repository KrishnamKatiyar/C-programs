#include <stdio.h>

struct height {
    int feet;
    int inch;
}result, h1, h2, sum, difference;

struct height addHeights(struct height h1, struct height h2) {
    result.feet = h1.feet + h2.feet;
    result.inch = h1.inch + h2.inch;

    
    if (result.inch >= 12) {
        result.feet += result.inch / 12;
        result.inch %= 12;
    }

    return result;
}

struct height subtractHeights(struct height h1, struct height h2) {
    result.feet = h1.feet - h2.feet;
    result.inch = h1.inch - h2.inch;


    if (result.inch < 0) {
        result.feet -= 1;
        result.inch += 12;
    }

    return result;
}

int main() {
	
    printf("Enter first height (feet inches): ");
    scanf("%d %d", &h1.feet, &h1.inch);
    printf("Enter second height (feet inches): ");
    scanf("%d %d", &h2.feet, &h2.inch);

    sum = addHeights(h1, h2);
    difference = subtractHeights(h1, h2);

    printf("Addition of heights: %d'%d\"\n", sum.feet, sum.inch);
    printf("Subtraction of heights: %d'%d\"\n", difference.feet, difference.inch);

    return 0;
}

