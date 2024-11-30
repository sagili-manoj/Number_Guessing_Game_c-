#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int level;
    int chances;
    char again;
    bool flag=true;
    cout<<"*************Welcome to the Number Gusseing Game*************"<<endl;

    cout<<"You can have your chances according to your selection Level"<<endl;
    cout<<endl;
    while(flag){
        cout<<"Please Select the Difficult Level"<<endl;
        cout<<"1. Easy (10 chances)"<<endl;
        cout<<"2. Medium (5 chances)"<<endl;
        cout<<"3. Hard (3 chances)"<<endl;
        cout<<endl;
        cout<<"Enter Your Choice : ";
        cin>>level;
        cout<<endl;
        srand(time(0));
        int randomNumber = rand() % 100 + 1;
        if(level==1){
            chances=10;
            cout<<"Great You have selected Easy difficult level.";
        }
        else if(level==2){
            chances=5;
            cout<<"Great You have selected Medium difficult level.";
        }
        else if(level==3){
            chances=3;
            cout<<"Great You have selected Hard difficult level.";
        }
        else{
            cout<<"You have selected a different option By default we     provide Easy difficult level.";
            chances=10;
        }
        cout<<endl;
        cout<<"Let's start the Game"<<endl;
        int n=0;
        while(chances>0){
            n++;
            int value;
            cout<<"Enter Your Guess : ";
            cin>>value;
            chances--;
            if(value==randomNumber){
                cout<<"Congratulations You have Guessed the correct     number in "<<n<<" attempts"<<endl;
                cout<<"Do you want to play Again"<<endl;
                cout<<"Enter Y/y to play Again or any other to exit:"    ;
                cin>>again;
                if(again!='Y' || again!='y'){
                    flag=false;
                }
                cout<<endl;
                break;
            }
            else if(value<randomNumber){
               cout<< "Incorrect! The number is greater than "<<value <<endl;
               cout<<endl;
            }
            else{
                cout<<"Incorrect! The number is less than "<<value    <<endl;
                cout<<endl;
            }
            
        }
        cout<<"!!You Lost the Game but Keep trying!!"<<endl;
        cout<<endl;
        cout<<"Do you want to play Again "<<endl;
        cout<<"Enter Y/y to play Again or any other to exit:";
        cin>>again;
        if(again=='Y' || again=='y'){
            flag=true;
        }
        else{
            flag=false;
        }
        cout<<endl;
    }
    
    cout<<"You have exited the Game"<<endl;
    return 0;
}  
