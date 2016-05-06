#include <stdio.h>
int main ()
{
	long long int N, M;
	while (scanf("%lld%lld", &N, &M) != EOF){
		if ( M == 0 && N == 0){
			break;
		}
		long long int i, j, k, min = N;
		if (M < N){
			min = M;
		}
		for (i = 1; i <= (M/1 - i/2); i++){
			for (j = i; j < min; j++){
				long long int sum = (i + j) * (j - i + 1) / 2;
				if (sum == M){
					printf("[%lld,%lld]\n", i, j);
				}
			}
		}
		if (M < N){
			printf("[%lld,%lld]\n", M, M);
		}
	}
	return 0;
}
