#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - PPID
 *
 * Return: Always 0.
 */
int main(void)
{
	int pid = fork();
	int status;

	if (pid == 0)
	{
		printf("This is the child process. My pid is %d and my parent's id is %d.\n", getpid(), getppid());
	}
	else
	{ /* avoids error checking*/
		wait(&status);
		printf("This is the parent process. My pid is %d and my child's id is %d and parent's pid is %d.\n", getpid(), pid, getppid());

	}
	return 0;
}
