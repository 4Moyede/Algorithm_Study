// 달팽이는 1부터 N*N까지의 숫자가 시계방향으로 이루어져 있다.
// 다음과 같이 정수 N을 입력 받아 N크기의 달팽이를 출력하시오.

// [제약사항]

// [출력]
// 각 줄은 '#t'로 시작하고, 다음 줄부터 빈칸을 사이에 두고 달팽이 숫자를 출력한다.
// (t는 테스트 케이스의 번호를 의미하며 1부터 시작한다.)

#include <iostream>
#include <vector>
using namespace std;

int snail[12][12];

const int dy[4] = { 1, 0, -1, 0 };
const int dx[4] = { 0, 1, 0, -1 };

int main() {
    // 가장 첫 줄에는 테스트 케이스의 개수 T가 주어지고, 그 아래로 각 테스트 케이스가 주어진다.
    int testcase;
    cin >> testcase;
    for(int t = 1; t <= testcase; ++t) {
        // 각 테스트 케이스에는 N이 주어진다.
        // 달팽이의 크기 N은 1 이상 10 이하의 정수이다. (1 ≤ N ≤ 10)

        int N;
        cin >> N;

        int snailNumber = 1;
        int cur = 0;
        int X = 0, Y = 0;
        int move = 0;

        while(cur == 0) {

            snail[X][Y] = snailNumber;

            // check next
            int next_X = X + dx[move];
            int next_Y = Y + dy[move];
            bool turn = false;
            if( next_X < 0 || next_X >= N || next_Y < 0 || next_Y >= N) {
                turn = true;
            }
            else
            {
                if( snail[next_X][next_Y] != 0 )
                    turn = true;
            }
            
            if(turn)
            {
                // 다음 방향 결정
                if ( move == 3 )
                    move = 0; 
                else
                    move++;
            }

            X += dx[move];
            Y += dy[move];

            cur = snail[X][Y];

            snailNumber++;
        }

        cout << "#" << t << "\n";
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cout << snail[i][j] << " ";
                snail[i][j] = 0;
            }
            cout << "\n";
        }
    }

    return 0;
}