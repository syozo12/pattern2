#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter number of rouws";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<i;
    }
    for(int i=n-1;i>0;i--){
        cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<j;
        for(int j=1;j<=2*i-1;j++)
            cout<<" ";
        for(int j=n-i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
