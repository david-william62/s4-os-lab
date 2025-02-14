#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  char *path, path1[10];
  struct stat *nfile;
  nfile = (struct stat *)malloc(sizeof(struct stat));
  printf("Enter name of file to see stats of: ");
  scanf("%s", path1);
  stat(path1, nfile);
  printf("usedId: %d \n", nfile->st_uid);
  printf("block sixe: %ld \n", nfile->st_blksize);
  printf("last access time: %ld \n", nfile->st_atime);
  printf("production mode: %i \n", nfile->st_mode);
  printf("File size: %ld \n", nfile->st_size);
  printf("Number of links: %li \n", nfile->st_nlink);

  return 0;
}
