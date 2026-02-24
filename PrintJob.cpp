#include <bits/stdc++.h>
using namespace std;
class Printjob{
    int npages;
    public:
    static int ntraypages;
    static int njobs;
    Printjob(int np): npages(np){
        ++njobs;
        cout <<"Printing "<<np<<" pages !"<< endl;
        ntraypages-=np;
    }
    ~Printjob(){
        --njobs;
    }
    static int getJobs(){
        return njobs;
    }
    static int checkPages(){
        return ntraypages;
    }
    static void loadPages(int np){
        ntraypages+=np;
    }
};
int Printjob::ntraypages = 400;
int Printjob::njobs = 0;
int main(){
    Printjob p1(30);
    cout <<"njobs : "<< Printjob::getJobs()<< endl;
    cout <<"Remaining on tray : "<< Printjob::checkPages() << endl;
    Printjob::loadPages(200);
    {
        Printjob p1(300) ,p2(130);
        cout <<"njobs : "<< Printjob::getJobs()<< endl;
        cout <<"Remaining on tray : "<< Printjob::checkPages() << endl;
    }
    return 0;
}