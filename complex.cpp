#include <bits/stdc++.h>
using namespace std;
 class comp {
    int real,img;
    public:
    comp(int r=0, int i=0):
    real{r},img{i}{} // inilization 
   
    friend comp operator +(comp c1, comp c2 );
    friend comp operator +(comp c1,int x);


    void show ()
    {
        cout<<real<<" ,"<<img <<endl;

    }

 };
 comp operator+(comp c1,comp c2){
    return comp(c1.real + c2.real, c1.img + c2.img );
 }

 comp operator+(comp c1 ,int x){
    return comp(c1.real+ x, c1.img + x);

 }


 int main(){
    comp c1(5,20);
    comp c2(2,3);
    c1.show();
    c2.show();
    comp c3=c1+c2;
    c3.show();
    comp c4=c1+5;
    c4.show();


 }