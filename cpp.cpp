#include<iostream>
using namespace std;

int main ()
{
    // checking the prime no. b/w two entered no.
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
     
    for (int num=a;num<=b;num++)
    {   
        int i;
        for (i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
   
        if(i==num)
        {
            cout<<num<<endl;
        }    
    }
    return 0;
}