#include <bits/stdc++.h>
using namespace std;
class Instrument{
    public:
    virtual void play() =0;
};
class Piano: public Instrument{
    public:
    void play() override{
        cout << "Piano is playing tan tan tan" << endl;
    }
};
class Flute: public Instrument{
    public:
    void play() override{
        cout << "Flute is playing toot toot toot" << endl;
    }
};
class Guitar: public Instrument{
    public:
    void play() override{
        cout << "Guitar is playing tin tin tin" << endl;
    }
};
int main(){
    vector<Instrument*> vc(10);
    random_device ran;
    mt19937 generator(ran());
    uniform_int_distribution<int> values(1,3);
    for(int i=0;i<vc.size();i++){
        int x = values(generator);
        if(x==1){
            vc[i]= new Piano();
        }
        else if(x==2){
            vc[i]= new Flute();
        }
        else{
            vc[i]= new Guitar();
        }
        vc[i]->play();
        if(dynamic_cast<Piano*>(vc[i])){
            cout << "Index " << i << " Comtains Piano" << endl;
        }
        else if(dynamic_cast<Flute*>(vc[i])){
            cout << "Index " << i << " Contains Flute" << endl;
        }
        else{
            cout << "Index " << i << " Contains Guitar" << endl;
        }
    }
    return 0;
}
