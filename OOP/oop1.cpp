/*
Implement a class Complex which represents the Complex Number data type. Implement the 
following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers
*/

#include<iostream>
using namespace std;

class complex
{   private:
        float real;
        float img;
    public:
    
    complex()
    {
        real = 0;
        img = 0;
    }

   friend ostream & operator <<(ostream &out,complex const &c2)
{
    out<<c2.real<<"+"<<c2.img<<"i"<<endl;
    return out;
}
   friend istream & operator>>(istream &in,complex  &c2)
{   
    cout<<"\n enter real part:-"<<endl;
    in>>c2.real;
    cout<<"\n enter imaginary part:-"<<endl;
    in>>c2.img;
    return in;
}
   
     complex operator + (complex const &c2)
    {
        complex temp;
        temp.real = real + c2.real;
        temp.img = img + c2.img;
        return temp;
    }
    complex operator*(complex const &c2)
    {
        complex temp;
        temp.real =((real)*(c2.real))-((img)*(c2.img));
        temp.img = ((real)*(c2.img))+((c2.real)*(img));
        return temp;
    }
};


int main()
{
  complex s0,s1,s2,s3,s4;
  cout<<s0;
  cout<<"\n enter first number:-"<<endl;
  cin>>s1;
  cout<<"\n enter second number:-"<<endl;
  cin>>s2;
  cout<<"addition is :-"<<endl;
  cout<< s1+s2<<endl;
  cout<<"multiplication is :-"<<endl;
  cout<<s1*s2<<endl;
    return 0;
}
/*
0+0i

 enter first number:-

 enter real part:-
5
enter imaginary part:-
4
enter second number:-
enter real part:-
6
enter imaginary part:-
3
addition is :-
11+7i

multiplication is :-
18+39i

*/
