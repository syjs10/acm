/*************************************************************************
    > File Name: src/2002.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 16时42分35秒
 ************************************************************************/

#include <stdio.h>
#define PI 3.1415927
int main()
{
	double r;
	while (scanf("%lf", &r) != EOF){
		double v;
		v = r * r * r * 4 / 3 * PI;
		printf("%.3lf\n", v);
	}
	return 0;
}
