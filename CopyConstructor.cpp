#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int marks;
    Student(int m): marks(m){
        cout <<"Constructor called"<<endl;
    }
    Student(const Student &s):marks(s.marks){
        cout<<"Copy Constructor Called"<<endl;
    }
    ~Student(){
        cout<<"Destructor called"<< endl;
    }
};
int main(){
    Student s1(120);
    Student s2(s1);
    cout << s2.marks << endl;
    return 0;
} 