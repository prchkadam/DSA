#include <bits/stdc++.h>
using namespace std;

void pairs(){
    // Pair of two integer
    pair<int , int >a = {1 , 2};
    cout << a.first << " " << a.second << "\n";

    // Pair of float and character
    pair<float , char >b = {59.8956 , '*'};
    cout << b.first << " " << b.second << "\n";

    // Pair of string and character
    pair<string , char >c = {"hellow world" , '@'};
    cout << c.first << " " << c.second << "\n";

    // no two pairs can have same name even if datatype is different

    //Nested Pairs
    pair<int , pair<string , char >>d = {45 , {"hehehehe" , '$'}};
    cout << d.first << " " << d.second.second << " " << d.second.first << "\n";

    pair<int , char> arr[] = {{1 , 'A'} , {2 , 'B'} , {3 , 'C'}};
    cout << arr[1].second << ' ' << arr[0].first;
    // You can not return an array like arr[1], yu are supposed to use index like first second 
}
int main() {
    pairs();
    return 0;
}