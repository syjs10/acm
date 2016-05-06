/*************************************************************************
    > File Name: src/2023.c
    > Author: JS
    > Created Time: 2016年03月16日 星期三 14时58分47秒
 ************************************************************************/

#include <stdio.h>
int main()
{
	int n, m;
	while (scanf ("%d%d", &n, &m) != EOF){
		double a[100][100] = {0};
		int ke[100] = {0}, xs[100] = {0};
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				scanf ("%lf", &a[i][j]);
				xs[i] = xs[i] + a[i][j];
			}
		}
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				ke[i] = ke[i] + a[j][i];
			}
		}
		int xs2[100] = {0};
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (a[i][j] >= (ke[j] / n) ){
					xs2[i]++;
				}
			}
		}
		for (int i = 0; i < n; i++){
			printf ("%.2lf ", (double)(1.0 * xs[i] / m));
		}
		printf ("\n");
		for (int i = 0; i < m; i++){
			printf ("%.2lf ", (double)(1.0 * ke[i] / n));
		}
		printf ("\n");
		int count = 0;
		for (int i = 0; i < n; i++){
			if (xs2[i] == n){
				count++;
			}
		}
		printf("%d\n\n", count);
	}
	return 0; 
}
