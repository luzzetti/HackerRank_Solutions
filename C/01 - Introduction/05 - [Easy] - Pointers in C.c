// Autore:      Christian Luzzetti
// Mail:        Christian.luzzetti@gmail.com
// HackerRank:  https://www.hackerrank.com/Cinghiamenisco

#include <stdio.h>

void update(int* a,int* b) {
    // Complete this function    
    int a1 = *a + *b;
    int b1 = abs(*a - *b);
    *a = a1;
    *b = b1;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
