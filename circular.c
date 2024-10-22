#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int front,rear=0;
int que[SIZE];
void main()
{
  void insertq(int);
  int deleteq();
  int searchq(int);
  int data,opt,ans;
  do
  {
    printf("1.insert\n");
    printf("2.delete\n");
    printf("3.search\n");
    printf("4.exit\n");
    printf("Your option:");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:printf("Data:");
            scanf("%d",&data);
            insertq(data);
            break;
      case 2:
            printf("Delete data=%d \n",deleteq());
              break;
      case 3:printf("Search data:");
             scanf("%d",&data);
              ans=searchq(data);
             if(ans==1)
             printf("Data found\n");
             else
                printf("Data not found\n");
           break;
      case 4:exit(0);
    }
  }
  while(1);
  }
  void insertq(int item)
  {
    int trear=rear;
    trear=(trear+1)%SIZE;
    if(trear==front)
        printf("Queue is full\n");
    else
    
        rear=trear;
      que[rear]=item;
     return;
  }
  int deleteq()
  {
    if(front==rear)
    {
        printf("Queue is empty\n");
        exit(1);
    }
    else
  {
    front=(front+1)%SIZE;
    return que[front];
  }
}
  int searchq(int item)
  {
    int tfront=front;
    if(tfront!=rear)
    {
    tfront=(tfront+1)%SIZE;
    while(tfront!=rear&&que[tfront!=item])
      tfront=(tfront+1)%SIZE;
      if(que[tfront]==item)
          return 1;
      else
          return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          }
          return 0;
  }

             
              
      
