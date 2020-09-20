#include <stdio.h>

int main(void)
{
	char name[10];

	printf("이름을 입력하시오. ");
	scanf_s("%s", name, sizeof(name));

	big(name);
}
