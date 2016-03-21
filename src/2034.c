/*************************************************************************
    > File Name: src/2034.c
    > Author: Js
    > Created Time: 2016年03月21日 星期一 20时42分50秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int n, m;
	while (scanf ("%d%d", &n, &m) != EOF && n && m){
	int a[100] = {0}, b[100] = {0}, c[100] = {0}, count = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < m; i++){
			scanf("%d", &b[i]);
		}
		for(int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (a[i] == b[j]){
					i++;
					j = 0;
					continue;
				}
			}
			c[count++] = a[i];
		}
		for(int i = 0; i < count; i++){
			for (int j = i; j < count; j++){
				if (c[i] > c[j]){
					int temp = c[i];
					c[i] = c[j];
					c[j] = temp;
				}
			}
		}
		for (int i = 0; i < count; i++){
			if (count == 1){
				printf("NULL");
				break;
			}
			printf("%d ", c[i]);
		}
		printf("\n");
	}
	return 0;
}
