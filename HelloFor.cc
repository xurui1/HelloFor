// HelloFor.cc

#include <iostream>

using namespace std;

int main (){
    int x;
    int y;
    cout<< "Enter the number of loops you wish to run"<< endl;
    cin>> x;
    cout<< "Enter your lucky number"<< endl;
    cin>> y;
    
    for (int i=1; i<=x; i++){
        cout << i << "hello world\n" << endl;
        if (i ==y) {
            cout << "that was lucky\n" << endl;}
        else {
            cout << endl;
        }
    }
}