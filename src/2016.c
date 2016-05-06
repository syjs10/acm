/*************************************************************************
    > File Name: src/2016.c
    > Author: JS
    > Created Time: 2016年03月13日 星期日 20时27分35秒
 ************************************************************************/


#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		if (n == 0){
			break;
		}
		int sq[100] = {0};
		for (int i = 0; i < n; i++){
			scanf("%d", &sq[i]);
		}
		int min = sq[0],k = 0;
		for (int i = 0; i < n; i++){
			if (min > sq[i]){
				min = sq[i];
		 		k = i;
			}
		}
		if (k != 0){
			int temp = sq[0];
			sq[0] = sq [k];
			sq[k] = temp;
		}
		for (int i = 0; i < n; i++){
			printf("%d", sq[i]);
			if (i + 1 != n){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
