#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j==n+1)
               cout<<"* ";
            else cout<<" ";
        }
        
        for(int j=1;j<=n;j++){
            if(i==j+1)
               cout<<"* ";
            else cout<<" ";
        }
        cout<<endl;
    }
    n--;
    for(int i=1;i<=n;i++){
        cout<<" ";
        for(int j=1;j<=n;j++){
            if(i==j)
               cout<<"* ";
            else cout<<" ";
        }
        for(int j=1;j<=n-1;j++){
            if(i+j==n)
               cout<<"* ";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;

    
}    


