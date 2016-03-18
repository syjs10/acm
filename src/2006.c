/*************************************************************************
    > File Name: 2006.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 20时05分58秒
 ************************************************************************/

#include <stdio.h>
int main()
{
	int a;
	while (scanf("%d", &a) != EOF){
		int s = 1;
		while(a-- != 0){
			int b;
			scanf("%d", &b);
			if (b % 2 != 0){
				s = s * b;
			}
		}
		printf ("%d\n", s);
	}
	return 0;
}
