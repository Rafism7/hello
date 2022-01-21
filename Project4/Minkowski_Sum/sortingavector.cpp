#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v{1,5,6,7,9,23,45,89};

    sort(v.begin() , v.end());

    cout << "Sorted \n";
    for(auto x: v)
        cout << x <<" ";
    return 0;
}

//How to sort in descending order? 
// add greater<int> function to  sort()  as a third parameter
//  sort(v.begin(), v.end(), greater<int>());
 