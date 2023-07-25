#include<iostream>
using namespace std;
int main()
{
    int sh, sm, eh, em;
    cin>>sh>>sm>>eh>>em;

    int endTime = 60*eh + em;
    int startTime = 60*sh + sm;
    int duration= endTime-startTime;

    if(duration<=0)
    {
        duration= 24*60+duration;
    }

    cout<<"O JOGO DUROU "<<duration/60<<" HORA(S) E "<<duration%60<<" MINUTO(S)"<<endl;


    return 0;
}
