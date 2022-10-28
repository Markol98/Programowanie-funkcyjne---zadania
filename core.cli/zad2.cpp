#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   int i;
   float n,x=1;
   int eps = 10000; 
   cout<<"Wpisz liczbe: ";
   cin>>n;
   for(i=0;i < eps;i++)
   {
       x=(x + n / x) / 2;
   }
   cout<<"Pierwiastek z liczby: "<<n<<" wynosi: "<<x;
   return 0;
}
