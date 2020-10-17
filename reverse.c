#include<stdio.h>
struct bank{
int acc_no;
char name[30];
int balance;
}b[10];
int main()
{
      int i,m=3;
    for(i=0;i<3;i++)
    {
        printf("Enter account number\n");
        scanf("%d",&b[i].acc_no);
        printf("Enter name\n");
        scanf("%s",&b[i].name);
        printf("Enter balance\n");
        scanf("%d",&b[i].balance);


    }
    int n,total,total_2,w,d;
    printf("enter 1 for withdrawal and 0 for deposit\n");
    scanf("%d",&n);
    for(i=0;i<3;i++){
    if(n==1)
    {
        printf("enter your account number\n");
        scanf("%d",&b[i].acc_no);

        printf("enter amount which you want to withdraw\n");
        scanf("%d",&w);
        total=b[i].balance-w;
        printf("total amount left in your account is %d\n",total);

    }
    if(n==0)
    {
        printf("enter amount which you want to deposit\n");
        scanf("%d",&d);
        total_2=b[i].balance-d;
        printf("total amount left in your account is %d\n",total_2);
    }
    }
    return 0;
}
