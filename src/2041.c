#include <stdio.h>
int count = 0;
int dp(int n, int *p){
if (n == 0){
		return 0;
	}else{
		for(int i = 1; i < 2; i++){
			if (n != 0){
				n = n-i;
			}
			dp(n-i, p);
			count++;
		}
	}
	return count;
}
int main()
{
	int k;
	scanf("%d", &k);
	while (k--){
		int n;
		int p[2] = {1, 2};
		scanf("%d", &n);
		printf ("%d\n", dp(n+1, p));
	}
	
	return 0;
}
