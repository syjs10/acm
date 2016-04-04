#include <stdio.h>
int main()
{
	int m;
	scanf("%d", &m);
	while(m--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", (2 * n *n - n + 1));
	}
	return 0;
}
