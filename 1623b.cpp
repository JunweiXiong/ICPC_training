#include <iostream>
#include <vector>
#include <array>
#include <unordered_set>

using namespace std;

bool compareInterval(vector<int> i1, vector<int> i2)
{
    return ((i1[1]-i1[0]) < (i2[1]-i2[0]));
}

void solve(){
    int n;
    cin >> n;
    vector<vector<int> > ll;
    for (int i=0;i<n;i++){

        int a,b;
        cin >> a >> b;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        ll.push_back(v);
    }

    sort(ll.begin(),ll.end(), compareInterval);

    unordered_set<int> set;

    for (vector<int> l:ll){

        if (set.find(l[0]) != set.end() && set.find(l[0]) == set.end()) {
            set.insert(l[1]);
            cout << l[0] << " " << l[1] << " " << l[1] << endl;
        }else if (set.find(l[0]) == set.end() && set.find(l[0]) != set.end()){
            set.insert(l[0]);
            cout << l[0] << " " << l[1] << " " << l[0] << endl;
        }else{
            for (int i= l[0];i<=l[1];i++){
                if (set.find(i)==set.end()){
                    set.insert(i);
                    cout << l[0] << " " << l[1] << " " << i << endl;
                    break;
                }
            }
        }

    }
//    cout << "here" << endl;
    cout << endl;

}

int main() {

    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++) {solve();}

}