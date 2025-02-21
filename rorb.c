#include <stdio.h>
#define true 1
#define false 0
struct pros {
  int id;
  int bt;
  int tat;
  int wt;
  int ex=false;
};
int q;
float t_tat=0;t_wt=0,a_tat,a_wt;

void main() {
  int i,n;
  printf("Enter no of process");
  scanf("%d",&n);
  struct pros p[n];
  printf("Enter burst time of each process");
  for(i=0;i<n;i++) {
    p[i].id = i+1;
    scanf("%d",&p[i].bt);
  }
  printf("Enter quantum time")
  scanf("%d",&q);
  int t_bt[n];
}
