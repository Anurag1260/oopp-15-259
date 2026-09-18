#include<bits/stdc++.h>
using namespace std;
class complex{
    int real,img;
public:
    complex(int r=0, int i=0):real{r},img{i}{}
    void show()
    {
        cout<<real<<","<<img<<endl;

    }
    complex operator+(complex c)
    {
       return complex(real+c.real,img+c.img);
    }
};
int main(){
    
    complex c1(10,20);
    complex c2(30,40);
    c1.show();
    c2.show();
    return 0;
}