#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int que[SIZE];
int front=-1,rear=-1;
void main()
{
  void insertq(int);
  int deleteq();
  int searchq(int);
  int data,opt,tfront,ans;
  do
  {
     printf("1.insertq\n");
     printf("2.deleteq\n");
     printf("3.searchq\n");
     printf("4.exit\n");
     printf("Your option is:");
     scanf("%d",&opt);
     switch(opt)
     {
        case 1:printf("data:");
              scanf("%d",&data);
              insertq(data);
              break;
        case 2: 
                printf("deleted item=%d\n",deleteq ());
              break;
        case 3:printf("item to be search");
        scanf("%d",&data);
        ans=searchq(data);
        if(ans==1)
          printf("found\n");
          else
          printf("not found\n");
          break;
        case 4:exit(0);
      }
  }
  while(1);
  }
 void insertq(int item)
 {
  if (rear==SIZE-1)
    printf("queue is full\n");
  else
    que[++rear]=item;
 }
 int deleteq()
 {
  if(front==rear)
  {
  printf("queue is empty\n");
  exit(1);
 }
  return que[++front];
  }
 int searchq(int item)
 {
  int tfront=front+1;
  while(tfront!=rear && que[tfront]!=item)
  ++tfront;
  if(que[tfront]==item)
  return 1;
  else
    return 0;
 }
    
    
        
