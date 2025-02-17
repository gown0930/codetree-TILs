#include <iostream>

using namespace std;

int n, m;

int main() {
    int n;
    int m;
    cin>>n>>m;
    while(m!=0){
        int a=n%m;
        n=m;
        m=a;
    }
    cout<< n;
    return 0;
}