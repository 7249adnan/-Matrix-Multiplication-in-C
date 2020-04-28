#include<conio.h>
#include<stdio.h>

void main()
{
int i,j,row,col,sum=0;
int ab[10][10];
int cd[10][10];
int xy[10][10],a,b,n=0,k,l;
int r1,r2,c1,c2;

clrscr();

abc:

printf("\n Enter Row of Matrix 1 :- ");
scanf("%d",&r1);
printf("\n Enter Column of Matrix 1 :- ");
scanf("%d",&c1);
printf("\n Enter Row of Matrix 2 :- ");
scanf("%d",&r2);
printf("\n Enter Column of Matrix 2 :- ");
scanf("%d",&c2);

if(c1==r2)
{
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	   printf("\n Enter Row %d col %d of Matrix 1 :- ",i,j,k);
	   scanf("%d",&ab[i][j]);
	 }
}

for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	  {
	   printf("\n Enter Row %d col %d of Matrix 2 :- ",i,j,k);
	   scanf("%d",&cd[i][j]);
	  }
}

for(l=0;l<r1;l++)
{
	for(i=0;i<c2;i++)
{
	n=0;
	sum=0;
		for(j=0;j<c1;j++)
		{
			sum=sum+(ab[l][j]*cd[n][i]);
			n++;
		}
	printf("\n");

xy[l][i]=sum;
}

printf("\n");

}

clrscr();
printf("\n    Output :-  \n\n");

for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
	printf("%d   ",xy[i][j]);
	}
	printf("\n\n");

}
}
else
{
clrscr();
printf("\n Rows and Columns Of matrix Are not Perfect ");
printf("\n XXX--- !!!!   ERROR   !!!! ---XXX");
getch();
clrscr();

goto abc;
}
getch();
}



/*
xy[0][0]=(ab[0][0]*cd[0][0])+(ab[0][1]*cd[1][0])+(ab[0][2]*cd[2][0]);
xy[0][1]=(ab[0][0]*cd[0][1])+(ab[0][1]*cd[1][1])+(ab[0][2]*cd[2][1]);
xy[0][2]=(ab[0][0]*cd[0][2])+(ab[0][1]*cd[1][2])+(ab[0][2]*cd[2][2]);

xy[1][0]=(ab[1][0]*cd[0][0])+(ab[1][1]*cd[1][0])+(ab[1][2]*cd[2][0]);
xy[1][1]=(ab[1][0]*cd[0][1])+(ab[1][1]*cd[1][1])+(ab[1][2]*cd[2][1]);
xy[1][2]=(ab[1][0]*cd[0][2])+(ab[1][1]*cd[1][2])+(ab[1][2]*cd[2][2]);

xy[2][0]=(ab[2][0]*cd[0][0])+(ab[2][1]*cd[1][0])+(ab[2][2]*cd[2][0]);
xy[2][1]=(ab[2][0]*cd[0][1])+(ab[2][1]*cd[1][1])+(ab[2][2]*cd[2][1]);
xy[2][2]=(ab[2][0]*cd[0][2])+(ab[2][1]*cd[1][2])+(ab[2][2]*cd[2][2]);

xy[0][0]=(ab[0][0]*cd[0][0])+(ab[0][1]*cd[1][0]);
xy[0][1]=(ab[0][0]*cd[0][1])+(ab[0][1]*cd[1][1]);

xy[1][0]=(ab[1][0]*cd[0][0])+(ab[1][1]*cd[1][0]);
xy[1][1]=(ab[1][0]*cd[0][1])+(ab[1][1]*cd[1][1]);
*/
