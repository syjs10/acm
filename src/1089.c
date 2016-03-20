/*************************************************************************
    > File Name: 1089.c
    > Author: JS
    > Created Time: 2016年03月08日 星期二 22时09分01秒
 ************************************************************************/

#include <stdio.h>
int main (void)
{
	int a = 0, b = 0;
	while(scanf("%d%d", &a, &b) != EOF){
		getchar();
		printf("%d\n", a + b);
	}
	return 0;
}
