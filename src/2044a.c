#include <stdio.h>
int count = 0;
int A(int n, int m);
int main()
{
	int k;
	scanf ("%d", &k);
	while (k--){
		int n, m;
		scanf ("%d%d", &n, &m);
		long long a[51];
		a[1]= 1;
		a[2] = 2;
		for (int i = 3; i <= (m-n); i++){
			a[n] = a[n-1] + a[n-2];
		}
		printf ("%lld\n", a[m-n]);
	}
	return 0;
}

