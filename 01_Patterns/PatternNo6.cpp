#include<iostream>
using namespace std;

void print(int N){
    int count;
    for(int i = N; i > 0; i--){
        count = 1;
        for(int j = i; j > 0; j--){
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