
#include<iostream>
using namespace std;
void armstrong_number(int n){
    
    for(int i=1;i<n;i++){
        int originalNum=i;
        int remainder,result=0;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }
        if (result == i)
            cout << i <<" ";
    }
}
int main ()
{
    int n;
    cout<<"enter the value n";
    cin>>n;
    armstrong_number(n);
    return 0;
}