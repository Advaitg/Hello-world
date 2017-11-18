#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void emptyboard1();
int board0(char,char A[],char,char str0[],char str1[]);
int board1(char,char A[],char,char str0[],char str1[]);
void play();
int win(char A[],char str0[],char str1[]);
int draw(char A[]);
int main()
{
	
	printf("\n\n  \"YOU ARE PLAYING TIC TAC TOE\"\n\t WELCOME Aboard\n\n");
	emptyboard1();
	int i,n,m;
	char A[9]={'1','2','3','4','5','6','7','8','9'},O,X,j;
	char str0[10];
	char str1[10];
	/*for(i=0;i<9;i++)
	{
		j=i+1;
		arr[i]=j;				// Array of chars created for tic tac toe elements and O and X declared
	}*/
	printf("Enter the name of Player 1: ");
	scanf("%s",str1);
	printf("Enter the name of Player 2: ");
	scanf("%s",str0);
	printf("Choose between X and O for %s\nEnter 0 For O\nEnter 1 for X\n",str1);
	scanf("%d",&m);  

	//const char m;
	//m=n;
	                        // m is used for X and O dont use it again
	if(m==0)
	{
		board0('O',A,'X',str0,str1);
	}
	else if(m==1)
	{
		board1('X',A,'O',str0,str1);
	}
}
int board1(char P1,char A[9],char P2,char str0[],char str1[] )                // P can be X or O
{
	//printf("Quick Guide:\n  For putting mark on place 1 Enter 1,for 2 enter 2 and so on ");
	int n,i;
	printf("\n\t     |     |     ");
	printf("\n\t  %c  |  %c  |  %c  ",A[0],A[1],A[2]);
	printf("\n\t_____|_____|_____");
	printf("\n\t     |     |     ");
	printf("\n\t  %c  |  %c  |  %c  ",A[3],A[4],A[5]);
	printf("\n\t_____|_____|_____");
	printf("\n\t     |     |     ");
	printf("\n\t  %c  |  %c  |  %c  ",A[6],A[7],A[8]);
	printf("\n\t     |     |     ");
	if(win(A,str0,str1)==-1)
		exit(0);
	draw(A);
	printf("\n\nIt\'s %s\'s turn: ",str1);				//For 2 players
	scanf("%d",&i);
	//while(1)
		//{
		switch(i)
		{
				case 1:
					if(A[0]!='1')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else
					{
						A[0]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;
				
				case 2:
					if(A[1]!='2')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else
					{
						A[1]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;

				case 3:
					if(A[2]!='3')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else
					{
						A[2]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;

				case 4:
					if(A[3]!='4')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else
					{
						A[3]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;

				case 5:
					if(A[4]!='5')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else
					{
						A[4]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;

				case 6:
					if(A[5]!='6')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else
					{
						A[5]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;

				case 7:
					if(A[6]!='7')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else				
					{
						A[6]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;

				case 8:
					if(A[7]!='8')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else
					{
						A[7]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;

				case 9:
					if(A[8]!='9')
					{
						printf("This location is already taken, choose another location");
						board1(P1,A,P2,str0,str1);
					}
					else
					{
						A[8]='X';
						board0(P2,A,P1,str0,str1);
					}
					break;

		}
	//}
		
	return 0;
}
int board0(char P2,char A[9],char P1,char str0[],char str1[])                // P can be X or O
{
	//printf("Quick Guide:\n  For putting mark on place 1 Enter 1,for 2 enter 2 and so on ");
	int n,i;
	printf("\n\t     |     |     ");
	printf("\n\t  %c  |  %c  |  %c  ",A[0],A[1],A[2]);
	printf("\n\t_____|_____|_____");
	printf("\n\t     |     |     ");
	printf("\n\t  %c  |  %c  |  %c  ",A[3],A[4],A[5]);
	printf("\n\t_____|_____|_____");
	printf("\n\t     |     |     ");
	printf("\n\t  %c  |  %c  |  %c  ",A[6],A[7],A[8]);
	printf("\n\t     |     |     ");
	if(win(A,str0,str1)==-1)
		exit(0);
	draw(A);
	printf("\n\nIt\'s %s\'s turn: ",str0);				//For 2 players
	scanf("%d",&i);
	//while(i<9 && )
		//{
		switch(i)
		{
				case 1:
					if(A[0]!='1')
					{
						printf("This location is already taken, choose another location");
						board0(P2,A,P1,str0,str1);
					}
					else
					{
							A[0]='O';
							board1(P1,A,P2,str0,str1);
					}
					break;
				
				case 2:
					if(A[1]!='2')
					{
						printf("This location is already taken, choose another location");
						board0(P2,A,P1,str0,str1);
					}
					else
					{	
						A[1]='O';
						board1(P1,A,P2,str0,str1);
					}
					break;

				case 3:
					if(A[2]!='3')
					{
						printf("This location is already taken, choose another location");
						board0(P2,A,P1,str0,str1);
					}
					else
					{
						A[2]='O';
						board1(P1,A,P2,str0,str1);
					}
					break;

				case 4:
					if(A[3]!='4')
					{
						printf("This location is already taken, choose another location");
						board0(P2,A,P1,str0,str1);
					}
					else
					{
						A[3]='O';
						board1(P1,A,P2,str0,str1);
					}
					break;

				case 5:
					if(A[4]!='5')
					{
						printf("This location is already taken, choose another location");
						board1(P2,A,P1,str0,str1);
					}
					else
					{
						A[4]='O';
						board1(P1,A,P2,str0,str1);
					}
					break;

				case 6:
					if(A[5]!='6')
					{
						printf("This location is already taken, choose another location");
						board0(P2,A,P1,str0,str1);
					}
					else
					{	
						A[5]='O';
						board1(P1,A,P2,str0,str1);
					}
					break;

				case 7:
					if(A[6]!='7')
					{
						printf("This location is already taken, choose another location");
						board0(P2,A,P1,str0,str1);
					}
					else
						A[6]='O';
						board1(P1,A,P2,str0,str1);
					break;

				case 8:
					if(A[7]!='8')
					{
						printf("This location is already taken, choose another location");
						board0(P2,A,P1,str0,str1);
					}
					else
					{
						A[7]='O';
						board1(P1,A,P2,str0,str1);
					}
					break;

				case 9:
					if(A[8]!='9')
					{
						printf("This location is already taken, choose another location");
						board0(P2,A,P1,str0,str1);
					}
					else
					{
						A[8]='O';
						board1(P1,A,P2,str0,str1);
					}
					break;

		}
//	}
		
	return 0;
}

int win(char A[9],char str0[],char str1[])
{
	if(A[0]==A[1] && A[1]==A[2])
	{
		if(A[0]=='X')
			printf("\n\n%s  has Won the Game\\n",str1);
		else if(A[0]=='O')
			printf("\n\n%s  has Won the Game\n",str0);
		return -1;
	}
	if(A[0]==A[3] && A[0]==A[6])
	{
		if(A[0]=='X')
			printf("\n\n%s  has Won the Game\n",str1);
		else if(A[0]=='O')
			printf("\n\n%s  has Won the Game\n",str0);
		return -1;
	}
	if(A[0]==A[4] && A[0]==A[8])
	{
		if(A[0]=='X')
			printf("\n\n%s  has Won the Game\n",str1);
		else if(A[0]=='O')
			printf("\n\n%s  has Won the Game\n",str0);
		return -1;
	}
	if(A[1]==A[4] && A[1]==A[7])
	{
		if(A[1]=='X')
			printf("\n\n%s  has Won the Game\n",str1);
		else if(A[1]=='O')
			printf("\n\n%s  has Won the Game\n",str0);
		return -1;
	}
	if(A[2]==A[5] && A[2]==A[8])
	{
		if(A[2]=='X')
			printf("\n\n%s  has Won the Game\n",str1);
		else if(A[2]=='O')
			printf("\n\n%s  has Won the Game\n",str0);
		return -1;
	}
	if(A[3]==A[4] && A[3]==A[5])
	{
		if(A[3]=='X')
			printf("\n\n%s  has Won the Game\n",str1);
		else if(A[3]=='O')
			printf("\n\n%s  has Won the Game\n",str0);
		return -1;
	}
	if(A[6]==A[7] && A[7]==A[8])
	{
		if(A[6]=='X')
			printf("\n\n%s  has Won the Game\n",str1);
		else if(A[6]=='O')
			printf("\n\n%s  has Won the Game\n",str0);
		return -1;
	}
	if(A[2]==A[4] && A[2]==A[6])
	{
		if(A[0]=='X')
			printf("\n\n%s  has Won the Game\n",str1);
		else if(A[0]=='O')
			printf("\n\n%s  has Won the Game\n",str0);
		return -1;
	}
}
int draw(char A[9])
{
	if(A[0]=='1')
		return 0;
	else if(A[1]=='2')
		return 0;
	else if(A[2]=='3')
		return 0;
	else if(A[3]=='4')
		return 0;
	else if(A[4]=='5')
		return 0;
	else if(A[5]=='6')
		return 0;
	else if(A[6]=='7')
		return 0;
	else if(A[7]=='8')
		return 0;
	else if(A[8]=='9')
		return 0;
	else 
	{
		printf("\n\nThe Game is draw\n");
		exit(0);
	}
}

void emptyboard1() 
{
	printf("\n\t     |     |     ");
	printf("\n\t  T  |  I  |  C  ");
	printf("\n\t_____|_____|_____");
	printf("\n\t     |     |     ");
	printf("\n\t  T  |  A  |  C  ");
	printf("\n\t_____|_____|_____");
	printf("\n\t     |     |     ");
	printf("\n\t  T  |  O  |  E  ");
	printf("\n\t     |     |     \n\n");
}
