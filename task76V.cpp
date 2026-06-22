#include <bits/stdc++.h>
using namespace std;
class Compartment{
    public:
    virtual string notice() = 0;
};
class FirstClass : public Compartment{
    public:
    string notice() override{
        return "FirstClass Compartment";
    }
};
class Ladies : public Compartment{
    public:
    string notice() override{
        return "Ladies Compartment";
    }
};
class General : public Compartment{
    public:
    string notice() override{
        return "General Compartment" ;
    }
};
class Luggage : public Compartment{
    public:
    string notice() override{
        return "Luggage Compartment";
    }
};
int main(){
    vector<Compartment*> vc(10);
    random_device ran;
    mt19937 generator(ran());
    uniform_int_distribution<int> val(1,4);
    for(int i=0;i<vc.size();i++){
        int x= val(generator);
        if(x==1){
            vc[i] = new FirstClass();
        }
        else if(x==2){
            vc[i] = new Ladies();
        }
        else if(x==3){
            vc[i] = new General();
        }
        else {
            vc[i] = new Luggage();
        }
    }
    for(Compartment* Cm: vc){
        cout << Cm->notice() << endl;
    }
    return 0;
}