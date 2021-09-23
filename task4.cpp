#include<iostream>

using namespace std;

int main()
{
     int n;
     int arr[n];
     cout<<"Enter the number of array elements : ";
     cin>>n;
     
     cout<<"Enter the array elements : ";

     for(int i=0; i<n; i++)
     {
         cin>>arr[i];
     }

     int *p;
     p = arr;
     
     cout<<"The elements you entered are : ";
     
     for(int i=0; i<n; i++){
         cout<< *p <<" ";
         p++;
     }
     return 0;
}