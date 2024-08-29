#include<iostream>
#include<map>
#include<string>

using namespace std;

void database(int n){
    map<string, int> m;
    string str;

    while (n--)
    {
        cin>>str;

        if(m.count(str) == 0){
            cout<<"OK"<<endl;
            m[str] =1;
        }
        else{
            cout<<str<<m[str]<<endl;
            m[str] += 1;
        }

    }
}

int main(){
    
    int n;

    cin>>n;
    database(n);
    
    return 0;
}