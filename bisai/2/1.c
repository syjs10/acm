#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {
        getchar();
        char a[201] = {'\0'};
        scanf("%s", a);
        int big = 0, small = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 'x'){
                small++;
            } else {
                big++;
            }
        }
        if (small == big) {
            printf("0\n%s\n", a);
        } else if (small > big) {

            int s = n / 2 - big;
            int count = 0;
            for (int i = 0; count < s; i++){
                if (a[i] == 'x') {
                    a[i] = 'X';
                    count++;
                }
            }
            printf("%d\n", count);
            printf("%s\n", a);
        } else {
            printf("1\n");
            int s = n / 2 - small;
            int count = 0;
            for (int i = 0; count < s; i++){
                if (a[i] == 'X') {
                    a[i] = 'x';
                    count++;
                }
            }
            printf("%d\n",count);
            printf("%s\n", a);
        }
    }
    return 0;
}
