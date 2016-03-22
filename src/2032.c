/************************************************************************
    > File Name: src/2032.c
    > Author: Js
    > Created Time: 2016年03月20日 星期日 19时48分54秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		int a[40][40] = {0};
		a[0][0] = 1;
		for (int i = 1; i <= n; i++){
			a[i][0] = 1;//每行第一个值赋值为1
			a[i][i] = 1;// 把每行最后一个数赋值为1，第一行多了个1
		}
		for (int i = 2; i < n; i++){//  给数组赋值
			for (int j = 1; j < n; j++){
				a[i][j] = a[i - 1][ j - 1] + a[i - 1][j];
			}
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; a[i][j] != 0; j++){
				printf("%d", a[i][j]);
				if (a[i][j + 1] != 0){
					printf (" ");
						
				}
			}
			printf ("\n");
		}
	}
	return 0;
}
