#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;
int x=22,y=40;
void homepage()
{
    int i,j;
    for(i=0; i<x; i++)
    {
        cout<<"\t\t\t\t\t";
        for(j=0; j<y; j++)
        {
            if(i==0||j==0||i==x-1||j==y-1)
                cout<<"*";
            else if(i==2&&j==14)
            {
                cout<<"------------";
                j+=11;
            }
            else if(i==3&&j==14)
            {
                cout<<"| Wellcome |";
                j+=11;
            }
            else if(i==4&&j==14)
            {
                cout<<"------------";
                j+=11;
            }
            else if(i==6)
                cout<<"-";
            else if(i==8&&j==6)
            {
                cout<<"------------------------";
                j+=23;
            }
            else if(i==9&&j==6)
            {
                cout<<"| => Name: Nahid Hasan |";
                j+=23;
            }
            else if(i==10&&j==6)
            {
                cout<<"------------------------";
                j+=23;
            }
            else if(i==11&&j==6)
            {
                cout<<"-----------------------";
                j+=22;
            }
            else if(i==12&&j==6)
            {
                cout<<"| => ID: 201-15-14185 |";
                j+=22;
            }
            else if(i==13&&j==6)
            {
                cout<<"-----------------------";
                j+=22;
            }
            else if(i==14&&j==6)
            {
                cout<<"-----------------";
                j+=16;
            }
            else if(i==15&&j==6)
            {
                cout<<"| => Section: G |";
                j+=16;
            }
            else if(i==16&&j==6)
            {
                cout<<"-----------------";
                j+=16;
            }
            else if(i==19&&j==8)
            {
                cout<<"\"Hit Enter key to get in\"";
                j+=24;
            }
            else if(i==20&&j==8)
            {
                cout<<"-------------------------";
                j+=24;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    char ch[1];
    cout<<"\t\t\t\t\t=> ";
    gets(ch);
    system("CLS");
}
int topics()
{
    int i,j;
    for(i=0; i<x+3; i++)
    {
        cout<<"\t\t\t\t\t";
        for(j=0; j<y; j++)
        {
            if(i==0||j==0||i==x-1+3||j==y-1)
                cout<<"*";
            else if(i==2&&j==15)
            {
                cout<<"----------";
                j+=9;
            }
            else if(i==3&&j==15)
            {
                cout<<"| Topics |";
                j+=9;
            }
            else if(i==4&&j==15)
            {
                cout<<"----------";
                j+=9;
            }
            else if(i==6)
                cout<<"-";
            else if(i==8&&j==6)
            {
                cout<<"(1) For: +, -, *, /";
                j+=18;
            }
            else if(i==10)
                cout<<"-";
            else if(i==12&&j==6)
            {
                cout<<"(2) For: sin,cos,tan,sin-1,";
                j+=26;
            }

            else if(i==13&&j==15)
            {
                cout<<"cos-1,tan-1,cosec,";
                j+=17;
            }
            else if(i==14&&j==15)
            {
                cout<<"sec,cot.";
                j+=7;
            }
            else if(i==16)
                cout<<"-";
            else if(i==18&&j==6)
            {
                cout<<"(3) For: log,log10,exp.";
                j+=22;
            }
            else if(i==20)
                cout<<"-";
            else if(i==22&&j==6)
            {
                cout<<"(4) For: abs, sqrt, pow, cubert.";
                j+=31;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"\t\t\t\t\t*              Chose Once              *\n\t\t\t\t\t****************************************\n";
    int n;
    cout<<"\t\t\t\t\t=> ";
    cin>>n;
    return n;
}
void generalmath()
{
    int i,j;
    for(i=0; i<x-9; i++)
    {
        cout<<"\t\t\t\t\t";
        for(j=0; j<y; j++)
        {
            if(i==0||j==0||i==x-10||j==y-1)
                cout<<"*";
            else if(i==2&&j==15)
            {
                cout<<"-----------";
                j+=10;
            }
            else if(i==3&&j==15)
            {
                cout<<"| Details |";
                j+=10;
            }
            else if(i==4&&j==15)
            {
                cout<<"-----------";
                j+=10;
            }
            else if(i==6&&j==10)
            {
                cout<<"Here you can add,sub,";
                j+=20;
            }
            else if(i==7&&j==8)
            {
                cout<<"multiply,devide any number";
                j+=25;
            }
            else if(i==8&&j==10)
            {
                cout<<"as like a calculator.";
                j+=20;
            }
            else if(i==10)
                cout<<"-";
            else if(i==11&&j==2)
            {
                cout<<"Each value & sign separate by space.";
                j+=35;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"\t\t\t\t\t=> ";
}
void trigonometric()
{
    int i,j;
    for(i=0; i<x-9; i++)
    {
        cout<<"\t\t\t\t\t";
        for(j=0; j<y; j++)
        {
            if(i==0||j==0||i==x-10||j==y-1)
                cout<<"*";
            else if(i==2&&j==15)
            {
                cout<<"-----------";
                j+=10;
            }
            else if(i==3&&j==15)
            {
                cout<<"| Details |";
                j+=10;
            }
            else if(i==4&&j==15)
            {
                cout<<"-----------";
                j+=10;
            }
            else if(i==6&&j==10)
            {
                cout<<"Here you can sin, cos, tan";
                j+=25;
            }
            else if(i==7&&j==8)
            {
                cout<<"sin-1, cos-1,tan-1,";
                j+=18;
            }
            else if(i==8&&j==8)
            {
                cout<<"cosec,sec,cot.";
                j+=13;
            }
            else if(i==9&&j==10)
            {
                cout<<"as like a calculator.";
                j+=20;
            }
            else if(i==11)
                cout<<"-";

            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"\t\t\t\t\t=> ";
}
void exponential()
{
    int i,j;
    for(i=0; i<x-9; i++)
    {
        cout<<"\t\t\t\t\t";
        for(j=0; j<y; j++)
        {
            if(i==0||j==0||i==x-10||j==y-1)
                cout<<"*";
            else if(i==2&&j==15)
            {
                cout<<"-----------";
                j+=10;
            }
            else if(i==3&&j==15)
            {
                cout<<"| Details |";
                j+=10;
            }
            else if(i==4&&j==15)
            {
                cout<<"-----------";
                j+=10;
            }
            else if(i==6&&j==10)
            {
                cout<<"Here you can log";
                j+=15;
            }
            else if(i==7&&j==8)
            {
                cout<<"log10, exp.";
                j+=10;
            }
            else if(i==8&&j==10)
            {
                cout<<"as like a calculator.";
                j+=20;
            }
            else if(i==10)
                cout<<"-";

            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"\t\t\t\t\t=> ";
}void squre()
{
    int i,j;
    for(i=0; i<x-9; i++)
    {
        cout<<"\t\t\t\t\t";
        for(j=0; j<y; j++)
        {
            if(i==0||j==0||i==x-10||j==y-1)
                cout<<"*";
            else if(i==2&&j==15)
            {
                cout<<"-----------";
                j+=10;
            }
            else if(i==3&&j==15)
            {
                cout<<"| Details |";
                j+=10;
            }
            else if(i==4&&j==15)
            {
                cout<<"-----------";
                j+=10;
            }
            else if(i==6&&j==10)
            {
                cout<<"Here you can squre, absolute";
                j+=27;
            }
            else if(i==7&&j==8)
            {
                cout<<"value, power, cube root.";
                j+=23;
            }
            else if(i==8&&j==10)
            {
                cout<<"as like a calculator.";
                j+=20;
            }
            else if(i==10)
                cout<<"-";

            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"\t\t\t\t\t=> ";
}
int endpage()
{
    int i,j;
    for(i=0; i<x-13; i++)
    {
        cout<<"\t\t\t\t\t";
        for(j=0; j<y; j++)
        {
            if(i==0||j==0||i==x-14||j==y-1)
                cout<<"*";
            else if(i==1&&j==14)
            {
                cout<<"| End page |";
                j+=11;
            }
            else if(i==2)
                cout<<"-";
            else if(i==3&&j==10)
            {
                cout<<"| (1) Homepage |";
                j+=15;
            }
            else if(i==4&&j==10)
            {
                cout<<"--------------------------";
                j+=25;
            }
            else if(i==5&&j==10)
            {
                cout<<"| (2) Go to Current page |";
                j+=25;
            }
            else if(i==6&&j==10)
            {
                cout<<"--------------------------";
                j+=25;
            }
            else if(i==7&&j==10)
            {
                cout<<"| (3) End process |";
                j+=18;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    int l;
    cout<<"\t\t\t\t\t=> ";
    cin>>l;
    return l;
}
void thankpage()
{
    int i,j;
    for(i=0; i<7; i++)
    {
        cout<<"\t\t\t\t\t";
        for(j=0; j<y; j++)
        {
            if(i==0||j==0||i==6||j==y-1)
                cout<<"*";
            else if(i==2&&j==14)
            {
                cout<<"-------------";
                j+=12;
            }
            else if(i==3&&j==14)
            {
                cout<<"| Thank You |";
                j+=12;
            }
            else if(i==4&&j==14)
            {
                cout<<"-------------";
                j+=12;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    char c,ch[20];
    int a,b,d;
    double result=0,value,val1,val2;
first1:
    homepage();
    value=topics();
    system("CLS");
    if(value==1)
    {
first2:
        generalmath();
        cin>>val1;
        result+=val1;
value1:
        cin>>c;
        if(c=='=')
        {
            cout<<"\t\t\t\t\t----------------------------------------\n";
            cout<<"\t\t\t\t\t";
            cout<<"=> Ans: "<<result<<endl;
            cout<<"\t\t\t\t\t----------------------------------------\n\n";
            a=endpage();
            if(a==1)
                goto first1;
            else if(a==2)
                goto first2;
            else
            {
                system("CLS");
                thankpage();
                return 0;
            }
        }
        else
        {
            cin>>val2;
            if(c=='+')
                result+=val2;
            else if(c=='-')
                result-=val2;
            else if(c=='*')
                result*=val2;
            else if(c=='/')
                result/=val2;
            goto value1;
        }
    }
    else if(value==2)
    {
        trigonometric();
        cout<<"Give Trigonometric type from the given: ";
        cin>>ch;
        cout<<"Give value: ";
        cin>>value;
        cout<<"\t\t\t\t\t";
        if(strcmp(ch,"sin")==0)
            cout<<"The value is: "<<sin(value)<<endl;
        else if(strcmp(ch,"cos")==0)
            cout<<"The value is: "<<cos(value)<<endl;
        else if(strcmp(ch,"tan")==0)
            cout<<"The value is: "<<tan(value)<<endl;
        else if(strcmp(ch,"sin-1")==0)
            cout<<"The value is: "<<asin(value)<<endl;
        else if(strcmp(ch,"cos-1")==0)
            cout<<"The value is: "<<acos(value)<<endl;
        else if(strcmp(ch,"tan-1")==0)
            cout<<"The value is: "<<atan(value)<<endl;
        else if(strcmp(ch,"cosec")==0)
            cout<<"The value is: "<<1/sin(value)<<endl;
        else if(strcmp(ch,"sec")==0)
            cout<<"The value is: "<<1/cos(value)<<endl;
        else if(strcmp(ch,"cot")==0)
            cout<<"The value is: "<<1/tan(value)<<endl;
        a=endpage();
        if(a==1)
            goto first1;
        else if(a==2)
            goto first2;
        else
        {
            system("CLS");
            thankpage();
            return 0;
        }
    }
    else if(value==3)
    {
        exponential();
        cout<<"Give Log type from the given: ";
        cin>>ch;
        cout<<"Give value: ";
        cin>>value;
        cout<<"\t\t\t\t\t";
        if(strcmp(ch,"log")==0)
            cout<<"The value is: "<<log(value)<<endl;
        else if(strcmp(ch,"log10")==0)
            cout<<"The value is: "<<log10(value)<<endl;
        else if(strcmp(ch,"exp")==0)
            cout<<"The value is: "<<exp(value)<<endl;
            a=endpage();
        if(a==1)
            goto first1;
        else if(a==2)
            goto first2;
        else
        {
            system("CLS");
            thankpage();
            return 0;
        }
    }else if(value==4)
    {
        squre();
        cout<<"Give type from the given: ";
        cin>>ch;
        cout<<"Give value: ";
        cin>>value;
        cout<<"\t\t\t\t\t";
        if(strcmp(ch,"absolute value")==0)
            cout<<"The value is: "<<abs(value)<<endl;
        else if(strcmp(ch,"squre root")==0)
            cout<<"The value is: "<<sqrt(value)<<endl;
        else if(strcmp(ch,"power")==0)
            {
                int po;
                cout<<"Give power value: ";
                cin>>po;
                cout<<"\t\t\t\t\t";
                cout<<"The value is: "<<pow(value,po)<<endl;
            }
            else if(strcmp(ch,"cube root")==0)
            cout<<"The value is: "<<cbrt(value)<<endl;
            a=endpage();
        if(a==1)
            goto first1;
        else if(a==2)
            goto first2;
        else
        {
            system("CLS");
            thankpage();
            return 0;
        }
    }
}
