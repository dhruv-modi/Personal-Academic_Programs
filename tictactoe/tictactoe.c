#include <stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
	 int ar[9]={0};
     int p1[9]={0};
	 int p2[9]={0};
      char p3[9]={' '};
	  int i,k,j,yes=0,c;
	  int p=1;
  	//arr=0;
  	//printf("%d",arr[0]);
//do
//	{arr[9]={0};p1[9]={0}; p2[9]={0};p3[9]={' '};
	 
	  while(yes<9){
	k=0;
	 for(i=0;i<3;i++)
	{
		printf(" %d | %d | %d \n",k,k+1,k+2);
		if(i<2){
		printf("------------\n");}
		k=k+3;
	}scan:
	printf("Please select your postition to insert :- ");
	scanf("%d",&j);


	if(j<9 && j>-1)
	{if(ar[j]==1){
	printf("Cmon its already selected try again \n\n");
	goto scan;}
	else
		ar[j]=1;
	if(p%2!=0)
	{ //if(p1[j]==1){
	//printf("You have already selected it,lets get  it a try again :)");
	//goto scan;}

		p1[j]=1;
	}
	if(p%2==0)
	{//f(p2[j]==1){
	//printf("You have already selected it,lets get  it a try again :)");
	//	goto scan;}

		p2[j]=1;
	}

	p++;
}
else{
 printf("Invalid value");}


k=0;















printf("\n\n\n\n");








k=0;

for(i=0;i<9;i++)
{
	if(p1[i]==1)
	  {
	     p3[i]='X';
	  }
	  else if(p2[i]==1)
	  {
	  	p3[i]='O';
	  }
}
for(i=0;i<3;i++)
	{
printf(" %c | %c | %c\n",p3[k],p3[k+1],p3[k+2]);
		if(i<2){
		printf("------------                  \n");}
		k=k+3;
	 }


	 printf("\n\n");




//PLAYER 1

if(p3[0]=='X' && p3[3]=='X' && p3[6]=='X')
{
	printf(" Player1 won");
	goto abc;
}
if(p3[0]=='X' && p3[1]=='X' && p3[2]=='X')
{
	printf(" Player1 won");
	goto abc;
}
if(p3[1]=='X' && p3[4]=='X' && p3[7]=='X')
{
	printf(" Player1 won");
	goto abc;
}
if(p3[2]=='X' && p3[5]=='X' && p3[8]=='X')
{
	printf(" Player1 won");
	goto abc;
}
if(p3[3]=='X' && p3[4]=='X' && p3[5]=='X')
{
	printf(" Player1 won");
	goto abc;
}
if(p3[6]=='X' && p3[7]=='X' && p3[8]=='X')
{
	printf(" Player1 won");
	goto abc;
}
if(p3[0]=='X' && p3[4]=='X' && p3[8]=='X')
{
	printf(" Player1 won");
	goto abc;
}
if(p3[2]=='X' && p3[4]=='X' && p3[6]=='X')
{
	printf(" Player1 won");
	goto abc;
}
//PLAYER 2

if(p3[0]=='O' && p3[3]=='O' && p3[6]=='O')
{
	printf(" Player2 won");
	goto abc;
}
if(p3[0]=='O' && p3[1]=='O'&& p3[2]=='O')
{
	printf(" Player2 won");
	goto abc;
}
if(p3[1]=='O'&& p3[4]=='O'&& p3[7]=='O')
{
	printf(" Player2 won");
	goto abc;
}
if(p3[2]=='O'&& p3[5]=='O' && p3[8]=='O')
{
	printf(" Player2 won");
	goto abc;
}
if(p3[3]=='O'&& p3[4]=='O' && p3[5]=='O')
{
	printf(" Player2 won");
	goto abc;
}
if(p3[6]=='O'&& p3[7]=='O' && p3[8]=='O')
{
	printf(" Player2 won");
	goto abc;
}
if(p3[0]=='O'&& p3[4]=='O' && p3[8]=='O')
{
	printf(" Player2 won");
	goto abc;
}
if(p3[2]=='O'&& p3[4]=='O' && p3[6]=='O')
{
	printf(" Player2 won");
	goto abc;
}


yes++;


//clrscr();
 }
 printf("Its a DRAW ");
 abc: 
 getch();
 //printf("\n\n\n");
 //printf("Do you want to restart?(1-yes/0-no)");
 //scanf("%d",&c);
 //}
 //while(c==1);
  return 0;
 
}
