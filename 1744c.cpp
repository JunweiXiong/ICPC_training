#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i =0;i<n;i++){
        int x;
        char c;
        cin >> x >> c;
        int max = 0;

        int lastc = -1;
        string s;
        cin >> s;
        s = s+s;
        if (c=='g'){
            cout << 0 << endl;
            continue;
        }

        for (int j=0;j<2*x;j++){
            char cc = s[j];
            if (cc==c){
                if(lastc==-1){
                    lastc=j;
                }
            }else if (cc=='g'){
                if (lastc!=-1){
                    if ((j-lastc)>max){
                        max = j-lastc;
                    }
                    lastc = -1;
                }
            }

        }



        cout << max << endl;
    }

    return 0;
}