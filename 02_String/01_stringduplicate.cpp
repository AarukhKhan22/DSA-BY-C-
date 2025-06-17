#include<bits/stdc++.h>
using namespace std;

void fun(string s){

    unordered_map<char,int>map;

    for(char i:s){
        map[i]++;
    }

    for(auto & it:map){
        if(it.second>1){
            cout<<"['"<<it.first<<"',"<<it.second<<"],";
        }
    }

}

int main(){
    string s ="geeksforgeeks";

    fun(s);
}