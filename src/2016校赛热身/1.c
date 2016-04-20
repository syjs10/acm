#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int a[100000] = {0};
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            if (a[i] < 0) {
                for (int j = 0; j < n; j++) {
                    if(a[j] > 0){
                        if(a[j] + a[i] >= 0){
                            count = count + abs(j - i) * abs(a[i]);
                            a[j] = a[j] + a[i];
                            break;
                        }else{
                            count = count + abs(j - i) * a[j];
                            a[i] = a[i] + a[j];
                        }
                    }
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
