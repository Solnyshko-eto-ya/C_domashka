#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    printf("Parent.c\n");
    printf("PID of old process is: %d\n", getpid());
    char *args[] = {"I want cookies", "Michael", NULL};
    execv("./child", args);
    return 0; 
}