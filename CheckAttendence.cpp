#include<iostream>
using namespace std;

int main()
{

    float attendence, total , percentage;

    cout<<"Enter the number of classes attended by students "<<endl;
    cin>>attendence;

    cout<<"Total Classes "<<endl;
    cin>>total;

    percentage = attendence/total*100;

    if(percentage<75)

        cout<<"You are not elligibile to sit in exam "<<endl;

    else
        cout<<"You can sit in exam "<<endl;
return 0;
}
