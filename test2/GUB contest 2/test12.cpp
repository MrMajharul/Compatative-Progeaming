#include<iostream>
using namespace std;
int main(){
    int n,temp;
    
    cin>> n;
    while(1){
        int num=n;int sum =0;
        while(num>0){
    temp = num%10;
    sum= sum+temp;
    num=num/10;
    }
    if(sum%4==0)
    {
        break;
    }
    n++;
   

   }
   
    cout<<n << endl;
}