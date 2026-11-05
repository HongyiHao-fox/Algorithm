#include <iostream>
#include <string>

int main(){
    int time;
    std::cin >> time;
    int x,y;
    while (time--){
        std::string player1choice,player2choice;
        std::cin>>player1choice>>player2choice;
        
        if(player1choice=="Hunter") x=0;
        if(player1choice=="Bear") x=1;
        if(player1choice=="Gun") x=2;
        if(player2choice=="Hunter") y=0;
        if(player2choice=="Bear") y=1;
        if(player2choice=="Gun") y=2;
        if (x==y) std::cout<<"Tie"<<std::endl;
    else if(x==(y+1)%3) std::cout<<"Player1"<<std::endl;
    else std::cout<<"Player2"<<std::endl;
    }
    
    return 0;
}