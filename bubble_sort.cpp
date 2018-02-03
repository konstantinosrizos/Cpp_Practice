#include<iostream>

using namespace std;

int main()
{

int max;
int array[9];

cout<<"Enter 9 numbers: "<<endl;

for(int i=0; i<9; i++)
{
    cin>>array[i];
}
cout<<endl;

cout<<"Originally entered array by the user is: "<<endl;

for(int j=0; j<9; j++)
{
    cout<<array[j];
    cout<<endl;
}

cout<<endl;

for(int i=0; i<9; i++)
{
    for(int j=0; j<9; j++)
    {
        if(array[j]>array[j+1])
        {
            max=array[j];
            array[j]=array[j+1];
            array[j+1]=max;
        }
    }
}
cout<<"Sorted Array is: "<<endl;
for(int i=0; i<9; i++)
{
cout<<array[i]<<endl;
}
}
