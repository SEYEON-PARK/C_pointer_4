#include <stdio.h>

int main(void)
{
	char name[10];

	printf("�̸��� �Է��Ͻÿ�. ");
	scanf_s("%s", name, sizeof(name));

	big(name);
}