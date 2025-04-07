#include<iostream>
#include<vector>
using namespace std;

int longestPal(string s){
    int n = s.size();

    vector<int>lowerLetters(26, 0);
    vector<int>upperLetters(26, 0);

    // traverse the string and count the numbers of lower and upper case and add to the corresponding vectors
    for(int i = 0; i<n; i++){
        if(s[i] >= 'a'){
            int index = s[i]-'a';
            lowerLetters[index]++;
        }
        else{
            int index = s[i]-'A';
            upperLetters[index]++;
        }
    }

    int count = 0;
    int odd = 0;

    //traverse the lower array , count the letters which are even and directly add to the count , if odd then minus 1 and add , lastly odd = 1
    for(int i = 0; i<lowerLetters.size(); i++){
        if(lowerLetters[i]%2 == 0){
            count+=lowerLetters[i];
        }
        else{
            count+=lowerLetters[i]-1;
            odd = 1;
        }
    
    // same for uppercase letters
    
        if(upperLetters[i]%2 == 0){
            count += upperLetters[i];
        }
        else{
            count += upperLetters[i]-1;
            odd = 1;
        }
    }
    return count+odd;
}

int main(){
    string s = "daYamaYad";

    cout<<longestPal(s);
}