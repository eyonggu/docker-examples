#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf("hello docker!\n");
	while (1) {
		printf(".");
		fflush(stdout);
		sleep(1);
	}
	return 0;
}
