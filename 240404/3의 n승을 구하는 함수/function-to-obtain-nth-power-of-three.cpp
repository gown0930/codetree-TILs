#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int num=1;
    for(int i=0;i<n;i++){
        num*=3;
    }
    cout<<num<<endl;
    return 0;
}