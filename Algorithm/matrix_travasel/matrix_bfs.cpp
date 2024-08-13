#include<bits/stdc++.h>

using namespace std;

const int N = 1005;
int row,col;
bool visited[N][N];
int dis[N][N];
vector<pair<int,int>> direction = {{-1,0},{1,0},{0,-1},{0,1}}; // top,bottom,left,right

bool isValid(int i,int j){
    if(i >= 0 && i < row && j >= 0 && j < col) return true;
    return false;
}

void grid_bfs(int sI, int sJ){
    queue<pair<int,int>> q;
    q.push({sI,sJ});
    visited[sI][sJ] = true;
    dis[sI][sJ] = 0;

    while(!q.empty())
    {
        pair<int,int> parent = q.front();
        int pI = parent.first;
        int pJ = parent.second;
        q.pop();

        for(int i = 0;i < 4;i++){
            pair<int,int> mv = direction[i];
            int cI = pI + mv.first;
            int cJ = pJ + mv.second;
            if(!isValid(cI,cJ)) continue;
            if(visited[cI][cJ]) continue;
            visited[cI][cJ] = true;
            dis[cI][cJ] = dis[pI][pJ] + 1;
            q.push({cI,cJ});
        }

    }

}

int main(){
    cin >> row >> col;

    char adj_matrix[row][col];

    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cin >> adj_matrix[i][j];
        }
    }
    int sI,sJ;
    cin >> sI >> sJ;
    grid_bfs(sI,sJ);

    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
           cout << dis[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}