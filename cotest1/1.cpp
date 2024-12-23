#include<iostream>
using namespace std;
int main(){
    int A,B,C,D,n;

    cin>> A >>B >>C >> D;
    
   for(n=1;n<=5;n++)
   {
    if(n!=A && n!=B && n!=C && n!=D)
    cout <<n;
   } 
}
