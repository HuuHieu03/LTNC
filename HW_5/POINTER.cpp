#include <bits/stdc++.h>
using namespace std;

void update(int *a,int *b) {
        int sum = *a + *b;
        int sub = *a - *b;
        *a = sum;
        *b = abs(sub);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
