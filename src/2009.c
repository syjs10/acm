/*************************************************************************
    > File Name: src/2009.c
    > Author: JS
    > Created Time: 2016年03月12日 星期六 18时02分28秒
 ************************************************************************/


#include <stdio.h>
#include <math.h>
int main()
{
	double m, n;
	while(scanf("%lf%lf", &n, &m) != EOF){
		double sum = 0;
		for(int i = 0; i < m; i++){
			sum += n;
			n = sqrt(n);
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}
