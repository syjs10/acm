#include <stdio.h>
int main(int argc, char const *argv[]) {
    long long n;
    while (scanf("%lld", &n) !=EOF) {
        long long a[100000] = {0};
        for (long long i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        long long sum = 0, sum1 = 0;
        for (long long i = 0; i < n; i++) {
            sum = sum + a[i] % 10;
        }
        if (sum % 2 == 1) {
            long long min = a[0];
            for (long long i = 0; i < n; i++) {
                if (min > a[i]){
                    min = a[i];
                }
            }
            for (int i = 0; i < n; i++){
                sum1 = sum1 + a[i];
            }
            sum1 -= min;
        }else{
            for (int i = 0; i < n; i++){
                sum1 = sum1 + a[i];
            }
        }
        printf("%lld\n", sum1);
    }
    return 0;
}
