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
		//把ｂ赋值为－１便于判断
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++){
				b[i][j] = -1;
			}
		}
		//输入数据
		for (int i = 0; i < n; i++){
			scanf ("%d%d", )
		}
		//把输入数据按起始时间放入ｂ中
		
		//给找到最小的放在ｂ[０]处
		//从ｂ[0][0]开始找ｂ[n][0]直到不为－１
		//count++
	}
	return 0;
}
