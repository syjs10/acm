/*************************************************************************
    > File Name: src/2033.c
    > Author: Js
    > Created Time: 2016年03月20日 星期日 20时46分20秒
 ************************************************************************/

#include<stdio.h>
int main()
{
	int n;
	scanf ("%d", &n);
	int h1, m1, s1, h2, m2, s2;
	while (n--){
		scanf ("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
		int h, m, s, k = 0, j = 0;
		h = h1 + h2;
		m = m1 + m2;
		s = s1 + s2;
		if (s >= 60){
			k = s / 60;
			s = s % 60;
		}
		m = m + k;
		if (m >= 60){
			j = m / 60;
			m = m % 60;
		}
		h = h + j;
		printf ("%d %d %d\n", h, m, s);
	}
	return 0;
}
