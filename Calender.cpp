#include<iostream>
using namespace std;
class Calender
{
public:
    int d,m,y,yc,a,sum=0,b,cc,lc=0,ans;
    void normal()
    {
        a=y%100;
        if(m==1||m==2)
        {
        if(y%4==0)
            lc=1;
        }
            cout<<lc<<endl;
        yc=((a+(a/4))%7);
        cout<<yc<<endl;
        if(m==01)
            m=0;
       else if(m==02)
            m=3;
       else if(m==03)
            m=3;
       else if(m==04)
            m=6;
       else if(m==05)
            m=1;
       else if(m==06)
            m=4;
       else if(m==07)
            m=6;
       else if(m==8)
            m=2;
       else if(m==9)
            m=5;
       else if(m=10)
            m=0;
       else if(m==11)
            m=3;
       else if(m==12)
            m=5;
            cout<<m<<endl;
        b=y/100;
        cout<<b<<endl;
        if(b==17)
            cc=4;
       else if(b==18)
            cc=2;
      else if(b==19)
            cc=0;
       else if(b==20)
            cc=6;
       else if(b==21)
            cc=4;
       else if(b==22)
            cc=5;
       else if(b==23)
            cc=0;
            cout<<cc<<endl;
        sum=(yc+m+cc+d)-lc;
        cout<<sum<<endl;
        ans=sum%7;
        cout<<ans<<endl;
        if(ans==0)
            cout<<"sunday"<<endl;
    else if(ans==1)
            cout<<"monday"<<endl;
       else if(ans==2)
            cout<<"tuesday"<<endl;
       else if(ans==3)
            cout<<"thursday"<<endl;
       else if(ans==4)
            cout<<"friday"<<endl;
       else if(ans==5)
            cout<<"saturday"<<endl;
       else if(ans==6)
            cout<<"sunday"<<endl;
    }

};
main()
{
    Calender o;
    cout<<"Enter the date(dd mm yyyy) : ";
    cin>>o.d;
    cin>>o.m;
    cin>>o.y;
    o.normal();
}
