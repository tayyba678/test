#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
main()
{
int d;
string m,a;
cout<<"Enter the day of birth: ";
cin>> d;
cout<<"Enter the month of birth (e.g., January, February): ";
cin>> m;
a=findZodiacSign(d,m);
cout<<"Zodiac Sign: "<<a;
}
string findZodiacSign(int day, string month)
{
string a;
if(month=="March"&& (day>=21&&day<=31))
{
a="Aries";
}
if(month=="April"&& (day>=1&&day<=19))
{
a="Aries"; 
}
if((month=="April"&& (day>=20&&day<=30))||(month=="May"&& (day>=1&&day<=20)))
{
a="Taurus";
}
if((month=="May"&& (day>=21&&day<=31))||(month=="June"&& (day>=1&&day<=20)))
{
a="Gemini";
}
if((month=="June"&& (day>=21&&day<=30))||(month=="July"&& (day>=1&&day<=22)))
{
a="Cancer";
}
if((month=="July"&& (day>=23&&day<=31))||(month=="August"&& (day>=1&&day<=22)))
{
a="Leo";
}
if((month=="August"&& (day>=23&&day<=31))||(month=="September"&& (day>=1&&day<=22)))
{
a="Virgo";
}
if((month=="September"&& (day>=23&&day<=30))||(month=="October"&& (day>=1&&day<=22)))
{
a="Libra";
}
if((month=="october"&& (day>=23&&day<=31))||(month=="november"&& (day>=1&&day<=21)))
{
a="Scorpio";
}
if((month=="November"&& (day>=22&&day<=30))||(month=="December"&& (day>=1&&day<=21)))
{
a="Sagittarius";
}
if((month=="December"&& (day>=22&&day<=31))||(month=="January"&& (day>=1&&day<=19)))
{
a="Capricorn";
}
if((month=="january"&& (day>=20&&day<=31))||(month=="february"&& (day>=1&&day<=18)))
{
a="Aquaris";
}
return a;
}










