#include<iostream>
#include<vector>
using namespace std;

string sortingSentence(string s){

    vector<string>ans(10);
    string temp;

    int count = 0, index = 0;
    while(index < s.size()){
        if(s[index]==' '){
            // find the position of the digit
            int pos = temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            index++;
            count++;
        }
        // if element at index not a space then add them into temp string
        else{
            temp+=s[index];
            index++;
        }
    }
    // when the word is last , while loop condition break
        // explicitly add the word into the vector ans
        int pos = temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos] = temp;
        temp.clear();
        index++;
        count++;

        // iterate the vector ans 
        for(int i = 1; i<=count; i++){
            temp += ans[i];
            temp += " ";
        }
        temp.pop_back();
        return temp;

}

int main(){
    string s = "is2 sentence4 This1 a3";
    cout<<sortingSentence(s);
}