#include <stdio.h>
int main()
{
	int C;
	scanf("%d", &C);
	while (C--){
		int n;
		scanf("%d", &n);
		long long a[21] = {1,1}, b = 1;
		double result;
		for (int i = 2; i < 21; i++){
			a[i] = i * (a[i - 1] + a[i - 2]);
			if(i == 2){
				a[i]/=2;
			}
		}
		for (int i = 1; i <= n; i++){
			b *= i;
		}
		result = (double)a[n-1] / b;
		result *= 10000;
		result = (int)result < (int)(result + 0.5) ? (int)result + 1 : (int)result;
		printf("%.2lf%%\n", result/100);
	}
	return 0;
}
