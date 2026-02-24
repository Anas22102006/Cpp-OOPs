#include<iostream>
using namespace std;
class base{
public:
int a;
base (int x): a(x) {}
};
class derived: protected base{
int b;
public:
derived(int x, int y) : b(y), base (x) {}
};
int main(){
derived t1(10,20);
base t2(5);
cout << t1.a; //LINE-1
cout << t2.a; //LINE-2
return 0;
}