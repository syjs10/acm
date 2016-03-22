/*************************************************************************
    > File Name: src/2036.c
    > Author: Js
    > Created Time: 2016年03月22日 星期二 19时39分24秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
double S(int x0, int x1, int x2, int y0, int y1, int y2);
int main()
{
	int n;
	while (scanf ("%d", &n) != EOF && n){
		int a[100][2];
		for (int i = 0; i < n; i++){
			scanf ("%d%d", &a[i][0], &a[i][1]);
		}
		double s = 0;
		for (int i = 1; i < n - 1; i++){
			s += S(a[0][0], a[i][0], a[i+1][0], a[0][1], a[i][1], a[i+1][1]);
		}
		printf ("%.1lf\n", fabs(s));
	}
	return 0;
}
double S(int x0, int x1, int x2, int y0, int y1, int y2)
{
	double k;
	k = 1.0 * ((x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0))/2;
	return k;
}
