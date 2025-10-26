#include<stdio.h>
int main ()
{
char message[]="hello world";
for(int i=0;message[i]!='\0';i++)
{
message[i]=message[i]^0;
}
printf("XOR%s\n",message);
for(int i=0;message[i]!='\0';i++)
{
message[i]=message[i]^0;
}
printf("original%s\n",message);
return 0;
}
