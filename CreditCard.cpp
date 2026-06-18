#include <bits/stdc++.h>
using namespace std;
int main(){
    string card;
    cin >> card;
    for(char c:card){
        if(!isdigit(c)){
            cout << "This is not a valid card." << endl;
            return 0;
        }
    }
    if(card[0]<'4' || card[0] >'6'){
        cout << "This is not a valid card." << endl;
        return 0;
    }
    int sum=0;
    for(int i=0;i<card.length();i++){
        int num= (card[i]-'0');
        if(i%2==0){
            int temp= num *2;
            if(temp>=10){
                temp= (temp/10) + (temp%10);
            }
            num=temp;
        }
        sum+=num;
    }
    if(sum%10!=0){
        cout << "This is not a valid card." << endl;
        return 0;   
    }
    cout << "This is a valid card." << endl;
    return 0;
}