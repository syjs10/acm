/*************************************************************************
    > File Name: src/2020.c
    > Author: JS
    > Created Time: 2016年03月14日 星期一 20时45分42秒
 ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF && n){
		if (n == 0){
			break;
		}
		int a[100] = {0};
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n - 1; i++){
			for (int j = i; j < n; j++){
				if (abs(a[i]) < abs(a[j])){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int i = 0; i < n; i++){
			printf("%d", a[i]);
			if (i + 1 != n){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
