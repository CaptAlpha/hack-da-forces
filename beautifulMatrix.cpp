/*When I coded this, only God and I understand what I was doing
Now only God knows
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int r = 0; int c = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                r = i;
                c = j;
            }
        }
    }
    int ans;
    ans = abs(2-r)+abs(2-c);
    cout<<ans<<endl; 



    return 0;
}