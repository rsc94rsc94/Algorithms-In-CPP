#include <iostream>

using namespace std;

int main(){
    int numberOfVertices;
    cin >> numberOfVertices;
    int ids[numberOfVertices];
    int p, q;
    int numberOfPairs;
    cin >> numberofPairs;
    for(int i = 0; i< numberOfPairs; i++){
        cin >> p >> q;
        if(ids[p]==ids[q])
            continue;
        for(int j = 0; j< numberOfVertices; j++)[
            if(ids[i] == p)
                ids[i] = ids[q];
        cout << p << " " << q << endl;
    }
}



