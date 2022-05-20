#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

class Map
{
public:
    static const int mapWidth=6;
    static const int mapHeight=5;
    vector <vector<int>> grid
    {
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,1,0,0,0,0},
        {0,0,0,1,1,0},
    };

};

int main(){

    Map map1;
    for (vector<int> vect1D: map1.grid){

        for ( int x : vect1D)
        {
            cout<< x << " ";
        }
        cout << endl;
    }
    return 0;
}