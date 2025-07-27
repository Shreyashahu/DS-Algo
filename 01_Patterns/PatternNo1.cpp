#include<iostream>
using namespace std;

void print(int N){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int N = 5;
    print(N);
    return 0;
}


OUTPUT -
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
