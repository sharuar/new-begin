#include<iostream>
using namespace std;

int main(){
    int n, ans[5], result = 0;

    cin>>n;

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<3; j++){
            cin>>ans[j];
            
            if(ans[j] == 1)
                count++;
        }

        if(count>1)
            result++;
    }

    cout<<result<<endl;

    return 0;
}