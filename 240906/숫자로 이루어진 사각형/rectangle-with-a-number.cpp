#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            if(k>9){
                k=1;
            }
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}