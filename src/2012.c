/*************************************************************************
    > File Name: src/2012.c
    > Author: JS
    > Created Time: 2016年03月13日 星期日 13时51分41秒
 ************************************************************************/


#include <stdio.h>
int main()
{
	int x, y;
	while(scanf("%d%d", &x, &y) != EOF){
		int k = 0;
		if(x == 0 && y == 0){
			break;
		}
		for(int i = x; i <= y; i++){
			int m, n = 1;
			m = i * i + i + 41;
			for (int j = 2; j <= (m / 2 + 1); j++){
				if (m % j == 0){
					n = 0;
					break;
				}
			}
			if(n){
				k++;
				n = 1;
			}
		}
		if (k == (y - x + 1)){
			printf("OK\n");
		}else{
			printf("Sorry\n");
		}
	}
	return 0;
}
