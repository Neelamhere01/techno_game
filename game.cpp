
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
char getcomputermove (){
    int move;
    srand (time(NULL));
    move =rand()%3;

    if(move ==0){
        return 'p';
    }
    else if(move ==1){
        return 's';
    
    }
    return 'r';

}
int getresults(char playermove, char computermove ){
    if (playermove == computermove){
        return 0;
    }
    if (playermove == 's' && computermove == 'p'){
        return 1;

    }
    if (playermove == 's' && computermove == 'r'){
        return -1;
    }
    if (playermove == 'p' && computermove == 'r'){
        return 1;
    }
    if (playermove == 'p' && computermove == 's'){
        return -1;

    }
    if (playermove == 'r' && computermove == 'p'){
        return -1;
    }
    if (playermove == 'r' && computermove == 's'){
        return 1;
    }
    return 0;

}
int main(){
    cout<<"\n\n\n\n\t\t WELCOME TO STONE PAPER SCISSORS GAME\n";
    cout<<"\n\n\t Enter 'r' for ROCK , 'p' for PAPER, 's' for SCISSOR \n\t\t";
    char playermove;
    while(1){
        cin>>playermove;
        if ( playermove == 'p'|| playermove== 'r'|| playermove=='s'){
            break;

        }
        else{
            cout<<"\t\t\t\t invalid player move!!! please try again "<<endl;

        }
    }
    char computermove = getcomputermove();
    int result =getresults(playermove ,computermove);
    if(result==0){
        cout<<"\n\n\n\t game draw!\n";
    }
     else if(result==1){
        cout<<"\n\t Congratulation! player won the game  !\n";
    }
     else {
        cout<<"\n\t Oh ! Computer won the game !\n";
    }
    cout<<"\t\tYour Move :"<<playermove <<endl;
    cout<<"\t\t Computer's Move: "<< computermove<<endl;
      
    return 0;

}
