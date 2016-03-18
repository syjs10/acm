/*************************************************************************
    > File Name: src/2010.c
    > Author: JS
    > Created Time: 2016年03月12日 星期六 19时14分14秒
 ************************************************************************/


#include <stdio.h>
#include <math.h>
int main()
{
	int m, n;
	while (scanf("%d%d", &m, &n) != EOF){
		if (m < 100 || n < 100 || m > 999 || n > 999 || m > n){
			continue;
		}
		int num[100] = {0}, j = 0;
		for (int i = m; i <= n; i++){
			int a , b, c;
			a = i / 100;
			c = i % 10;
			b = (i - a * 100 - c) / 10;
			if (i == (pow(a, 3) + pow(b, 3) + pow(c, 3))){
				num[j++] = i;
			}
		}
		if (num[0] == 0){
			printf("no");
		}
		for (int i = 0; num[i] != 0; i++){
			printf("%d", num[i]);
			if (num[i+1] != 0){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
