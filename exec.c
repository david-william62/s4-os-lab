#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
  int pid;
  char *args[] = {"/bin/ls", "-l", 0};
  printf("Parent Process \n");
  pid = fork();
  if (pid == 0) {
    execv("/bin/ls", args);
    printf("Child process \n");
  } else {
    wait();
    printf("Parent Process \n");
    exit(1);
  }
}
