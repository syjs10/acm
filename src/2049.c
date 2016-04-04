#include <stdio.h>
int main()
{
	int C;
	scanf("%d", &C);
	while (C--){
		int n, m;
		scanf("%d%d", &n, &m);
		long long a[21] = {0,0,1};//一定要用__int64定义
		double result;
		for (int i = 3; i < 21; i++){
			a[i] = (i-1) * (a[i - 1] + a[i - 2]);
		}
		long long x = 1, y = 1;
		double r = 1;
		for (int i = 1; i <= m; i++){
			 x *= i;
			 y *= (n - i + 1);
		}
		r = y / x;
		printf("%.lld\n", a[m]*r);//一定要用%I64d输出
	}
	return 0;
}
