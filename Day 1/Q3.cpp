/*//wap to find factorial of a number

#include<std/bitsc++.h>

int main(){
int fact=1
for (i=1,i<=n,i++){
    fact=fact*i
}
cout<<fact;
return 0;
}*/


//wap to find factorial of a number

//#include<std/bitsc++.h> chutiye galat h 
#include<bits/stdc++.h>
using namespace std;

int main(){
int fact=1,i,n; // chutiye dont forget colon , miss variable
//cout<< enter the number ;  //syntax wrong ,doublè quotes
//cout<<'enter the number' ; //syntax wrong
cout<< "enter the number" ;
cin>>n;
//for (i=1,i<=n,i++){ //wrong syntax
 for(i=1;i<=n;i++){
    fact=fact*i;    //dont forget colon
}
cout<<fact;
return 0;
}
