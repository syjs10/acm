/*************************************************************************
    > File Name: src/2001.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 12时58分31秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
	double x1, y1, x2, y2;
	while (scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF){
		double result;
		result = sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
		printf("%.2lf\n", result);
	}
	return 0;
}
