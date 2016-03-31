#include <stdio.h>
int main()
{
	int C;
	scanf("%d", &C);
	while (C--){
		int n, m;
		scanf("%d%d", &n, &m);
		long long a[21] = {0,1,1}, b = 1;
		double result;
		for (int i = 3; i < 21; i++){
			a[i] = (i-1) * (a[i - 1] + a[i - 2]);
			if(i == 3){
				a[i]/=2;
			}
		}
		double x = 1, y = 1;
		for (int i = 1; i <= m; i++){
			 x *= i;
			 y *= (n - i);
		}
		printf("%lld\n", a[m]);
	}
	return 0;
}
