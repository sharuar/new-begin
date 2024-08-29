#include<iostream>
using namespace std;

int main(){

    int x = 0, n;
    string str;

    cin>>n;
    while(--n){
        cin>>str;

    if(str == "++X")
        ++x;
    else
        --x;
    }
    cout<<x<<endl;    

    return 0;
}