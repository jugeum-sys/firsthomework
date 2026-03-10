#include <stdio.h>

int main()
{
	int a = -1;  //임의의 음수
	
	if (("%08x",~1) == ("%08x", a))  //16진수로 받아드리기 위해 %08x로 쓰고 ~은 not으로 1이 아니다가 오른쪽 a와 같다면 1의 보수 아니면 2의 보수를 나타냄.
	{
		printf("1의 보수");
	}
	else {
		printf("2의 보수");
	}


	return 0;
}
