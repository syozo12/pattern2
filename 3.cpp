#include<iostream>
using namespace std;
int main(){

int n;
    cout<<"enter number of rouws";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<"  ";
        for(int j=i;j>0;j--){
            cout<<char(j+64);
            cout<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<char(j+64);
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
