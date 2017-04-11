#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid;
	int status;
	int i = 0;


	pid = fork();
	if (pid == -1)
	{
		perror("Error:");
		printf("%d", i);
		return (1);
	}
	if (pid == 0)
	{
		printf("[%d] Wait for me, wait for me\n", i);
		sleep(2);
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			pid = fork();
			wait(&status);
			printf("[%d] Oh, it's all better now\n", i);
		}
	}
	return (0);
}
