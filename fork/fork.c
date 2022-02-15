// URL: https://blog.csdn.net/shadow_zed/article/details/83820345
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main ()   
{ 
	pid_t fpid; //fpid for the value return from fork 
	int count = 0;

	// call fork to create child process
	// $ man 2 fork
	fpid = fork();

	// so code below will be executed by two processes!
	if (fpid < 0) 
		printf("create process failed!\n"); 
	else if (fpid == 0) {  
		printf("i'm child process, forked from parent process.\n");
		printf("PID is %d\n", getpid());
		printf("PGID is %d\n", getpgid(fpid));
		printf("PPID is %d\n", getppid());
		count++;  
	} else {  
		printf("i'm parent process.\n");
		printf("child PID is %d\n", fpid);
		printf("PID is %d\n", getpid());
		printf("PGID is %d\n", getpgid(fpid));
		// $ echo $$
		printf("PPID is %d\n", getppid());
		count++;  
	}  
	printf("count result is: %d\n", count);  
	return 0;  
}
