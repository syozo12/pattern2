#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    int nsp=2*n-3;
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--)
            cout<<"* ";
        for(int j=1;j<=nsp;j++)
            cout<<"  ";
        for(int j=i;j>0;j--){
            cout<<"* ";
        }
        nsp-=2;
        cout<<endl;
    }
    for(int i=2*n-1;i>0;i--){
        cout<<"* ";
    }
    cout<<endl;
    
    for(int i=2*n-1;i>0;i--){
        cout<<"* ";
    }
    cout<<endl;

    for(int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<"* ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"  ";
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
    

    
    
    
