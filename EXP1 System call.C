#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("processor ID:%d\n",getpid());
	printf("parent process ID:%d\n",getppid());
	return 0;
}
