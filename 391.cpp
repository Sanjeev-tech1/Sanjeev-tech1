#include<iostream>
using namespace std;
  
int main () {
    int n=9;
    int px=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==px || j==n-px+1)
            cout<<"* ";
            else
            cout<<" ";

        }
        if(i<=n/2)
        px--;
        else
        px++;
        cout<<endl;
    }
  
  
return 0;
}