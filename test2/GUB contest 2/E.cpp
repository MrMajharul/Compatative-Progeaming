#include <iostream>
using namespace std;

int main()
{

 int n,x;
    cin >> n;
    int positive = 0, negative = 0;
    for(int i =0; i<n; i++){
        cin >> x;
        if(x>0){
            positive++;
        }
        else if(x==0)
        {

        }
        else{
            negative++;
        }
    }
    
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;


}

/*
D.py

n = int(input()) 
numbers = list(map(int, input().split())) 

minimum = min(numbers)
maximum = max(numbers)

print(maximum, minimum)
*/