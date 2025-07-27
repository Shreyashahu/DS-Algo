#include<iostream>
using namespace std;

void print(int N){
    int k = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            cout<<k<<" ";
        }
        cout<<endl;
        k++;
    }
}

int main(){
    int N = 5;
    print(N);
    return 0;
}