#include <iostream> 
#include <string>
#include <vector>

using namespace std; 

int main() {
    int x; 

    cin >>  x; 

    string wre[100];
    vector<string> l;


    string hur;
    for (int  k  = 0;  k  < x;  k++) {
        cin >>  hur;
        l.push_back(hur);
    }
    string o;
    vector<string> ll;
    string newx = "";
    string jump;
    for (int k =0;  k  < l.size();  k++) {
        o = l[k];
        if(o.size() > 10) {
         int f = o.size() - 2;
         string str = to_string(f); //  converting whatever types to 
                                    // string 
         newx = o[0] + str + o[o.size() -1];
         ll.push_back(newx);
        }
        else {
            ll.push_back(o);
        }
    }
    int cnt = 0;
    for (int begin =  0;  begin < ll.size(); begin++) {
        cout << ll[begin];
        if (cnt  < ll.size() - 1) {
            cnt++; 
            cout <<  endl;
        }
    }
    return 0;
}
