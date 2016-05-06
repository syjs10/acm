#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int count = 0;
        for (int i = 5; i > 0; i--) {
            if(n / i != 0){
                count = count + n / i;
                n = n % i;
            }else{
                continue;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
