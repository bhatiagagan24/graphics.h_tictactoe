#include<iostream>
#include<graphics.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<unistd.h>

#define total_pt_player1
#define total_pt_player2

// it will be changed to 1 for player 1 and 2 for player 2


using namespace std;

void ticktacktoe_maker();
void game_player();
void making_board();
void initial_screen()
{
char msg1[] = "Enter no of checkbox to place a cross there";
outtext(msg1);
usleep(10);
//outtext('Press any key to continue');
char msg2[] = "Multiplayer tick tack toe game";
outtextxy(0, 150, msg2);
}
void making_board()
{
cleardevice();
line(0,100,300,100);
line(0,200,300,200);
line(100,0,100,300);
line(200,0,200,300);
char pos1[] = "1"; char pos2[] = "2"; char pos3[] = "3";
char pos4[] = "4"; char pos5[] = "5"; char pos6[] = "6";
char pos7[] = "7"; char pos8[] = "8"; char pos9[] = "9";
outtextxy(1,1,pos1);
outtextxy(102,0,pos2);
outtextxy(202,0,pos3);
outtextxy(1,102,pos4);
outtextxy(102,102,pos5);
outtextxy(202,102,pos6);
outtextxy(0,202,pos7);
outtextxy(102,202,pos8);
outtextxy(202,202,pos9);
//game_player();
}




class action_tracker
{
    public:
    int column;
    int row;
    int played_number;
    int placement_table[][3] ;
    action_tracker()
    {
    int placement_table[][3] = {{0,0,0},{0,0,0},{0,0,0}};
    }
    void game_player(int random)
    {
        if(played_number == 1)
        {
            row = 0;
            column = 0;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
        if(played_number == 2)
        {
            row = 0;
            column = 1;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
        if(played_number == 3)
        {
            row = 0;
            column = 2;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
        if(played_number == 4)
        {
            row = 1;
            column = 0;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
        if(played_number == 5)
        {
            row = 1;
            column = 1;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
        if(played_number == 6)
        {
            row = 1;
            column = 2;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
        if(played_number == 7)
        {
            row = 2;
            column = 0;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
        if(played_number == 8)
        {
            row = 2;
            column = 1;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
        if(played_number == 9)
        {
            row = 2;
            column = 2;
            cout<<endl<<row<<" "<<column<<endl;
            if(random == 1){
            placement_table[row][column] = 1;
            }
            else
            {
                placement_table[row][column] = 2;
            }
        }
    }

    void display_matrix()
    {
        for(int i=0; i<3;i++)
        {
            for(int j=0; j<3; j++)
            {
                if(placement_table[row][column] != 0)
                {
                    cout<<"x";
                }
                cout<<" ";
            }
            cout<<endl;
        }
    }

} ;

int main()
{
    // The player with bool 0 will make the move
    bool player_one = 0;
    bool player_two = 1;
    //action_tracker p1;
    //action_tracker p2;

    int played_matrix[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int chances = 0;
    initwindow(300,300,"Tick Tack Toe");
    initial_screen();
    int m = getch();
    if(kbhit)
        making_board();
    // now i will take input from users until the board is filled or the game is won
    while(chances<=8)
    {
        char pl1[] = "X";
        char pl2[] = "0";
        int key_played;
        key_played = getch();
        if(player_one == 0){
        if (key_played == '1'){
            cout<<"Played in block 1"<<endl;
            played_matrix[0][0] = 1;
            outtextxy(10,10,pl1);}
        if (key_played == '2'){
            cout<<"Played in block 2"<<endl;
            played_matrix[0][1] = 1;
            outtextxy(110,10,pl1);}
        if (key_played == '3'){
            cout<<"Played in block 3"<<endl;
            played_matrix[0][2] = 1;
            outtextxy(210,10,pl1);}
        if (key_played == '4'){
            cout<<"Played in block 4"<<endl;
            played_matrix[1][0] = 1;
            outtextxy(10,110,pl1);}
        if (key_played == '5'){
            cout<<"Played in block 5"<<endl;
            played_matrix[1][1] = 1;
            outtextxy(110,110,pl1);}
        if (key_played == '6'){
            cout<<"Played in block 6"<<endl;
            played_matrix[1][2] = 1;
            outtextxy(210,110,pl1);}
        if (key_played == '7'){
            cout<<"Played in block 7"<<endl;
            played_matrix[2][0] = 1;
            outtextxy(10,210,pl1);}
        if (key_played == '8'){
            cout<<"Played in block 8"<<endl;
            played_matrix[2][1] = 1;
            outtextxy(110,210,pl1);}
        if (key_played == '9'){
            cout<<"Played in block 9"<<endl;
            played_matrix[2][2] = 1;
            outtextxy(210,210,pl1);}
        cout<<endl;
        player_one = 1;
        player_two = 0;
        chances++;
        //p1.played_number = key_played;
        //p1.game_player(1);
        continue;
    }
   int flag = 0;
    for(int i=0; i<3; i++)
    {
        int j=0;
        // this means that the row has all one elements
        if((played_matrix[i][j] == 1) && (played_matrix[i][j+1] == 1) && (played_matrix[i][j+2] == 1))
        {
            cleardevice();
            char msg10[] = "player 1 won";
            outtext(msg10);
            usleep(100);
            break;
        }
        else if((played_matrix[j][i] == 1) && (played_matrix[j+1][i] == 1) && (played_matrix[j+2][i] == 1))
        {
            cleardevice();
            char msg10[] = "player 1 won";
            outtext(msg10);
            usleep(100);
            break;
        }
    }

    // rd: row diagonal and cd :column diagonal  :p
    // I'll be checking here when diagonal elements become same
    int rd = 0; int cd = 0;
    if((played_matrix[rd][cd]==1) && (played_matrix[rd+1][cd+1]==1) && (played_matrix[rd+2][cd+2]==1))
    {
        cleardevice();
            char msg10[] = "player 1 won";
            outtext(msg10);
            usleep(100);
            break;
    }
    else if((played_matrix[rd][cd+2]==1) && (played_matrix[rd+1][cd+1]==1) && (played_matrix[rd+2][cd]==1))
    {
        cleardevice();
            char msg10[] = "player 1 won";
            outtext(msg10);
            usleep(100);
            break;
    }

    if(player_two == 0){
        if (key_played == '1'){
            played_matrix[0][0] = 2;
            outtextxy(10,10,pl2);
            cout<<"Played by 2 in block 1"<<endl;}
        if (key_played == '2'){
            outtextxy(110,10,pl2);
            played_matrix[0][1] = 2;
            cout<<"Played by 2 in block 2"<<endl;}
        if (key_played == '3'){
            outtextxy(210,10,pl2);
            played_matrix[0][2] = 2;
            cout<<"Played by 2 in block 3"<<endl;}
        if (key_played == '4'){
            outtextxy(10,110,pl2);
            played_matrix[1][0] = 2;
            cout<<"Played by 2 in block 4"<<endl;}
        if (key_played == '5'){
            outtextxy(110,110,pl2);
            played_matrix[1][1] = 2;
            cout<<"Played by 2 in block 5"<<endl;}
        if (key_played == '6'){
            outtextxy(210,110,pl2);
            played_matrix[1][2] = 2;
            cout<<"Played by 2 in block 6"<<endl;}
        if (key_played == '7'){
            outtextxy(10,210,pl2);
            played_matrix[2][0] = 2;
            cout<<"Played by 2 in block 7"<<endl;}
        if (key_played == '8'){
            outtextxy(110,210,pl2);
            played_matrix[2][1] = 2;
            cout<<"Played by 2 in block 8"<<endl;}
        if (key_played == '9'){
            outtextxy(210,210,pl2);
            played_matrix[2][2] = 2;
            cout<<"Played by 2 in block 9"<<endl;}
        cout<<endl;
        player_one = 0;
        player_two = 1;
        chances++;
        //p2.played_number = key_played;
        //p2.game_player(2);
        continue;
    }
    for(int i=0; i<3; i++)
    {
        int j=0;
        // this means that the row has all zero elements
        if((played_matrix[i][j] == 2) && (played_matrix[i][j+1] == 2) && (played_matrix[i][j+2] == 2))
        {
            cleardevice();
            char msg11[] = "player 2 won";
            outtext(msg11);
            usleep(100);
            break;
        }
        else if((played_matrix[j][i] == 2) && (played_matrix[j+1][i] == 2) && (played_matrix[j+2][i] == 2))
        {
            cleardevice();
            char msg11[] = "player 2 won";
            outtext(msg11);
            usleep(100);
            break;
        }
    }

    // rd: row diagonal and cd :column diagonal  :p
    // I'll be checking here when diagonal elements become same
    int rd1 = 0; int cd1 = 0;
    if((played_matrix[rd1][cd1]==2) && (played_matrix[rd1+1][cd1+1]==2) && (played_matrix[rd1+2][cd1+2]==2))
    {
        cleardevice();
            char msg11[] = "player 2 won";
            outtext(msg11);
            usleep(100);
            break;
    }
    else if((played_matrix[rd1][cd1+2]==2) && (played_matrix[rd1+1][cd1+1]==2) && (played_matrix[rd1+2][cd1]==2))
    {
        cleardevice();
            char msg11[] = "player 2 won";
            outtext(msg11);
            usleep(100);
            break;
    }
    }
    cout<<endl;
//    p1.display_matrix();
  //  p2.display_matrix();
  for(int i=0; i<3; i++)
  {
      for(int j=0; j<3; j++)
      {
          cout<<played_matrix[i][j]<<" ";
      }
      cout<<endl;
  }
    getch();
    closegraph();
    return 0;
}































/*
void game_player(int played_number, int player_number)
{
// player_number is 1 for player one and 2 for player_two
// played number is the number pressed by player 1 and 2
// This function checks if the ticktacktoe board number pressed by the player is occupied or not.
// It places 1 in matrix for user1 and 2 in marix for user2.
//int column = 0;
//int row = 0;
if(player_number==1)
{
    if(played_number>3)
    {
        if(played_number<=6)
        {
            column = played_number - 3;
            row = 1;
            cout<<endl<<column<<" "<<row;
        }
        else if(played_number>6)
        {
            column = played_number - 6;
            row = 2;
            cout<<endl<<column<<" "<<row;
        }
    }
    else if(played_number<=3)
    {
        column = played_number;
        row = 0;
        cout<<endl<<column<<" "<<row;
    }
    placement_table[row][column-1] = 1;
    //ticktacktoe_maker();
}
if(player_number==2)
{
    if(played_number>3)
    {
        if(played_number<=6)
        {
            column = played_number - 3;
            row = 1;
            cout<<endl<<column<<" "<<row;
        }
        else if(played_number>6)
        {
            column = played_number - 6;
            row = 2;
            cout<<endl<<column<<" "<<row;
        }
    }
    else if(played_number<=3)
    {
        column = column = played_number;
        row = 0;
        cout<<endl<<column<<" "<<row;
    }
    placement_table[row][column-1] = 2;
    ticktacktoe_maker();
}
}

void ticktacktoe_maker()
{
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            if(placement_table[i][j] == '1')
                cout<<"row no: "<<i<<" column no: "<<j<<" is 1";
            else if(placement_table[i][j] == '2')
                cout<<"row no: "<<i<<" column no: "<<j<<" is 2";
        }
    }
}
*/
