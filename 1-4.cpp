#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout<<"请输入三角形的三条边：";
    double a,b,c,s,area;
    cin>>a>>b>>c;
    s=a+b+c;
    area=sqrt((s/2)*(s/2-a)*(s/2-b)*(s/2-c));

    cout<<"三角形周长为："<<s;
    cout<<"三角形面积为："<<area;

    return 0;

}