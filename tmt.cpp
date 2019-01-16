#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
#include<string.h>
#include<time.h>

int checking(char grid[3][3]);
int ai(char a[3][3],char team);
void main()

{
clrscr();

int move1=0,move2=0,move3=0,move4=0,move5=0;
int cmove1=0,cmove2=0,cmove3=0,cmove4=0,cmove5=0;
int i,j,input,counter,checkret=0;
int tosscomp,rem,decision;
char toss,team1,comp;
char grid[3][3];

cout<<"                         Welcome to 'TickMyToe'\n\n";

start:

cout<<"Choose your marker(X or O):";
team1=toupper(getche());
if(team1=='X')
{comp='O';}
else if(team1=='O')
{comp='X';}
else
{cout<<"\n Your entered an invalid marker!! Please choose again...\n";
goto start;}

cout<<"\n\n Use 7 8 9\n     4 5 6\n     1 2 3\n as controls to where you want to place your marker.";

cout<<"\n\n";
grid[0][0]='_';
grid[0][1]='_';
grid[0][2]='_';
grid[1][0]='_';
grid[1][1]='_';
grid[1][2]='_';
grid[2][0]='_';
grid[2][1]='_';
grid[2][2]='_';

for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];
}
cout<<"\n";
}

cout<<"\nPress any key...........";
getch();
clrscr();
toss:

cout<<"Choose Heads or Tails(H/T):" ;
toss=toupper(getche());
if(toss=='H'|| toss=='T')
{if(toss=='H')
decision=0;
else if(toss=='T')
decision=1;}
else
{cout<<"\n Invalid Choice!!..";
goto toss;}
srand(unsigned(time(NULL)));
tosscomp=rand();
rem=tosscomp%2==0;
if(rem==decision)
{
cout<<"\n You won the toss!!  You will play the first move...\nPress any key..";}
else
{cout<<"\n You lost the toss!! I will play the first move...\nPress any key..";

cmove1=ai(grid,team1);
if(cmove1==1)
{grid[2][0]=comp;}
else if(cmove1==2)
{grid[2][1]=comp;}
else if(cmove1==3)
{grid[2][2]=comp;}
else if(cmove1==4)
{grid[1][0]=comp;}
else if(cmove1==5)
{grid[1][1]=comp;}
else if(cmove1==6)
{grid[1][2]=comp;}
else if(cmove1==7)
{grid[0][0]=comp;}
else if(cmove1==8)
{grid[0][1]=comp;}
else if(cmove1==9)
{grid[0][2]=comp;}
counter=1;}
getch();

clrscr();
cout<<" Its your turn........\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];}
cout<<"\n";
}
check1:
input=(getch()-'0');
if(input==move1||input==move2||input==move3||input==move4||input==move5||input==cmove1||input==cmove2||input==cmove3||input==cmove4||input==cmove5)
{cout<<"\n Invalid move.. Try again";
goto check1;}

if(input==1)
{grid[2][0]=team1;}
else if(input==2)
{grid[2][1]=team1;}
else if(input==3)
{grid[2][2]=team1;}
else if(input==4)
{grid[1][0]=team1;}
else if(input==5)
{grid[1][1]=team1;}
else if(input==6)
{grid[1][2]=team1;}
else if(input==7)
{grid[0][0]=team1;}
else if(input==8)
{grid[0][1]=team1;}
else if(input==9)
{grid[0][2]=team1;}
else
{cout<<"\n Invalid move..Try again.";
goto check1;}

move1=input;
clrscr();
cout<<"\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];
}
cout<<"\n";
}
cmove2=ai(grid,team1);
if(cmove2==1)
{grid[2][0]=comp;}
else if(cmove2==2)
{grid[2][1]=comp;}
else if(cmove2==3)
{grid[2][2]=comp;}
else if(cmove2==4)
{grid[1][0]=comp;}
else if(cmove2==5)
{grid[1][1]=comp;}
else if(cmove2==6)
{grid[1][2]=comp;}
else if(cmove2==7)
{grid[0][0]=comp;}
else if(cmove2==8)
{grid[0][1]=comp;}
else if(cmove2==9)
{grid[0][2]=comp;}

clrscr();
cout<<" Its your turn........\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];}
cout<<"\n";
}
check2:
input=(getch()-'0');
if(input==move1||input==move2||input==move3||input==move4||input==move5||input==cmove1||input==cmove2||input==cmove3||input==cmove4||input==cmove5)
{cout<<"\n Invalid move.. Try again";
goto check2;}

if(input==1)
{grid[2][0]=team1;}
else if(input==2)
{grid[2][1]=team1;}
else if(input==3)
{grid[2][2]=team1;}
else if(input==4)
{grid[1][0]=team1;}
else if(input==5)
{grid[1][1]=team1;}
else if(input==6)
{grid[1][2]=team1;}
else if(input==7)
{grid[0][0]=team1;}
else if(input==8)
{grid[0][1]=team1;}
else if(input==9)
{grid[0][2]=team1;}
else
{cout<<"\n Invalid move..Try again.";
goto check2;}

move2=input;
clrscr();
cout<<"\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];
}
cout<<"\n";
}


cmove3=ai(grid,team1);
if(cmove3==1)
{grid[2][0]=comp;}
else if(cmove3==2)
{grid[2][1]=comp;}
else if(cmove3==3)
{grid[2][2]=comp;}
else if(cmove3==4)
{grid[1][0]=comp;}
else if(cmove3==5)
{grid[1][1]=comp;}
else if(cmove3==6)
{grid[1][2]=comp;}
else if(cmove3==7)
{grid[0][0]=comp;}
else if(cmove3==8)
{grid[0][1]=comp;}
else if(cmove3==9)
{grid[0][2]=comp;}

clrscr();
cout<<" Its your turn........\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];}
cout<<"\n";
}


checkret=checking(grid);
if(checkret==1)
{cout<<"\n Ooops!! You lost the game....";
goto end;}


check3:
input=(getch()-'0');
if(input==move1||input==move2||input==move3||input==move4||input==move5||input==cmove1||input==cmove2||input==cmove3||input==cmove4||input==cmove5)
{cout<<"\n Invalid move.. Try again";
goto check3;}

if(input==1)
{grid[2][0]=team1;}
else if(input==2)
{grid[2][1]=team1;}
else if(input==3)
{grid[2][2]=team1;}
else if(input==4)
{grid[1][0]=team1;}
else if(input==5)
{grid[1][1]=team1;}
else if(input==6)
{grid[1][2]=team1;}
else if(input==7)
{grid[0][0]=team1;}
else if(input==8)
{grid[0][1]=team1;}
else if(input==9)
{grid[0][2]=team1;}
else
{cout<<"\n Invalid move..Try again.";
goto check3;}

move3=input;
clrscr();
cout<<"\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];
}
cout<<"\n";
}

checkret=checking(grid);
if(checkret==1)
{cout<<"\n Congratulations!!! You won the game.....";
goto end;}

cmove4=ai(grid,team1);
if(cmove4==1)
{grid[2][0]=comp;}
else if(cmove4==2)
{grid[2][1]=comp;}
else if(cmove4==3)
{grid[2][2]=comp;}
else if(cmove4==4)
{grid[1][0]=comp;}
else if(cmove4==5)
{grid[1][1]=comp;}
else if(cmove4==6)
{grid[1][2]=comp;}
else if(cmove4==7)
{grid[0][0]=comp;}
else if(cmove4==8)
{grid[0][1]=comp;}
else if(cmove4==9)
{grid[0][2]=comp;}

clrscr();
cout<<" Its your turn........\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];}
cout<<"\n";
}


checkret=checking(grid);
if(checkret==1)
{cout<<"\n Ooops!! You lost the game....";
goto end;}


check4:
input=(getch()-'0');
if(input==move1||input==move2||input==move3||input==move4||input==move5||input==cmove1||input==cmove2||input==cmove3||input==cmove4||input==cmove5)
{cout<<"\n Invalid move.. Try again";
goto check4;}

if(input==1)
{grid[2][0]=team1;}
else if(input==2)
{grid[2][1]=team1;}
else if(input==3)
{grid[2][2]=team1;}
else if(input==4)
{grid[1][0]=team1;}
else if(input==5)
{grid[1][1]=team1;}
else if(input==6)
{grid[1][2]=team1;}
else if(input==7)
{grid[0][0]=team1;}
else if(input==8)
{grid[0][1]=team1;}
else if(input==9)
{grid[0][2]=team1;}
else
{cout<<"\n Invalid move..Try again.";
goto check4;}

move4=input;
clrscr();
cout<<"\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];
}
cout<<"\n";
}


checkret=checking(grid);
if(checkret==1)
{cout<<"\n Congratulations!!! You won the game.....";
goto end;}


cmove5=ai(grid,team1);
if(cmove5==1)
{grid[2][0]=comp;}
else if(cmove5==2)
{grid[2][1]=comp;}
else if(cmove5==3)
{grid[2][2]=comp;}
else if(cmove5==4)
{grid[1][0]=comp;}
else if(cmove5==5)
{grid[1][1]=comp;}
else if(cmove5==6)
{grid[1][2]=comp;}
else if(cmove5==7)
{grid[0][0]=comp;}
else if(cmove5==8)
{grid[0][1]=comp;}
else if(cmove5==9)
{grid[0][2]=comp;}

clrscr();
cout<<" Its your turn........\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];}
cout<<"\n";
}

checkret=checking(grid);
if(checkret==1)
{cout<<"\n Ooops!! You lost the game....";
goto end;}

if(counter==1)
{goto bend;}
check5:
input=(getch()-'0');
if(input==move1||input==move2||input==move3||input==move4||input==move5||input==cmove1||input==cmove2||input==cmove3||input==cmove4||input==cmove5)
{cout<<"\n Invalid move.. Try again";
goto check5;}

if(input==1)
{grid[2][0]=team1;}
else if(input==2)
{grid[2][1]=team1;}
else if(input==3)
{grid[2][2]=team1;}
else if(input==4)
{grid[1][0]=team1;}
else if(input==5)
{grid[1][1]=team1;}
else if(input==6)
{grid[1][2]=team1;}
else if(input==7)
{grid[0][0]=team1;}
else if(input==8)
{grid[0][1]=team1;}
else if(input==9)
{grid[0][2]=team1;}
else
{cout<<"\n Invalid move..Try again.";
goto check5;}

move5=input;
clrscr();
cout<<"\n\n";
for(i=0;i<=2;i++)
{cout<<"          ";
for(j=0;j<=2;j++)
{cout<<" "<<grid[i][j];
}
cout<<"\n";
}

checkret=checking(grid);
if(checkret==1)
{cout<<"\n Congratulations!!! You won the game.....";
goto end;}


bend:
cout<<"\n"<<"  Match Drawn!!!";

end:
cout<<"\n\n                               Thank You!";
getch();
}

int ai(char a[3][3],char team)
{
int i,j,row,column,ret,stop,com;
if(team=='X')
{com='O';}
else if(team=='O')
{com='X';}

if(a[0][0]==com && a[0][1]==com && a[0][2]=='_')
{ret=(9);}
else if(a[0][0]==com && a[0][2]==com && a[0][1]=='_')
{ret=(8);}
else if(a[0][2]==com && a[0][1]==com && a[0][0]=='_')
{ret=(7);}

else if(a[1][1]==com && a[1][2]==com && a[1][0]=='_')
{ret=(4);}
else if(a[1][0]==com && a[1][2]==com && a[1][1]=='_')
{ret=(5);}
else if(a[1][1]==com && a[1][0]==com && a[1][2]=='_')
{ret=(6);}

else if(a[2][1]==com && a[2][2]==com && a[2][0]=='_')
{ret=(1);}
else if(a[2][0]==com && a[2][2]==com && a[2][1]=='_')
{ret=(2);}
else if(a[2][0]==com && a[2][1]==com && a[2][2]=='_')
{ret=(3);}

else if(a[1][0]==com && a[2][0]==com && a[0][0]=='_')
{ret=(7);}
else if(a[0][0]==com && a[2][0]==com && a[1][0]=='_')
{ret=(4);}
else if(a[0][0]==com && a[1][0]==com && a[2][0]=='_')
{ret=(1);}

else if(a[1][1]==com && a[2][1]==com && a[0][1]=='_')
{ret=(8);}
else if(a[2][1]==com && a[0][1]==com && a[1][1]=='_')
{ret=(5);}
else if(a[1][1]==com && a[0][1]==com && a[2][1]=='_')
{ret=(2);}

else if(a[1][2]==com && a[2][2]==com && a[0][2]=='_')
{ret=(9);}
else if(a[0][2]==com && a[2][2]==com && a[1][2]=='_')
{ret=(6);}
else if(a[0][2]==com && a[1][2]==com && a[2][2]=='_')
{ret=(3);}

else if(a[1][1]==com && a[2][2]==com && a[0][0]=='_')
{ret=(7);}
else if(a[0][0]==com && a[2][2]==com && a[1][1]=='_')
{ret=(5);}
else if(a[1][1]==com && a[0][0]==com && a[2][2]=='_')
{ret=(3);}

else if(a[1][1]==com && a[2][0]==com && a[0][2]=='_')
{ret=(9);}
else if(a[0][2]==com && a[2][0]==com && a[1][1]=='_')
{ret=(5);}
else if(a[1][1]==com && a[0][2]==com && a[2][0]=='_')
{ret=(1);}





else if(a[0][0]==team && a[0][1]==team && a[0][2]=='_')
{ret=(9);}
else if(a[0][0]==team && a[0][2]==team && a[0][1]=='_')
{ret=(8);}
else if(a[0][2]==team && a[0][1]==team && a[0][0]=='_')
{ret=(7);}

else if(a[1][1]==team && a[1][2]==team && a[1][0]=='_')
{ret=(4);}
else if(a[1][0]==team && a[1][2]==team && a[1][1]=='_')
{ret=(5);}
else if(a[1][1]==team && a[1][0]==team && a[1][2]=='_')
{ret=(6);}

else if(a[2][1]==team && a[2][2]==team && a[2][0]=='_')
{ret=(1);}
else if(a[2][0]==team && a[2][2]==team && a[2][1]=='_')
{ret=(2);}
else if(a[2][0]==team && a[2][1]==team && a[2][2]=='_')
{ret=(3);}

else if(a[1][0]==team && a[2][0]==team && a[0][0]=='_')
{ret=(7);}
else if(a[0][0]==team && a[2][0]==team && a[1][0]=='_')
{ret=(4);}
else if(a[0][0]==team && a[1][0]==team && a[2][0]=='_')
{ret=(1);}

else if(a[1][1]==team && a[2][1]==team && a[0][1]=='_')
{ret=(8);}
else if(a[2][1]==team && a[0][1]==team && a[1][1]=='_')
{ret=(5);}
else if(a[1][1]==team && a[0][1]==team && a[2][1]=='_')
{ret=(2);}

else if(a[1][2]==team && a[2][2]==team && a[0][2]=='_')
{ret=(9);}
else if(a[0][2]==team && a[2][2]==team && a[1][2]=='_')
{ret=(6);}
else if(a[0][2]==team && a[1][2]==team && a[2][2]=='_')
{ret=(3);}

else if(a[1][1]==team && a[2][2]==team && a[0][0]=='_')
{ret=(7);}
else if(a[0][0]==team && a[2][2]==team && a[1][1]=='_')
{ret=(5);}
else if(a[1][1]==team && a[0][0]==team && a[2][2]=='_')
{ret=(3);}

else if(a[1][1]==team && a[2][0]==team && a[0][2]=='_')
{ret=(9);}
else if(a[0][2]==team && a[2][0]==team && a[1][1]=='_')
{ret=(5);}
else if(a[1][1]==team && a[0][2]==team && a[2][0]=='_')
{ret=(1);}

else
{for(i=0;i<=2;i++)
{for(j=0;j<=2;j++)
{if(a[i][j]=='_')
{row=i;
column=j;
stop=1;
break;}}
if(stop==1)
{break;}}

if(row==0)
{if(column==0)
{ret=(7);}
if(column==1)
{ret=(8);}
if(column==2)
{ret=(9);}}

if(row==1)
{if(column==0)
{ret=(4);}
if(column==1)
{ret=(5);}
if(column==2)
{ret=(6);}}

if(row==2)
{if(column==0)
{ret=(1);}
if(column==1)
{ret=(2);}
if(column==2)
{ret=(3);}}
}
return ret;}

int checking(char grid[3][3])
{if(grid[0][0]=='X' && grid[0][1]=='X' && grid[0][2]=='X' || grid[0][0]=='O' && grid[0][1]=='O' && grid[0][2]=='O'||
   grid[0][0]=='X' && grid[1][0]=='X' && grid[2][0]=='X' || grid[0][0]=='O' && grid[1][0]=='O' && grid[2][0]=='O'||
   grid[0][0]=='X' && grid[1][1]=='X' && grid[2][2]=='X' || grid[0][0]=='O' && grid[1][1]=='O' && grid[2][2]=='O'||
   grid[0][1]=='X' && grid[1][1]=='X' && grid[2][1]=='X' || grid[0][1]=='O' && grid[1][1]=='O' && grid[2][1]=='O'||
   grid[0][2]=='X' && grid[1][2]=='X' && grid[2][2]=='X' || grid[0][2]=='O' && grid[1][2]=='O' && grid[2][2]=='O'||
   grid[1][0]=='X' && grid[1][1]=='X' && grid[1][2]=='X' || grid[1][0]=='O' && grid[1][1]=='O' && grid[1][2]=='O'||
   grid[2][0]=='X' && grid[2][1]=='X' && grid[2][2]=='X' || grid[2][0]=='O' && grid[2][1]=='O' && grid[2][2]=='O'||
   grid[0][2]=='X' && grid[1][1]=='X' && grid[2][0]=='X' || grid[0][2]=='O' && grid[1][1]=='O' && grid[2][0]=='O')
{return 1;}
}


