#include<iostream>
using namespace std;

void print(int N){
    for(int i = N; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int N = 5;
    print(N);
}