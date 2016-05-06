/*************************************************************************
    > File Name: src/2011.c
    > Author: JS
    > Created Time: 2016年03月12日 星期六 20时10分06秒
 ************************************************************************/


#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n--){
		double sum = 0;
		int m, sign = 1, k;
		scanf("%d", &m);
		for (int i = 1; i <= m; i++){
			k = i * sign;
			sum = sum + 1.0 / k;
			sign *= -1;
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}
