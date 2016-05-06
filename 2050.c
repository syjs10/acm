#include <stdio.h>
int main()
{
	int n;
	scanf ("%d", &n);
	while(n--){
		int m;
		scanf("%d", &m);
		printf("%lld", (2 * n * n - n + 1));
	}
	return 0;
}
