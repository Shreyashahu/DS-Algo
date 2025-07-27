#include<iostream>
using namespace std;

void print(int N){
    int k;
    for(int i = 1; i < N; i++){
        k = 1;
        for(int j = 1; j <= i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

int main(){
    int N = 5;
    print(N);
    return 0;
}