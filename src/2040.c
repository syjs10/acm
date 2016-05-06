#include <stdio.h>
void A(int *a, int n){
	int count = 0;
	for (int i = 1; i < n; i++){
		if (n % i == 0){
			a[count++] = i;
		}
	}
	return;
}
int main()
{
	int k;
	scanf ("%d", &k);
	while(k--){
		int n, m;
		scanf ("%d%d", &m, &n);
		int a[100] = {0}, b[100] = {0};
		int suma = 0, sumb = 0;
		A(a, n);
		A(b, m);
		for (int i = 0; i < 100; i++){
			suma += a[i];
			sumb += b[i];
		}
		if (suma == m && sumb == n){
			printf ("YES\n");
		}else{
			printf ("NO\n");
		}
	}
	return 0;
}
