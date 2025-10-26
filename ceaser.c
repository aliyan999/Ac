#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main ()
{
	char instr[100],crypt[100],decrpt[100];
	int shift,k;
	printf("enter your string");
	fgets(instr,sizeof (instr),stdin);
	printf("enter your key");
	scanf("%d",&shift);
	printf("original string is:%s",instr);

//encrption

for(k=0;instr[k] !='\0';k++)
{
	char aa=tolower(instr[k]);
	if(aa>='a' && aa<='z');
{
	aa=((aa-'a'+shift)%26+'a');
}
	crypt[k]=aa;
}
crypt[k]='\0';
printf("encrpted string is:%s",crypt);

//decrption

for(k=0;crypt[k]!='\0';k++)
{
	char aa=crypt[k];
	if(aa>='a' && aa<='z');
{
aa=((aa-'a'-shift+26)%26+'a');
}
decrpt[k]=aa;
}
decrpt[k]='\0';
printf("decrpted string is:%s",decrpt);
}
