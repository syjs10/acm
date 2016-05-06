#include <stdio.h>
int main(int argc, char const *argv[]) {
    long long a, b;
    while (scanf("%lld%lld", &a, &b) != EOF) {
        printf("%lld\n", a + b);
    }
    return 0;
}
