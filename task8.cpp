#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
main()
{
    string year;
    int noh,now,k;
    cout <<"Enter year type: ";
    cin>> year;
    cout<<"Enter number of holidays: ";
    cin>> noh;
    cout<<"Enter number of weekends: ";
    cin>> now;
    k=calculateVolleyballGames(year,noh,now);
    cout<<k;
}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int totalW =48, normalY =0,leapY = 0,tw;
    tw=totalW-hometownWeekends;
    if(yearType=="leap")
    {
        normalY=(3 * totalW /4) + (2 * holidays/3);
        leapY = normalY + (0.15 * normalY);
    }
        else if(yearType=="normal")
        {
            normalY = (3 * totalW/ 4) + (2 * holidays / 3) ;
        }
if (yearType == "leap") {
    return leapY;
} else {
    return normalY;
}
    
}
    
