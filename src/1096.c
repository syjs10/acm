/*************************************************************************
    > File Name: 1096.c
    > Author: JS
    > Created Time: 2016年03月08日 星期二 22时09分01秒
 ************************************************************************/

#include <stdio.h>
int main (void)
{
	int a, b;
	scanf("%d", &b);
	while(scanf("%d", &a) != EOF){
		int c, sum = 0;
		while (a-- != 0){
		 	scanf("%d", &c);
			sum = sum + c;
		}
		printf("%d\n", sum);
		b--;
		if (b == 0){
			break;
		}
		printf("\n");
	}
	return 0;
}
