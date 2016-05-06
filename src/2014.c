/*************************************************************************
    > File Name: src/2014.c
    > Author: JS
    > Created Time: 2016年03月13日 星期日 15时49分29秒
 ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	while (scanf ("%d", &n) != EOF){
		double *p = (double *)malloc(sizeof(double) * n);
		for (int i = 0; i < n; i++){
			scanf ("%lf", &p[i]); 
		}
		double max = p[0], min = p[0];
		for (int i = 0; i < n; i++){
			if (max < p[i]){
				max = p[i];
			}
			if (min > p[i]){
				min = p[i];
			}
		}
		double sum = 0;
		for (int i = 0; i < n; i++){
			sum = sum + p[i];
		}
		sum = sum - max - min;
		printf ("%.2lf\n", sum / (n - 2));
		free(p);
	}
	return 0;
}
