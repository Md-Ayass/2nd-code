#include<bits/stdc++.h>
using namespace std;
class Complex{
private:
    int real,imag;
    public:
    Complex(int real=0,int imag=0){
    this->real=real;
    this->imag=imag;
    }
    Complex operator +(const Complex & obj){
    Complex temp;
    temp.real = real+obj.real;
    temp.imag= imag+obj.imag;
    return temp;
    }
    void print(){
    cout<<real<<" + "<<imag<<"i"<<endl;
    }

};
int main(){
   Complex a(3,2),b(4,6),c;
   c=a+b;
   a.print();
   b.print();
   c.print();
   return 0;
}

