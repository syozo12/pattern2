#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<=n-i;j++)
            cout<<"* ";
        for(int j=2*i-1;j>0;j--){
            cout<<"  ";
        
        }
         for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    int m=n-1;
    int nsp=2*m-1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++)
            cout<<"* ";
        for(int j=nsp;j>0;j--){
            cout<<"  ";
        
        }
         for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        nsp-=2;
        cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++)
        cout<<"* ";
    
        return 0;
}

    