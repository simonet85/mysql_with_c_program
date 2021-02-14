#include<iostream>

using namespace std;
int main(int argc, char *argv[]){
    cout << " There are "<< argc << " parameters " <<endl;
    for(int i = 0 ; 0 < argc; i++){
        cout<< argv[i] <<endl;
    }
}