#include<iostream>
#include<stdlib.h>
#define ROW_COUNT 3
using namespace std;
char board [3][3]={{'1','2','3'},{'4','5','6',},{'7','8','9'}};
int row,coloum=0;
char turn='X';
bool draw=false;
bool gameover()
{
 for(int row=0;row<ROW_COUNT;row++)
 if((board[row][0]==board[row][1]&&board[row][0]==board[row][2])||
 (board[0][row]==board[1][row]&&board[0][row]==board[2][row]))
 return false;
 else if((board[0][0]==board[1][1]&&board[0][0]==board[2][2])||
 (board[0][2]==board[1][1]&&board[0][2]==board[2][0]))
 return false;
 for (int row=0;row<ROW_COUNT;row++)
 for(int col=0;col<ROW_COUNT;col++)
 if(board[row][coloum]!='X'&&board[row][coloum]!='O')
 return true;
 draw=true;
 return false;
}
 void playerturn()
 {
     if(turn=='X'){
     cout<<"\n\t player-1[X]turn:";
     }
     else(turn=='O');
     {
     cout<<"\n\t player-2 with[O]turn:";
     }
     int choice=0;
     cin>>choice;
     switch(choice)
     {
         case 1:
         row=0;
         coloum=0;
         break;
         case 2:
         row=0;
         coloum=1;
         break;
         case 3:
         row=0;
         coloum=2;
         break;
         case 4:
         row=1;
         coloum=0;
         break;
         case 5:
         row=1;
         coloum=1;
         break;
         case 6:
         row=1;
         coloum=2;
         break;
         case 7:
         row=2;
         coloum=0;
         break;
         case 8:
         row=2;
         coloum=1;
         break;
         case 9:
         row=2;
         coloum=2;
         break;
        }
     if(turn=='X'&&board[row][coloum]!='X'&&board[row][coloum]!='O'){
     board[row][coloum]='X';
     turn='O';
     }
     else if(turn=='O'&&board[row][coloum]!='X'&&board[row][coloum]!='O'){
     board[row][coloum]='O';
     turn='X';
     }
     else
     {
         cout<<"Box already filledin please choose another !!\n\n";
         playerturn();
     }
 }
     void displayboard()
     {
         system("cls");
         cout<< "player-1[x]\t player-2[o]\n";
         cout<<"\t\t     |     |     \n";
         cout<<"\t\t  "  << board[0][0]<<"  |  "<< board[0][1] << "  |  " << board[0][2] << endl;
         cout<<"\t\t_____|_____|_____\n";
         cout<<"\t\t     |     |     \n";
         cout<<"\t\t  "  << board[1][0]<<"  |  "<< board[1][1] << "  |  " << board[1][2] << endl;
         cout<<"\t\t_____|_____|_____\n";
         cout<<"\t\t     |     |     \n";
         cout<<"\t\t  "  << board[2][0]<<"  |  "<< board[2][1] << "  |  " << board[2][2] << endl;
         cout<<"\t\t     |     |     \n";
     }
     int main()
       {
         while(gameover())
         {
             cout<<"WELCOME TO TIC TAC TOE!\n\n";
             displayboard();
             playerturn();
             gameover();
         }
         if(turn=='X'&& draw==false)
         cout<<"\n\t Congratulations!! player 1 X has won\t\n";
         else if(turn=='O'&& draw==false)
         cout<<"\n\t Congratulations!! player 2 O has won\t\n";
         else
         cout<<"\n\t Game ended in DRAW!!\n\t";
         return 0;
        }
