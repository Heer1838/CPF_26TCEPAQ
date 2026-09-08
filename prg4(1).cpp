#include<iostream>
using namespace std;
int main()
{
    int total;
    float avg,per;
    cout<<"**********************************************"<<endl;
    cout<<"  * ACEDEMIC SUMMARY"<<endl;
    cout<<"**********************************************" <<endl <<endl;
    cout<<"Total marks      : ";
    cin>>total;
    avg=total/3;
    per=avg;
    cout<<"Average Marks    : "<<avg<<endl;
    cout<<"percentage       : "<<per<<"%"<<endl;
    cout<<"**********************************************"<<endl;
    cout<<"  * Acedemic result"<<endl;
    cout<<"**********************************************" <<endl <<endl;
    cout<<"Result           : ";
    if(per>33)
    {
    cout<<"pass"<<endl;
    cout<<"congratulation you have successfully passed"<<endl;
    }else
    {
    cout<<"fail"<<endl;
    cout<<"better luck next time"<<endl;
    }

    cout<<"-----------------------------------------"<<endl;
    return 0;
}
