#include <stdio.h>
int main()
{
	int n;
	while(scanf ("%d", &n) != EOF){
		long long a[51] = {1, 2};
		for (int i = 2; i <= 50; i++){
			a[i] = a[i - 2] + a[i - 1];
		}
		printf("%lld\n",a[n-1]);
	}
	return 0;
}
