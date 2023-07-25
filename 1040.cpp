#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a, b, c, d, e;
    cin>>a>>b>>c>>d;
    float avg = (a*2 + b*3 + c*4 + d)/10.0;
    cout<<fixed<<setprecision(1)<<"Media: "<<avg<<endl;
    if(avg>=7.0)
        cout<<"Aluno aprovado."<<endl;
    else if(avg<5.0)
        cout<<"Aluno reprovado."<<endl;
    else if(avg>=5.0 && avg<=6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>e;
    cout<<fixed<<setprecision(1)<<"Nota do exame: "<<e<<endl;
    float avg2= (avg+e)/2;
    if(avg2>=5.0)
        cout<<"Aluno aprovado."<<endl;
    else
        cout<<"Aluno reprovado."<<endl;
    cout<<fixed<<setprecision(1)<<"Media final: "<<avg2<<endl;
    }


    return 0;
}
