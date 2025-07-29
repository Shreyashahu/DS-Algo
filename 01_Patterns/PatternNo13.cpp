#include<iostream>
using namespace std;

void print(int N){
    int count = 1;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout<<count<<" ";
            count++;
        } cout<<endl;
    }
}

int main(){
    int N = 5;
    print(N);
    return 0;
}