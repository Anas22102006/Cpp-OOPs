#include <bits/stdc++.h>
using namespace std;
class GeneralBank{
    public:
    virtual void getSavingsInterestRate() = 0;
    virtual void getFixedDepositInterestRate() = 0;
};
class ICICIBank: public GeneralBank{
    public:
    void getSavingsInterestRate() override{
        cout << "Savings account interest rate if 4%" << endl;
    }
    void getFixedDepositInterestRate() override{
        cout << "Fixed deposit account interest rate is 8.5%" << endl;
    }
};
class KotMBank: public GeneralBank{
    public:
    void getSavingsInterestRate() override{
        cout << "Savings account interest rate if 6%" << endl;
    }
    void getFixedDepositInterestRate() override{
        cout << "Fixed deposit account interest rate is 9%" << endl;
    }
};
int main(){
    ICICIBank I;
    KotMBank K;
    GeneralBank* Gk = new KotMBank();
    GeneralBank* Gi = new ICICIBank();
    I.getSavingsInterestRate();
    I.getFixedDepositInterestRate();
    K.getSavingsInterestRate();
    K.getFixedDepositInterestRate();
    Gi->getSavingsInterestRate();
    Gi->getFixedDepositInterestRate();
    Gk->getSavingsInterestRate();
    Gk->getFixedDepositInterestRate();
    return 0;
}
