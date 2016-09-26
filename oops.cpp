#include<iostream>
#include<stdlib.h>
#include<list>
#include<conio.h>
#include<map>
using namespace std;
 int dep(int d,int m,int y,int c)
{
if(((y>0&&y<9999)&&(m>0&&m<=12)&&(d>0&&d<=31)&&((((m==4||m==6||m==9||m==11)&&d<31))||((m==3||m==5||m==7||m==8||m==10||m==12)&&d<32)))&&(!(((y-c)%4!=0)&&(m==2)&&(d>=29))))
      return 1;
else if(((y-c)%4==0)&&(m==2)&&(m<=29))
     return 1;

 else
      return 0;
 }
class date1
{public:int dn,mn,yn,cn;
 void set()
{ int abc=0;
 cout<<"enter date in dd-mm-yyyy format\n";
 while(1)
 {
 cout<<"Enter date\n";
 cin>>dn;
 cout<<"Enter Month\n";
 cin>>mn;
 cout<<"Enter year\n";
 cin>>yn;
 cn=(yn/100)*100;
 abc=dep(dn,mn,yn,cn);
 if(abc)
 break;
 else
 cout<<"The given date doesnt exist\n";
 getch();
 system("cls");
 }
}
};
int main()
{
 int c,cf;
 	list<string>nh;
	list<string>::iterator ie;
 std::map<int,char*> mymap;
 std::map<int,char*>::iterator it;
 mymap[0]="Saturday";
 mymap[1]="Sunday";
 mymap[2]="Monday";
 mymap[3]="Tueday";
 mymap[4]="Wednesday";
 mymap[5]="Thursday";
 mymap[6]="Friday";
 std::map<int,int> month;
 std::map<int,int>::iterator it1;
 month[1]=1;
 month[2]=4;
 month[3]=4;
 month[4]=0;
 month[5]=2;
 month[6]=5;
 month[7]=0;
 month[8]=3;
 month[9]=6;
 month[10]=1;
 month[11]=4;
 month[12]=6;
 int ch;
 cout<<"Enter\n1.Day calculator\n2.National Holidays\n";
 cin>>ch;
 switch(ch)
 {case 1:
date1 d;
d.set();
c=d.cn%400;
if(c==0)
cf=6;
else if(c==100)
cf=4;
else if(c==200)
cf=2;
else
cf=0;
int res,y;
y=d.yn-d.cn;
int e,f,g,i,j;
e=y/4;
f=y%4;
g=e*5;
i=g%7;
j=i+f;
int n,k;
k=0;
n=month.find(d.mn)->second;
if((y%4==0)&&((d.mn==1)||(d.mn==2)))
k=1;
res=(d.dn+n+cf+j-k)%7;
cout<<"The Answer is \n=========\n";
std::cout<< mymap.find(res)->second;
cout<<"\n=========";
break;
case 2:  	nh.push_back("List Of National holidays\n");
        	nh.push_back("Date		Month      		Occasion	");
	        nh.push_back("========================================");
	        nh.push_back("26  		January   		Republic Day");
	        nh.push_back("14  		April			Ambedkar Jayanthi");
        	nh.push_back("01  		May			May Day	");
	        nh.push_back("15  		August			Independence Day	");
	        nh.push_back("05  		September		Teacher's Day");
	        nh.push_back("02  		October			Gandhi Jayanthi");
	        nh.push_back("31  		October		        Sardar Patel Jayanthi");
	        nh.push_back("14  		November		Childrens Day	");
	        nh.push_back("25  		December		Christmas	");
	        nh.push_back("========================================");
	        cout<<endl;
	        for(ie=nh.begin();ie!=nh.end();++ie)
	        cout<<*ie<<endl;
		    cout<<endl;
		break;
}
return 0;
}

