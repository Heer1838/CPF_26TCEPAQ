#include<iostream>
#include<cstring>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
 int i,n,scr[5],total,high=0,low=100;
 char pid[8][8],name[5][50];
 float avg;

 cout<<"********************************************************"<<endl;
 cout<<"     * Sporats Event Score Analysis "<<endl;
 cout<<"********************************************************"<<endl<<endl;

 //insert details
 cout<<"Enter the number of participant : ";
 cin>>n;
 cout<<endl;

 for(i=0;i<n;i++)
 {
 cout<<"Enter Participant ID : ";
 cin>>pid[i];

 cin.ignore();
 cout<<"Enter parrticipant name : ";
 cin.getline(name[i],50);

 cout<<"Enter Score :";
 cin>>scr[i];
 cout<<endl;

 system("cls");
  cout<<"********************************************************"<<endl;
 cout<<"     * Sporats Event Score Analysis "<<endl;
 cout<<"********************************************************"<<endl<<endl;

}

//display all data in tabular form
 cout<<"********************************************************"<<endl;
 cout<<"     * Participant Performance "<<endl;
 cout<<"********************************************************"<<endl<<endl;

 cout<<left<<setw(10)<<"ID"<<setw(10)<<"NAME"<<setw(15)<<"SCORE"<<endl;
 cout<<"-------------------------------------------------------------------------------------"<<endl;

 for(i=0;i<n;i++)
 {
     cout<<left<<setw(10)<<pid[i]<<setw(10)<<name[i]<<setw(15)<<scr[i]<<endl;
     total=total+scr[i];

     //highest & lowest
     if(scr[i]>high)
     {
         high=scr[i];
     }
     if(scr[i]<low)
     {
         low=scr[i];
     }
 }

 //final analysis
 cout<<endl<<"total = "<<total<<endl;
 avg=total/n;
 cout<<"Average = "<<avg<<endl;
 cout<<"Higest Marks = "<<high<<endl;
 cout<<"Lowest Marks = "<<low<<endl;
}
