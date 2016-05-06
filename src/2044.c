#include <stdio.h>
int count = 0;
int A(int n, int m);
int main()
{
	int k;
	scanf ("%d", &k);
	while (k--){
		int n, m;
		scanf ("%d %d", &n, &m);
		A(1, m-n+1);
		printf ("%d\n", count);
		count = 0;
	}
	return 0;
}

int A(int n, int m)
{
	if (m == n-1){
		return 0;
	}else if (m == n){
		count++;
		return 0;
	}else{
		A(n, m-1);
		A(n, m-2);
	}
}
