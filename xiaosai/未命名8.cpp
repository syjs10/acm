#include <stdio.h>

int main()
{
	double p, q, r, s;
	while(scanf("%lf%lf%lf%lf", &p, &q, &r, &s) != EOF){
		double m = 1, n = 1, k = 1;
		double i = 0, j = 0;
		while (i < q || j < s){
			if (i < q){
				m = (p - i) / (i + 1);
				i++;
			}else{
				m = 1;
			}
			if (j < s){
				n = (r - j) / (j + 1);
				j++;
			}else{
				n = 1;
			}
		 	k = k * (1.0 * m / n);
		}
		printf("%.5lf\n", k);
	}
	return 0;
}