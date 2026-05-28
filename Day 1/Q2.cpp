//wap  to print table of n

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i,T;
    cout<<"enter number";
    cin>>n;
     for (i=1;i<=10;i++){
        T=n*i ;
       //cout<<"%d x %d = %d\n"<< n,i,T;
       //cout<<"n x i = T",n,i,T;
       //cout<<"<<n x <<i = <<T\n",n,i,T;
       cout <<n<< "x" <<i<< '=' <<T<<'\n';//n,i,T;     
    }
     return 0;
}
