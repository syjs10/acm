/*************************************************************************
    > File Name: src/2005.c
    > Author: JS
    > Created Time: 2016年03月10日 星期四 18时29分38秒
 ************************************************************************/

#include <stdio.h>
int main()
{
	int year, month, date;
	while (scanf("%d/%d/%d", &year, &month, &date) != EOF){
		int day = 0;
		if(year % 4 == 0){
			switch (month){
				case 1:
					day = date;
					break;
				case 2:
					day = 31 + date;
					break;
				case 3:
					day = 31 + 29 + date;
					break;
				case 4:
					day = 31 + 29 + 31 + date;
					break;
				case 5:
					day = 31 + 29 + 31 + 30 + date;
					break;
				case 6:
					day = 31 + 29 + 31 + 30 + 31 + date;
					break;
				case 7:
					day = 31 + 29 + 30 + 30 + 31 + 30 + date;
					break;
				case 8:
					day = 31 + 29 + 30 + 30 + 31 + 30 + 31 + date;
					break;
				case 9:
					day = 31 + 29 + 30 + 30 + 31 + 30 + 31 + 31 + date;
					break;
				case 10:
					day = 31 + 29 + 30 + 30 + 31 + 30 + 31 + 31 + 30 + date;
					break;
				case 11:
					day = 31 + 29 + 30 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + date;
					break;
				case 12:
					day = 31 + 29 + 30 + 30 + 31 + 30 + 31 + 31 + 30 +  31 + 30 +date;
					break;
			}
		}else{
			switch (month){
			  	case 1:
					day = date;
					break;
				case 2:
					day = 31 + date;
					break;
				case 3:
					day = 31 + 28 + date;
					break;
				case 4:
					day = 31 + 28 + 31 + date;
					break;
				case 5:
					day = 31 + 28 + 31 + 30 + date;
					break;
				case 6:
					day = 31 + 28 + 31 + 30 + 31 + date;
					break;
				case 7:
					day = 31 + 28 + 30 + 30 + 31 + 30 + date;
					break;
				case 8:
					day = 31 + 28 + 30 + 30 + 31 + 30 + 31 + date;
					break;
				case 9:
					day = 31 + 28 + 30 + 30 + 31 + 30 + 31 + 31 + date;
					break;
				case 10:
					day = 31 + 28 + 30 + 30 + 31 + 30 + 31 + 31 + 30 + date;
					break;
				case 11:
					day = 31 + 28 + 30 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + date;
					break;
				case 12:
					day = 31 + 28  + 30 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 +date;
					break;
			}
		}
		printf("%d\n", day);
	}
	return 0;
}
