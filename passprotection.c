#include<stdio.h>
int main()
{
  FILE *p;
  int username,password,n=0;
  int user,pass;
if((p=fopen("protect.c","w+")==NULL)
puts("File can not open!\n"),exit(1);



printf("type username\n");ss

scanf("%d",&username);
printf("type password\n");
scanf("%d",&password);

while(!feof(p))
{
  fscanf(p,"%d%d",&user,&pass);
  if(user==username && pass==password)
  {
    printf("Login successful\n");
  }
  else if(n<3)
  {
    printf("you are wrong\n");
  }
  else
  {
    printf("System crash\n");
  }
}
fclose(p);
return 0;
}
