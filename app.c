
#include<stdio.h>
void calculator()
{
int a,b;
printf("\n enter two number:");
scanf("%d %d",&a,&b);
printf("sum=%d\n",a+b);
}
void menu(){
int choice;
printf("\nmenu:\n");
printf("1. calculator\n");
printf("2. exit\n");
printf("enter choice:");
scanf("%d",&choice);
if(choice ==1)
{
calculator();
}
else{
printf("exciting..\n");
}
}
int main(){
char name[50];
printf("enter your name:");
scanf("%s",name);
printf("wellcome %s to devops C app\n",name);
menu();
return 0;
}
