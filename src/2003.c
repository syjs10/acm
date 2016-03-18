/*************************************************************************
    > File Name: 2003.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 17时25分01秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int main ()
{
	double a;
	while (scanf("%lf", &a) != EOF){
		printf("%.2lf\n", fabs(a));
	}
	return 0;
}
