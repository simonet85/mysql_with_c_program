#include<iostream>
#include<string>

using namespace std;

int main(){
    string input;
    int number;
    cout<<"Please enter a number :";
    getline(cin, input);
    number = stoi(input);

    if(number < 10){
        cout << "The number you entered is less than 10!"<<endl;
    }else if( number >10){
         cout << "The number you entered was greater than 10!"<<endl;
    }
    return 0;
}