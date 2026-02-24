#include <bits/stdc++.h>
using namespace std;
class Count{
    static int count;
    public:
    Count(){
        ++count;
        cout <<"Object Created ! Live = "<< count << endl;
    }
    ~Count(){
        --count;
        cout<<"Object Destroyed ! Live = "<<count << endl;
    }
    static int getCount(){
        return count;
    }
};
int Count::count = 0;
int main(){
    Count c1;
    Count c2;
    {
        Count c3;
        cout << "Live = "<< Count::getCount() << endl;
    }
    cout << "Live = "<< Count::getCount() << endl;
    return 0;
}