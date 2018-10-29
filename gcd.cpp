#include<iostream>
using namespace std;
int gcd(int a,int b){
  if(b==0)
    return a;
   return gcd(b,a%b);
}
int main(){
   int a,b;
   cin>>a>>b;
   cout<<"GCD OF "<<a<<" AND "<<b<<" IS "<<gcd(a,b);
   return 0;
}
