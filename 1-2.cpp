#include<iostream>
using namespace std;
int main()
{
    double f,c;
    cout<<"请输入华氏度：";
    cin>>f;
    c = (f-32)/1.8;
    cout<<"摄氏度："<<c<<endl;
    return 0;
}