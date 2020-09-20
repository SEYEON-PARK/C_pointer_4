#include <ctype.h>

void big(char* up)
{
	up[0] = toupper(up[0]);

	printf("당신의 이름은 %s입니다.\n", up);
}
