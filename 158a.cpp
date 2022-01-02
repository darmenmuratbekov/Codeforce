#include <iostream>
#include <vector>

using namespace std;


int main() {
    int a,b;
    cin >> a  >> b;
    vector <int>  hurt;
    int key;
    for(int j = 0;  j < a;  j++) {
        cin >> key;
        hurt.push_back(key);
    }
    vector<int> opion;
    vector<int> zero;
    for(int k = 0;  k < hurt.size();  k++) {
           opion.push_back(hurt[k]);
           if(hurt[k] == 0) {
               zero.push_back(0);
           }
    }
    if(opion.size() == zero.size()) {

      cout << 0;
      return 0;
    }
    int max = 0;
    int position;
    for (int i = 0; i  < opion.size(); i++) {
         if(opion[i] >= opion[b-1] && opion[i] != 0) {
             max++;
         }
    }
    cout << max;
    return 0;
}
