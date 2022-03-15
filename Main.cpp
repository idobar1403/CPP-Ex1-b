#include<iostream>
#include<string>
#include<exception>
#include"mat.hpp"
using namespace std;
int main(){
    cout<<"Rules:"<<endl;
    cout<<"1.The rows and column must be odd numbers."<<endl;
    cout<<"2.The symbols ascii values must be between 33 and 126."<<endl;
    cout<<"3.Have fun!"<<endl;
    cout<<endl;
    int row, col, ans;
    char sym1, sym2;
    cout<<"To exit the code press 0"<<endl;
    cout<<"To enter arguments press 1"<<endl;
    cout<<"To see some examples press 2"<<endl;
    try{
    cin>>ans;
    cout<<endl;
    if(ans!=0 && ans!=1 && ans!=2){
        while(ans!=0 && ans!=1 && ans!=2){
            cout<<"choose correctly!"<<endl;
            cout<<"To exit the code press 0"<<endl;
            cout<<"To enter arguments press 1"<<endl;
            cout<<"To see some examples press 2"<<endl;
            cin>>ans;
            cout<<endl;
        }
    }
    }
    catch(exception& e){
        cout<<"didn't choose number!"<<endl;
        return 0;
    }
    while(ans!=0 && !std::cin.fail()){
        try{
        cout<<"enter";
        if(ans==1){
        cout<<"enter odd num of rows: ";
        cin>>row;
        cout<<endl;
        cout<<"enter odd num of columns: ";
        cin>>col;
        cout<<endl;
        cout<<"enter the first symbol: ";
        cin>>sym1;
        cout<<endl;
        cout<<"enter the second symbole: ";
        cin>>sym2;
        cout<<endl;
        }
        }
        catch(exception& e){
            cout<<"you didn't choose correctly!"<<endl;
            return 0;
        }
        try{
            cout<<ariel::mat(col, row, sym1, sym2)<<endl;
        }
        catch(exception& e){
            cout<<"must choose odd rows and columns and valid symbols!"<<endl;
            cout<<endl;
        }
        if(ans==2){
            cout<<"this is with 9 columns, 7 rows, @ ans - :"<<endl;
            try{
                cout<<ariel::mat(9,7,'@','-')<<endl;
            }
            catch(exception& e){
                cout<<"Got exception."<<endl;
            }
            cout<<"this is with 1 columns, 1 rows, # ans - :"<<endl;
            try{
                cout<<ariel::mat(1,1,'#','-')<<endl;
            }
            catch(exception& e){
                cout<<"Got exception."<<endl;
            }
            cout<<"this is with 5 columns, 13 rows, @ ans - :"<<endl;
            try{
                cout<<ariel::mat(5,13,'@','-')<<endl;
            }
            catch(exception& e){
                cout<<"Got exception."<<endl;
            }
            cout<<"this is with 5 columns, 5 rows, ? ans ? :"<<endl;
            try{
                cout<<ariel::mat(5,5,'?','?')<<endl;
            }
            catch(exception& e){
                cout<<"Got exception."<<endl;
            }
        }
        cout<<"Choose your next step."<<endl;
        cout<<"To exit the code press 0"<<endl;
        cout<<"To enter arguments press 1"<<endl;
        cout<<"To see some examples press 2"<<endl;
        try{
        cin>>ans;
        cout<<endl;
        if(ans!=0 && ans!=1 && ans!=2){
            while(ans!=0 && ans!=1 && ans!=2){
                cout<<"choose correctly!"<<endl;
                cout<<"To exit the code press 0"<<endl;
                cout<<"To enter arguments press 1"<<endl;
                cout<<"To see some examples press 2"<<endl;
                cin>>ans;
                cout<<endl;
            }
        }
        }
        catch(exception& e){
            cout<<"didn't choose number!"<<endl;
            return 0;
        }
    }
    return 1;
}