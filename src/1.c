#include <stdio.h>
int main(int argc, char const *argv[]) {
    int n;
    while (scanf("%d\n", &n) != EOF) {
        char a[201] = {'\0'};
        scanf("%s\n", a);
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
            printf("1\n");
            int s = small - big;
            for (int i = 0; i < s;){
                if (a[i] == 'X') {
                    a[i] = 'x';
                    i++;
                }
            }
            printf("%s\n", a);
        } else {
            printf("1\n");
            int s = small - big;
            for (int i = 0; i < s;){
                if (a[i] == 'x') {
                    a[i] = 'X';
                    i++;
                }
            }
            printf("%s\n", a);
        }
    }
    return 0;
}
