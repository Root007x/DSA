#include<bits/stdc++.h>

using namespace std;
const int N = 1005;
int row,col;
bool visited[N][N];
char adj_matrix[N][N];

vector<pair<int,int>> direction = {{-1,0},{1,0},{0,-1},{0,1}}; // top,bottom,left,right

bool isValid(int i,int j){
    if(i >= 0 && i < row && j >= 0 && j < col && adj_matrix[i][j] == '.') return true;
    return false;
}

void matrix_dfs(int sI,int sJ){

    visited[sI][sJ] = true;

    for(int i = 0;i < 4;i++){

        pair<int,int> mv = direction[i];
        int cI = sI + mv.first;
        int cJ = sJ + mv.second;

        if(!isValid(cI,cJ)) continue;
        if(visited[cI][cJ]) continue;

        visited[cI][cJ] = true;
        matrix_dfs(cI,cJ);
    }
}

int main(){
    cin >> row >> col;

    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cin >> adj_matrix[i][j];
        }
    }

    int count = 0;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
           if(!visited[i][j] && adj_matrix[i][j] == '.'){
                count++;
                matrix_dfs(i,j);
           }
        }
    }
    cout << count << endl;
    return 0;
}