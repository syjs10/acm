/*************************************************************************
    > File Name: src/2035.c
    > Author: Js
    > Created Time: 2016年03月22日 星期二 19时09分16秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF && a && b){
		int s = 1;
		for (int i = 0; i < b; i++){
			s = s * a;
			s = s % 1000;
		}
		printf("%d\n", s);
	}
	return 0;
}
