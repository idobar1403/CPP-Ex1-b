#include<iostream>
#include<string>
#include"mat.hpp"
#include<vector>

using namespace std;
namespace ariel {
std::string mat(int columns, int rows, char sym1, char sym2){
    if (sym1 < '!' || sym1 > '~' || sym2 < '!' || sym2 > '~' ){ //check for invalid argumnts
        throw invalid_argument("not valid char");
    }
    if(columns<0 || rows<0){  //check for invalid argumnts
        throw invalid_argument("Mat size is always odd");
    }
    if (columns==0 || rows==0){ //check for invalid argumnts
        throw invalid_argument("Mat size is always odd");
    }
    if (columns%2==0 || rows%2==0){ //check for invalid argumnts
        throw invalid_argument("Mat size is always odd");
    }
    if(sym1 == ' ' || sym2 == ' ' || sym1 == '\n' || sym2 == '\n'  //check for invalid argumnts
       || sym1 == '\t' || sym2 == '\t' ||
        sym1 == '\r' || sym2 == '\r'){
        throw invalid_argument("Not valid symbol");
    }
    vector<vector<char>> carpet(rows, vector<char>(columns)); //initialize the matrix for the carpet
    int currow = 0;
    int currcol=0;
    int counter = 0 ;
    int lastrow=rows;
    int lastcol=columns;
    int i=0;
    int j=0;
    char currsym=sym1;
    while(counter < rows*columns){ // check for running over every entry of the matrix
        if(counter > 0){  //switching the symbols
            if(currsym == sym1){
                currsym = sym2;
            }
            else{
                currsym = sym1;
            }
        }
        for(i=currcol;i<lastcol;i++){  //running over the upper row
            carpet[currow][i] = currsym;
            counter++;
        }
        for(i=currow+1;i<lastrow;i++){  //running over the most right column
            carpet[i][lastcol-1] = currsym;
            counter++;
        }
        for(i=lastcol-2;i>=currcol;i--){ //running over the lowest row
            carpet[lastrow-1][i] = currsym;
            counter++;
        }
        for(i=lastrow-2;i>currow;i--){  //running over the most left column
            carpet[i][currcol] = currsym;
            counter++;
        }
        currow++, currcol++, lastcol--, lastrow--;
    }
    std::string ans;
    for(i=0;i<rows;i++){  //converting the matrix to a string
        for(j=0;j<columns;j++){
            ans+=carpet[i][j];
            }
        ans+="\n";
    }
    return ans;
    }
}