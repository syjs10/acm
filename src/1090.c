/*************************************************************************
    > File Name: 1089.c
    > Author: JS
    > Created Time: 2016年03月08日 星期二 22时09分01秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int n, i = 0;
	scanf("%d", &n);
	int *p = (int *)malloc(sizeof(int) * n);
	int *q = (int *)malloc(sizeof(int) * n);
	while(scanf("%d%d", p + i, q + i) != EOF && i < n - 1){
		i++;
	}
	int j = 0;
	while(j < n){
		printf("%d\n", *(p + j) +*(q + j));
		j++;
	}
	return 0;
}
