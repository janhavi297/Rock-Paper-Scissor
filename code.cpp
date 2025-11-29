#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string computer_choice(){
    //this function is to get the computer's choice
    
    int c = rand() % 3; //c for choice
    
    switch(c){
        case 0 :
        return "rock";
        
        case 1 :
        return "paper";
        
        case 2 :
        return "scissor";
        
        default :
        return "error in computer's choice";
    }
}

int main (){
    srand(time(0));
    
    //user's choice
    string user_choice;
    cout << "welcome to the rock paper scissor made by janhavi :)" <<endl;
    cout << "enter your choice : ";
    cin >> user_choice;
    
    if(user_choice=="rock" || user_choice=="paper" || user_choice=="scissor"){   
    }
    else {
        cout << "error in user's choice";
        return 1;
    }
    
    //computer's choice
    string c_choice = computer_choice();
    cout << "computer's choice : " << c_choice <<endl;
    
    if (c_choice==user_choice)
        cout << "it's a tie :|";
    else if ((user_choice=="rock" && c_choice=="scissor") || (user_choice=="paper" && c_choice=="rock") || (user_choice=="scissor" && c_choice=="paper"))
        cout << "you win :)";
    else
        cout << "you lose :(";
    
    return 0;
}