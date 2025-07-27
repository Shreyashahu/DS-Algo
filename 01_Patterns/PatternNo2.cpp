#include<iostream>
using namespace std;

void print(int N){
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int N = 5;
    print(N);
    return 0;
}

Output:
* 
* * 
* * * 
* * * * 
* * * * * 
