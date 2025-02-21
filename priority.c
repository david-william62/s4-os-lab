#include <stdio.h>

struct pros {
  int id;
  int priority;
  int bt;
  int tat;
  int wt;
};

float t_tat = 0, a_tat, t_wt = 0, a_wt;

void main() {
  int n;
  printf("Enter no of processes: ");
  scanf("%d", &n);

  struct pros p[n];

  printf("Enter burst time of each process: \n");
  int i;
  for (i = 0; i < n; i++) {
    p[i].id = i + 1;
    scanf("%d", &p[i].bt);
  }

  printf("Enter priority of each process: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &p[i].priority);
  }

  // struct pros sp[n];
  struct pros temp;

  for (i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (p[i + 1].priority < p[i].priority) {
        temp = p[i];
        p[i] = p[i + 1];
        p[i + 1] = temp;
      }
    }
  }

  for(i=0;i<n;i++) {
    if(i==0) {
      p[i].tat = p[i].bt;
      p[i].wt = 0;
    } else {
      p[i].tat = p[i-1].tat + p[i].bt;
      p[i].wt = p[i-1].wt + p[i-1].bt;
    }
    t_tat += p[i].tat;
    t_wt += p[i].wt;
  }

  a_tat = t_tat / n;
  a_wt = t_wt / n;

  printf("\nPROCESS\t\tPRIORITY\tBST TIME\tTURN AROUND TIME\tWAITING TIME");
  for (i = 0; i < n; i++) {
    printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[i].id, p[i].priority, p[i].bt, p[i].tat, p[i].wt);
  }

  printf("Total Waiting time: %f\n",t_wt);
  printf("Average Waiting time: %f\n",a_wt);
  printf("Total turnaround time: %f\n",t_tat);
  printf("Average Waiting time: %f\n",a_tat);
}

