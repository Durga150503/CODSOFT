#include<iostream>
#include<ctime>
using namespace std;
int main() {
        int x,guess_num;
        x=1+(rand()%100);
        cout << "\t\t\tWELCOME TO GUESS NUMBER GAME\n\n";
        do{
            cout << "Enter the guess num between 1 to 100:";
            cin >> guess_num;
            if(x<guess_num){
                cout << "the guess num is too high"<<endl;
            }
                else if(x>guess_num){
                    cout << "the guess number is too low"<<endl;
                }
                else{
                cout << "your guess num is match"<<endl;
                }
        }while(x!=guess_num);
        return 0;
}