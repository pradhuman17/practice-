#include<bits\stdc++.h>
using namespace std;

int main ()
{
    cout<<"hello world";
    
    int amount1;
    cin>>amount1;

    int amount2;
    cin>>amount2;


    int sum=amount1+amount2;
    cout<<sum;


int n;
 cout << "Enter a positive integer: ";
 cin >> n;
 for (int i = 1; i <= 10; ++i)
  {
 cout << n << " * " << i << " = " << n * i << endl;
  }
  
  int z;
  cout<< "Enter a number:";
  cin>> z;
    int i;
    for(i=2;i<=z;++i)
    {
        if (z%i==0)
        {
            cout<< "the number is non prime"<<endl;
            break;
        }
    }
    if (i==z){
        cout<<"the entered number is prime";
    }


    return 0;
}  
