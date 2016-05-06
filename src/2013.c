/*************************************************************************
    > File Name: src/2013.c
    > Author: JS
    > Created Time: 2016年03月13日 星期日 15时40分32秒
 ************************************************************************/


#include <stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		int res = 1;
		for(int i = 1; i < n; i++){
			res = (res + 1) * 2;
		}
		printf("%d\n", res);
	}
	return 0;
}
