#include <iostream>

using namespace std;

int main(){
    int numberOfVertices;
    cin >> numberOfVertices;
    int ids[numberOfVertices];
    for(int i = 0; i< numberOfVertices; i++)
        ids[i] = i;
    int p, q;
    int numberOfPairs;
    cin >> numberOfPairs;
    for(int i = 0; i< numberOfPairs; i++){
        cin >> p >> q;
        if(ids[p]==ids[q])
            continue;
        for(int j = 0; j< numberOfVertices; j++)
            if(ids[j] == p)
                ids[j] = ids[q];
        cout << p << " " << q << endl;
    }
}



