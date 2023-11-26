#include <stdio.h>

int main() {
    long long int A, B;
    scanf("%lld %lld", &A, &B);

    char c;
    int position = 0;

    while (position < A + B + 1) {
        c = getchar();

        if (c == '-') {
            if (position != A) {
                printf("No\n");
                return 0;
            }
        } else if (c < '0' || c > '9') {
            printf("No\n");
            return 0;
        }

        position++;
    }

    printf("Yes\n");

    return 0;
}
