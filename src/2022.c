/*************************************************************************
    > File Name: src/2022.c
    > Author: JS
    > Created Time: 2016年03月16日 星期三 14时27分31秒
 ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int m, n;
	while (scanf ("%d%d", &m, &n) != EOF){
		int p[100][100];
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				scanf ("%d", &p[i][j]);
			}
		}
		int max = p[0][0], x = 0, y = 0;
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				if (abs(max) < abs(p[i][j])){
					max = p[i][j];
					x = i;
					y = j;
				}
			}
		}
		printf("%d %d %d\n", x + 1, y + 1, max); 
	}
	return 0;
}
