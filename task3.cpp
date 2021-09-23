#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter the age of the citizen : ";
    cin>>age;

    if(age>=18){
        cout<<"Citizen is eligible for voting.";
    }
    else{
        cout<<"Citizen is not eligible for voting. Try again in "<<18-age<<" years.";
    }
    return 0;
}