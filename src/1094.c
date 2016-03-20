/*************************************************************************
    > File Name: 1089.c
    > Author: JS
    > Created Time: 2016年03月08日 星期二 22时09分01秒
 ************************************************************************/

#include <stdio.h>
int main (void)
{
	int a;
	while(scanf("%d", &a) != EOF){
		int b, sum = 0;
		while (a-- != 0){
		 	scanf("%d", &b);
			sum = sum + b;
		}
		printf("%d\n", sum);
	}
	return 0;
}
