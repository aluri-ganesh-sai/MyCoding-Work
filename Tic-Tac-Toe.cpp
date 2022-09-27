#include<iostream>
using namespace std;
char Matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char Player='X';
void Display1(){
    cout<<"Tic-Tac-Toe"<<endl;
    cout<<"Player 1 'X' || Player 2 'O'"<<endl;
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<Matrix[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl<<"Rules for Tic-Tac-Toe:"<<endl;
    cout<<"1. The game is played on a grid that's 3 squares by 3 squares."<<endl;
    cout<<"2. You are 'X', your friend is 'O'. Players take turns putting their marks in empty squares."<<endl;
    cout<<"3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner."<<endl;
    cout<<"4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie."<<endl;
    cout<<endl<<"Let's Play!"<<endl;
}
void Display2(){
    system("cls");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<Matrix[i][j]<<"   ";
        }
        cout<<endl;
    }
}
void Input(){
    int Location;
    cout<<endl<<"Enter a Location: Player "<<Player<<": ";
    cin>>Location;
    if(Location==1)
    {
        if(Matrix[0][0]=='1')
        Matrix[0][0]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else if(Location==2)
    {
        if(Matrix[0][1]=='2')
        Matrix[0][1]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else if(Location==3)
    {
        if(Matrix[0][2]=='3')
        Matrix[0][2]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else if(Location==4)
    {
        if(Matrix[1][0]=='4')
        Matrix[1][0]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else if(Location==5)
    {
        if(Matrix[1][1]=='5')
        Matrix[1][1]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else if(Location==6)
    {
        if(Matrix[1][2]=='6')
        Matrix[1][2]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else if(Location==7)
    {
        if(Matrix[2][0]=='7')
        Matrix[2][0]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else if(Location==8)
    {
        if(Matrix[2][1]=='8')
        Matrix[2][1]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else if(Location==9)
    {
        if(Matrix[2][2]=='9')
        Matrix[2][2]=Player;
        else{
            cout<<"Location is already in use. Try again!"<<endl;
            Input();
        }
    }
    else{
        cout<<"Invalid input. Location should be in range of '1' to '9'."<<endl;
        Input();
    }
     
}
void ChangePlayer(){
    if(Player=='X')
    Player='O';
    else
    Player='X';
}
char Win(){
    //for Player 'X'
    if(Matrix[0][0]=='X' && Matrix[0][1]=='X' && Matrix[0][2]=='X')
    return 'X';
    else if(Matrix[1][0]=='X' && Matrix[1][1]=='X' && Matrix[1][2]=='X')
    return 'X';
    else if(Matrix[2][0]=='X' && Matrix[2][1]=='X' && Matrix[2][2]=='X')
    return 'X';
    else if(Matrix[0][0]=='X' && Matrix[1][0]=='X' && Matrix[2][0]=='X')
    return 'X';
    else if(Matrix[0][1]=='X' && Matrix[1][1]=='X' && Matrix[2][1]=='X')
    return 'X';
    else if(Matrix[0][2]=='X' && Matrix[1][2]=='X' && Matrix[2][2]=='X')
    return 'X';
    else if(Matrix[0][0]=='X' && Matrix[1][1]=='X' && Matrix[2][2]=='X')
    return 'X';
    else if(Matrix[2][0]=='X' && Matrix[1][1]=='X' && Matrix[0][2]=='X')
    return 'X';
    //for Player 'O'
    if(Matrix[0][0]=='O' && Matrix[0][1]=='O' && Matrix[0][2]=='O')
    return 'O';
    else if(Matrix[1][0]=='O' && Matrix[1][1]=='O' && Matrix[1][2]=='O')
    return 'O';
    else if(Matrix[2][0]=='O' && Matrix[2][1]=='O' && Matrix[2][2]=='O')
    return 'O';
    else if(Matrix[0][0]=='O' && Matrix[1][0]=='O' && Matrix[2][0]=='O')
    return 'O';
    else if(Matrix[0][1]=='O' && Matrix[1][1]=='O' && Matrix[2][1]=='O')
    return 'O';
    else if(Matrix[0][2]=='O' && Matrix[1][2]=='O' && Matrix[2][2]=='O')
    return 'O';
    else if(Matrix[0][0]=='O' && Matrix[1][1]=='O' && Matrix[2][2]=='O')
    return 'O';
    else if(Matrix[2][0]=='O' && Matrix[1][1]=='O' && Matrix[0][2]=='O')
    return 'O';
    return '/';
}
int main(){
    int count=0;
    Display1();
    while(1){
        count++;
        Input();
        Display2();
        if(Win()=='X'){
            cout<<endl<<"Player 'X' Won!"<<endl;
            break;
        }
        else if(Win()=='O'){
            cout<<endl<<"Player 'O' Won!"<<endl;
            break;
        }
        else if(Win()=='/' && count==9){
            cout<<endl<<"It's a Draw!"<<endl;
            break;
        }
        ChangePlayer();
    }
    return 0;
}