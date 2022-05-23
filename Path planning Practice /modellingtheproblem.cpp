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
class Planner : Map{

    public: 
        int start[2] ={0,0};
        int goal[2] ={ mapHeight - 1 , mapWidth - 1 };
        int cost =1;

        string movement_arrows[4] = {"^","<","v",">"};

        vector<vector<int> > movements{
        {-1,0},
        {0,-1},
        {1,0},
        {0,1}

        };    

};

template <typename T>
void print2Dvector(T Vec)
{
    for(int i=0;i<Vec.size();++i){
        for(int j=0;j < Vec[i].size();j++){
            cout<<Vec[i][j] << ' ';
        }
        cout << endl;
    }
}
int main()
{
    Map map;
    Planner planner;

    cout<<"\n Map:"<<endl;
    print2Dvector(map.grid);
    
    cout<< "\nStart: "<< planner.start[0] << "," << planner.start[1] << endl;
    cout<< "\nGoal: "<<planner.goal[0]<<","<<planner.goal[1]<<endl;
    cout<< "\nCost: "<<planner.cost << endl;
    cout<<"\n Robot Movements: "<< planner.movement_arrows[0]<<","<<planner.movement_arrows[1]<<","<<planner.movement_arrows[1]<<","<<planner.movement_arrows[2]<<","<<planner.movement_arrows[3]<<endl;
    cout<<"\nDelta: " << endl;
    print2Dvector(planner.movements);
    return 0;

}
