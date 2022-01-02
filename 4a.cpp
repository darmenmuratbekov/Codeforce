#include <iostream> 

using namespace std; 

bool  fuck(int d, int j) {
    int cnt =0;
    if(d  %  2 == 0  && j %  2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int x; 
    cin >> x; 

    for (int i = 2; i  < x;  i++) {
        for(int j  = 2;  j  < x; j++) {
            if(fuck(i, j) == 1 && (i  + j)  == x) {
                cout << "YES";
                return 0;
            }
        }

    }
    cout << "NO";
    return 0;
}
