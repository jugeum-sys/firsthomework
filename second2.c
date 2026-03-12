#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	double a;
	int i;

	printf("입력: ");
	scanf("%lf", &a);

	int firstNumber = (int)a;		//정수부분을 나타내기 위해 나머지를 버리는 작업
	double frac = a - firstNumber;	//소수부분을 나타내기 위해 정수를 빼버리는 작업

	

	if (frac < 0) frac = -frac;		//소수 부분을 양수로 변환하기 위한 코드

	printf("출력: ");

	for (i = 7; i >= 0; i--)
	{
		printf("%d", (firstNumber-1 >> i) & 1);	// 정수부분을 이진수 출력함을 위함
	}
	printf(".");		// 소수점 출력

	for (i = 0; i < 8; i++)
	{
		frac = frac * 2;					//for 구문 전체가 소수부분을 이진수로 변환하기 위함.

		if (frac >= 1)
		{
			printf("1");
			frac = frac - 1;
		}
		else
		{
			printf("0");
		}
	}

	return 0;
}

