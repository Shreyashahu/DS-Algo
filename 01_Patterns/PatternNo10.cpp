#include<iostream>
using namespace std;

void print(int N){
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout<<"* ";
        } cout<<endl;
    }

    for(int i = N - 1; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout<<"* ";
        } cout<<endl;
    }
}

int main(){
    int N = 5;
    print(N);
    return 0;
}