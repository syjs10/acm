#include <stdio.h>
int main()
{
	int n;
	while(scanf ("%d", &n) != EOF){
		long long a[51] = {0, 6};
		for (int i = 2; i <= 50; i++){
			a[i] = 2 * a[i - 2] + a[i - 1];
		}
		a[0] = 3;
		printf("%lld\n",a[n-1]);
	}
	return 0;
}
