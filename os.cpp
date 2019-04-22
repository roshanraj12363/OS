#include<stdio.h>
#include<conio.h>
int main()
{
int choice;
int P0=1,P1=1,turn=1;
do
{

printf("\n  1. Process 1 Enter \n"); 
printf("  2. Process 2 Enter \n");
printf("  3. Both Process Enter \n");
printf("  4. Exit \n");
scanf("%d", &choice);
if(choice==1)
{
P0=0;
while(P1==0)
{
if(turn==2)
P0=1;
while(turn==2)
P0=0;
}
printf("\nProcess P1 Enters the Critical section");
P0=1;
turn=2;
}
else
printf("\nIt is the turn process P2");

if(choice==2)
{
                P1=0;
                while(P0==0)
{
                if(turn==1)
                P1=1;
while(turn==1);
P1=0;
}
printf("\nProcess P2 enters in critical section");
P1=1;
turn=1;
}
else
printf("\nIt is turn of Process P1");
}
while(choice!=4);
return 0;
}


