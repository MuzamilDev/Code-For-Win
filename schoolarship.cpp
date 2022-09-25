#include<iostream>
using namespace std;

int main()
{
    int term1, term2, term3, term4;

     cout<<"Enter Number of 1st Term "<<endl;
     cin>>term1;
     cout<<"Enter Number in 2nd Term "<<endl;
     cin>>term2;
     cout<<"Enter Number of 3rd Term :"<<endl;
    cin>>term3;
     cout<<"Enter Number of 4th Term "<<endl;
     cin>>term4;

        if(term1<75 || term2<75 || term3<75 ||term4<75)
        cout<<"You are Not Eligible "<<endl;
     else
        cout<<"You are Eligible "<<endl;

     return 0;

}
