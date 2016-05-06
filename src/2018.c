/*************************************************************************
    > File Name: src/2018.c
    > Author: JS
    > Created Time: 2016年03月14日 星期一 18时58分03秒
 ************************************************************************/


#include <stdio.h>
int main()
{
	int n;
	while (scanf ("%d", &n) != EOF){
		if (n == 0){
			break;
		}
		int a[60] = {1, 1, 1, 1};
		if (n > 3){
			for (int i = 4; i <= n; i++){
				a[i] = a[i-1] + a[i - 3];// 运算的关键 
			}
		}
		int sum = 0;
		for (int i = 0; i < n; i++){
			sum = sum + a[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}
