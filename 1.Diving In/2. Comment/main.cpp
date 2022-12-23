#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v;
    vector<int>p;
    v.push_back(2);
    v.push_back(3);
    for(int i =5;i<n;i++){
        int flag{0};
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag =1;
                break;
            }
        }if(flag==0){
            v.push_back(i);
        }       
    }
    for(int i = 2;i<v.size();i++){
        while(n!=0){
            if(n%i==0){
                n /=i;
                p.push_back(i);
            }
            else break;
        }
    }
    for(int i =0;i<p.size();i++)cout<<p[i]<<" ";
    cout<<endl;
}
int main(){
    solve();
    return 0;
}