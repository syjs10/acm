/*************************************************************************
    > File Name: src/2007.c
    > Author: JS
    > Created Time: 2016年03月11日 星期五 08时39分56秒
 ************************************************************************/

#include <stdio.h>
//#include <math.h>
int main()
{
	int m, n;
	while (scanf("%d%d", &m, &n) != EOF){
		if (m > n){
			int temp = m;
			m = n;
			n = temp;
		}
		long long int sum1 = 0, sum2 = 0;
		for (int i = m; i <= n; i++){
			if (i % 2 == 1){
				sum1 = sum1 + i*i*i;
				
			}else{
				sum2 = sum2 + i*i;
			}
		}
		printf("%lld %lld\n", sum2, sum1);
	}
	return 0;
}
