#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        if (s.size()<=10){
            cout << s << endl;
        }else{
            cout << s[0];
            cout << s.size()-2;
            cout << s[s.size()-1] << endl;
        }
    }
}