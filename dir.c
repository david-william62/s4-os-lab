#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

struct dirent *dptr;

void main() {
  char buff[100];
  DIR *dirp;
  printf("\n\nEnter directory name: \n");
  scanf("%s", buff);
  if ((dirp = opendir(buff)) == NULL) {
    printf("Directory does not exist\n");
    exit(1);
  }
  while ((dptr = readdir(dirp)) != NULL) {
    printf("\n%s", dptr->d_name);
  }
  closedir(dirp);
}
