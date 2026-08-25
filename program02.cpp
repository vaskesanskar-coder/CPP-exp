#include<iostream>
using namespace std;
class construct
{
public:
float area;
construct()
{
area=0;
}
construct(int a, int b)
{
area = a*b;
}

void disp()
{
cout<<area<<endl;
}
};
int main()
{
construct 0;
construct o2(10,20);

0.disp();
o2.disp();
return 1;
}
