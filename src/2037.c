/*************************************************************************
    > File Name: src/2037.c
    > Author: Js
    > Created Time: 2016年03月22日 星期二 20时58分49秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int n;
	while(scanf ("%d", &n) != EOF && n){
		int a[100][2], b[100][100];
		//把ｂ赋值为255便于判断
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++){
				b[i][j] = 255;
			}
		}
		//输入数据
		for (int i = 0; i < n; i++){
			scanf ("%d%d", &a[i][0], &a[i][1]);
		}
		//把输入数据按起始时间放入ｂ中
		for (int i = 0; i < n; i++){
			b[a[i][0]][i] = a[i][1];
		}
		//给找到最小的放在ｂ[i][０]处
		for (int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if (b[i][0] > b[i][j]){
					b[i][0] = b[i][j]; 
				}
			}
		}
		int count = 0;
		//从ｂ[0][0]开始找ｂ[n][0]直到不为255
		//count++
		for (int i = 0; i < n; i++){
			if (b[b[i][1]][1] != 255){
				count++;
				i = b[b[i][0]][0];
			}
		}
		printf ("%d\n", count);
	}
	return 0;
}
