/*#include < std/bitsc++.h >

intmain(){
int

//for (i=1,i<=N)

while (i<=n){
N=N%10
if N!=0
count=count+1

}
cout<<count
return=0
}

///count digit in number
//#include < std/bitsc++.h >
#include<bits/stdc++.h>    //dont miss namespace count std
//namespace countstd
//using namespace countstd
//using namespace std
using namespace std;
//intmain(){
int main(){
int i,N,count=0;
cout<<"enter number";
cin>>N;
//for (i=1,i<=N)

//while (i<=N){
    while (N>0){
N=N%10;             //dont miss sem colon
//if N!=0;           //dont miss syntax of if i.e small bracket
if (N!=0)
count=count+1;

N=N/10;    //digit kam krne k liye

}
cout<<count;
return 0;
}*/






#include<bits/stdc++.h>    
using namespace std;
int main(){
int i,N,N1,count=0;
cout<<"enter number";
cin>>N;
N1=N;
  while (N>0){
N1=N1%10;             
if (N1!=0)
count=count+1;

N=N/10;    //digit kam krne k liye

}
cout<<count;
return 0;
}
