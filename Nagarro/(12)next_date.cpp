#include<bits/stdc++.h>
using  namespace std;


bool leapyear(int year)
{
    return((year%400==0)||(year%100!=0&&year&4==0));
}


void nextDate(string input)
{
    int date=stoi(input.substr(0,2));
    string monthString=input.substr(3,3);
    int year=stoi(input.substr(7,4));


    string monthName[12]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    int monthDays[12]={31,28,31,30,31,30,31,31,31,30,31,30};
    int month=0;


    for(int i=0;i<12;i++)
    {
        if(monthString==monthName[i])
        {
            month=i;
            break;
        }
    }

    if(date==31&&month==11)
    {
        date=1;
        year++;
        month=0;
    }
    else if((date+1)>monthDays[month]||(date==29)&&month==1&&leapyear(year))
    {
        month++;
        date=1;
    }
    else
    {
        date++;
    }

         if(date<10)
    {
        string newDate = "";
        string temp = to_string(date);
        newDate.push_back('0');
        newDate += temp;
        cout<<newDate<<"-"<<monthName[month]<<"-"<<year<<endl;
        return;

    }

            cout<<date<<"-"<<monthName[month]<<"-"<<year<<endl;

}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string input;
        cin>>input;
        nextDate(input);
    }

    return 0;
}
