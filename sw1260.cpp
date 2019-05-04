/**
 * 
 * 1260번, DFS와 BFS
 * 20190504
 * 
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int> > map;
bool visited[1001] = { false, };

int N, M, V;

void DFS(int x);
void BFS(int x);

void init();

int main(){
    // 첫째 줄에 정점의 개수 N(1 ≤ N ≤ 1,000), 간선의 개수 M(1 ≤ M ≤ 10,000), 탐색을 시작할 정점의 번호 V가 주어진다. 
    cin >> N >> M >> V;
    map.assign(N+1, vector<int>(0, 0));

    // 다음 M개의 줄에는 간선이 연결하는 두 정점의 번호가 주어진다. 어떤 두 정점 사이에 여러 개의 간선이 있을 수 있다. 입력으로 주어지는 간선은 양방향이다.
    for(int m = 0; m < M; m++){
        int input1_, input2_;
        cin >> input1_ >> input2_;
        map[input1_].push_back(input2_);
        map[input2_].push_back(input1_); // 방향성이 없는 그래프
    }
    
    // 단, 방문할 수 있는 정점이 여러 개인 경우에는 정점 번호가 작은 것을 먼저 방문하고, 더 이상 방문할 수 있는 점이 없는 경우 종료한다. 정점 번호는 1번부터 N번까지이다.
    for(int i = 0; i <= N; i++){
        sort(map[i].begin(), map[i].end());
    }

    // 첫째 줄에 DFS를 수행한 결과를, 그 다음 줄에는 BFS를 수행한 결과를 출력한다. V부터 방문된 점을 순서대로 출력하면 된다.
    DFS(V);
    init();
    BFS(V);

    return 0;
}


void DFS(int x){

    visited[x] = true;
    cout << x << " ";

    for(int i = 0; i < map[x].size(); i++){
        if(!visited[map[x][i]]){
            DFS(map[x][i]);
        }
    }

}

void BFS(int x){

    queue<int> q;
    visited[x] = true;
    q.push(x); 

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        cout << cur << " ";
        for(int i = 0; i < map[cur].size(); i++){
            if(!visited[map[cur][i]]){
                visited[map[cur][i]] = true;
                q.push(map[cur][i]);
            }
        }
    }
    cout << "\n";
}

void init(){
    cout << "\n";
    for(int i = 0; i < 1001; i++){
        visited[i] = false;
    }
}