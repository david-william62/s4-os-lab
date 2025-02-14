#include <stdio.h>

int n,p[30],bt[30],wt[30],tot_tat=0,tot_wt=0,tat[30],FCFS_wt=0,FCFS_tat=0;
float awt, avg_wt, avg_tat;

int wt_tat(int* ,int*);

void main() {
  int i;
  printf("Enter no of processes: ");
  scanf("%d",&n);
  printf("Enter burst time of each process: \n");
  for(i=0;i<n;i++) {
    scanf("%d",&bt[i]);
    p[i]=i;
  }
  printf("\nFirst Come First Server Algorithm\n");
  wt_tat(&FCFS_tat,&FCFS_wt);
  avg_tat=tot_tat/n;
  avg_wt=tot_wt/n;
  printf("Total turnaround time: %d\n",tot_tat);
  printf("Average turnaround time: %f\n",avg_tat);
  printf("Total waiting time: %d\n",tot_wt);
  printf("Average waiting time: %f\n",avg_wt);
}

int wt_tat(int*a, int*b) {
  int i;
  for(i=0;i<n;i++) {
    if(i==0) {
      tat[i]=bt[i];
    } else {
      tat[i]=tat[i-1]+bt[i];
    }
    tot_tat = tot_tat + tat[i];
  }
  *a = tot_tat;
  for(i=0;i<n;i++) {
    if(i==0) 
      wt[i] = 0;
    else 
      wt[i] = wt[i-1] + bt[i-1];
  tot_wt += wt[i];
  }
  *b = tot_wt;
  printf("\nPROCESS\t\tBURST TIME\tTURN AROUND TIME\tWAITIN TIME");
  for(i=0;i<n;i++) {
    printf("\n%d\t\t%d\t\t%d\t\t\t%d\n",p[i],bt[i],tat[i],wt[i]);
  }

  return 0;
}
