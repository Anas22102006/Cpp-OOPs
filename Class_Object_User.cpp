#include <iostream>
#include <string>
using namespace std;

class car{
    string brand , model;
    int year;
    public:
        void setdata(string b,string m,int y){
            brand = b;
            model = m;
            year = y;
        }
        void display(){
            cout << "Brand : " << brand << endl ;
            cout << "Model : " << model << endl;
            cout << "Year : "  << year << endl;
            cout << endl;  
        }
};
int main(){
    car c1,c2,c3;
    c1.setdata("Aston Martin","DB9",2021);
    c2.setdata("Mecedes Benz","G-Wagon",2020);
    c3.setdata("Mahindra","Thar 4x4",2018);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}