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
    cout<<"Grade            : ";
    if(per>=95)
    {
        cout<<"O+"<<endl;
        cout<<"performance       : excellent";
    }
    else if(per>=90&&per<95)
    {
        cout<<"A+"<<endl;
        cout<<"performance       : excellent";
    }

    else if(per>=80&&per<90)
    {
        cout<<"A"<<endl;
        cout<<"performance       : very good";
    }

    else if(per>=60&&per<80)
    {
        cout<<"B"<<endl;
        cout<<"performance       : good";
    }

    else if(per>=33&&per<60)
    {
        cout<<"C"<<endl;
        cout<<"performance       : Bad";
    }

    else if(per>=0&&per<33)
    {
        cout<<"D"<<endl;
        cout<<"performance       : very Poor";
    }
    cout<<"-----------------------------------------"<<endl;
    return 0;
}
