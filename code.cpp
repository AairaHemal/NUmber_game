#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int max, min;
    int guesses=1;
    cout<<endl;
    cout<<"------WELCOME TO THE NUMBER GUESSING GAME------"<<endl<<endl;
    cout << "Enter the range for the number:" << endl;
    cin >> min >> max;
    srand(time(0));
    int num = rand() % (max+min-1) + min;
    cout<<endl<<"You have three guesses.."<<endl<<endl;
    int unum;
    int c;
    while(guesses<=3)
    {
        cout<<"THIS IS YOUR GUESS NUMBER "<<guesses<<endl;
        cin>>c;
        unum=c;
        if(unum==num){
        cout<<endl<<"CONGRATULATIONS YOU WON !!!! :)"<<endl;
        break;
        }
        else if(unum>num)
        {
            cout<<endl<<"TRY GUESSING SMALLER NUMBER"<<endl;
        }
        else{
            cout<<endl<<"TRY GUESSING A LARGER NUMBER"<<endl;
        }
        guesses++;
        

    }
    if(guesses>3){
    cout<<endl;
    cout<<"YOU FAILED :("<<endl;
    }
    return 0;
}
