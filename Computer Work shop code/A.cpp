// Q.7(A)Print the following (pattern based) :
#include<iostream>
using namespace std;
int main(){
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}