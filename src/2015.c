/*************************************************************************
    > File Name: src/2015.c
    > Author: JS
    > Created Time: 2016年03月13日 星期日 16时16分09秒
 ************************************************************************/


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, m;
	while (scanf ("%d%d", &n, &m) != EOF){
		int *p = (int *)malloc(sizeof(int) * n);
		for (int i = 1; i <= n; i++){
			p[i-1] = i * 2;
		}
		if (n % m != 0){
			int k, l; 
			k = n % m;
			l = n / m;
			for(int i = 0; i < l; i++){
			 	double sum = 0; 
				for(int  j = 0; j < m; j++){
					sum = sum + p[j+m*i]; 
				} 
				printf("%.0lf ", sum / m);
			}
			double sum = 0;
			for(int i = 0; i < k; i++){
				sum = sum + p[l*m+i];
			}
			printf("%.0lf\n", sum / k);
		}else{
			int l; 
			l = n / m;
			for(int i = 0; i < l; i++){
				double sum = 0;
				for(int j = 0; j < m; j++){
					sum = sum + p[j+i*m]; 
				}
 				printf("%.0lf", sum / m);
				if (i + 1 != l){
					printf(" ");
				}
			}
			printf("\n");
		}
		free(p);
	}
	return 0;
}
