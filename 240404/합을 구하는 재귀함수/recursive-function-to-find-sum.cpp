#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    if(n%2==0){
        int num=0;
        for(int i=n;i<=100;i++){
            if(i%2==0){
                num+=i;
            }
        }
        cout<<num;
    }
    else if(n%2==1){
        int num=0;
        for(int i=n;i<=100;i++){
            if(i%2==1){
                num+=i;
            }
        }
        cout<<num;
    }
    return 0;
}