#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int At[10],Bt[10],Rt[10],EndTime,i,Shortest;
int Remain=0,n,Time,Sum_Wait=0,Sum_Turnaround=0;
printf("-----------------Welcome To The Scheduler--------------\n");
printf("Enter The Process details \n\n");
printf("No Of Processes : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{	
printf("<<<<<<<<<<<-Arrival Times of Processes P%d ->>>>>>>>>>>> ",i+1);
scanf("%d",&At[i]);
printf("<<<<<<<<<<<<- Burst Times of Processes P%d ->>>>>>>>>>> ",i+1);
scanf("%d",&Bt[i]);
Rt[i]=Bt[i];
}
printf("\n\nProcess\t|Turnaround Time| Waiting Time\n\n");
Rt[9]=9999;
for(Time=0;Remain!=n;Time++)
{
Shortest=9;