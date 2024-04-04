#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    if(n%2==0){
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    else if(n%2==1){
        for(int i=1;i<=n;i++){
            if(i%2==1){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}