#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int x=n;
    int y=m;
    while(m!=0){
        int a=n%m;
        n=m;
        m=a;
    }
    int result=(x*y)/n;
    cout<<result;
    return 0;
}