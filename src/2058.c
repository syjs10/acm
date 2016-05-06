#include <stdio.h>
#include <math.h>
int main ()
{
	long long int N, M;
	while (scanf("%lld%lld", &N, &M) != EOF){
		if ( M == 0 && N == 0){
			break;
		}
		long long int i, j, k;
		for (i = (long long int)sqrt(2 * M); i > 0; i--){
			long long int a =M / i + (1 - i) / 2;
			if ((2 * a + i - 1) * i == 2 * M) {
				printf("[%lld,%lld]\n", a, (a + i - 1));
			}

		}
	}
	return 0;
}
// 用两层循环必超时,
// 可以用求和公式代替一层循环
// 并且可以用求和公式进行变换减少一个循环变量
