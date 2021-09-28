#include<iostream>
using namespace std;

bool checkprime(int x)
{
    int i;
    bool isprime = true;
    if(x==0 || x==1)
    {
        isprime = false;
    }
    for(i=2; i<x; i++)
    {
        if(x%i == 0)
        {
            isprime = false;
            break;
        }
    }
    return isprime;
}

int main()
{
    int n,i;
    bool flag = false;

    cout<<"Enter the number : ";
    cin>>n;

    for(i=2; i<n; i++)
    {
        if(checkprime(i))
        {
            if(checkprime(n-i))
            {
                cout<<n<<" = "<<i<<" + "<<n-i<<"\n";
                flag = true;
            }
        }
        
    }
    
    if(!flag)
        {
            cout<<n<<" can't be expressed as sum of prime numbers.";
        }
   
    return 0;
}