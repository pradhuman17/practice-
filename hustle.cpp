#include<iostream>
using namespace std;

int main()
{
  int savings;
  cin>>savings;

  if (savings>5000){
    cout<<"Neha \n";
  }
  else if (savings>2000){
    cout<<"Tanvi \n";
  }
  else {
    cout<<"Friends \n";
  }

    int n;
    cin>>n;
    
    int sum=0;
    int i;
    for(i=1;n>=i;i++){
        sum=sum+i;
    }
        cout<<sum;
  
  return 0;
}



