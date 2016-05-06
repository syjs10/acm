/*************************************************************************
    > File Name: src/2004.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 18时11分28秒
 ************************************************************************/

#include <stdio.h>
int main()
{
	int score;
	while (scanf("%d", &score) != EOF){
		if (score < 0 || score > 100){
			printf("Score is error!\n");
		}else if (score <= 100 && score >=90){
			printf("A\n");
		}else if (score < 90 && score >= 80){
			printf("B\n");
		}else if (score < 80 && score >= 70){
			printf("C\n");
		}else if (score < 70 && score >= 60){
			printf("D\n");
		}else if (score < 60 && score >= 0){
			printf("E\n");
		}
	}
	return 0;
}
