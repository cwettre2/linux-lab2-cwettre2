#include <unistd.h>
#include <stdio.h>
#include <sys/syscall.h>

int main()
{
	int a = 2;
	int b = 6;
	char toolong[151] = "wigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwigwig";
	char test[20] = "oppa gongnom stole";
	long c = syscall(332, a, b);
	long d = syscall(333, toolong);
	long e = syscall(333, test);
	printf("Christian Wettre, %d \n", getpid());
	printf("Syscall 1 arguments: %d, %d \n", a, b);
	printf("Syscall 2 arguments: %s in test 1, %s in test 2 \n", toolong, test);
	printf("Syscall 1 output: %ld \n", c);
	printf("Syscall 2 test 1 output: %ld \n", d);
	printf("Syscall 2 test 2 output: %ld \n", e);
	return 0;

}

