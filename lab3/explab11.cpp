#include<iostream>

using namespace std;
class operations{
    int x,y;
    public:

      inline int sum(int a=0,int b=0,int c=0){
       
        
        return a+b+c;

    }
     inline float  sum(float a,float b){
        
        return a+b;
    }

    
};

int main(){
operations p1,p2;
cout<<p1.sum(1)<<endl;
float a,b;
a=10.5;
b=20.6;
 cout<<p2.sum(a,b)<<endl;
return 0;
}