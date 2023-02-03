#include <iostream>
#include<list>
using namespace std;

int main(){

int user_input;
string choice;

int num;
int counter;
list<int> prime_list;

cout<<"\nStill wish to run? Enter 'Y' for YES or 'N' for NO\n\n";
cin>>choice;
string m = choice;
if (m=="y"){
    cout<<"\n\nCHOOSE A CHOICE NUMBER TO CALCULATE ALL PRIME BEFORE IT\n\n";
    cin>>num;
    for (int x=1; x<=num; ++x){
        cout<<"\n\nx = "<<x<<endl;
        int result = 0;
        for (int y=1; y<=x; ++y){
            cout<<"y = "<<y<<endl;
            if (x%y==0){
                cout<<"stage 3\n";
                result+=1;
                cout<<"result ="<<result<<endl;
            }else{
            continue;
            }
        }
        cout<<"\nWHy not Here\n";
        if (result==2){
            counter+=1;
            prime_list.emplace_back(x);
            cout<<"Prime"<<counter<<"\n";
        }else{
        continue;
        }
    }

    /*
    cout<<"The Prime Numbers before the chosen Number =";
    for (list<int>::iterator i=prime_list.begin(); i!=prime_list.end();){
        cout<<*i<<" ";
        cout<<endl;
    }
    */
}else{
cout<<"\n\nSOFTWARE TERMINATED BY USER!!\n\n";
}

return 0;
}

