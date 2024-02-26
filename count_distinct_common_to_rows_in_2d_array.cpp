#include <iostream>
#include <vector>
using namespace std;

int distinct(vector<vector<int>> M, int N){
    int count = 0;
    vector<int> distinctFirstRow;
    for (int i = 0; i < N; i++)
    {
        bool isDistinct = true;
        int j = i-1;
        while (j>=0)
        {
            if (M[0][i] == M[0][j])
            {
                isDistinct = false;
                break;
            }
            j--;
        }
        if (isDistinct)
        {
            distinctFirstRow.push_back(M[0][i]);
        }
    }
    for (int i = 0; i < distinctFirstRow.size(); i++)
    {
        int distinctFlag = 0;
        for (int k = 1; k < N; k++)
        {
            for (int j = 0; k < N; k++)
            {
                if (distinctFirstRow[i] == M[k][j])
                {
                    distinctFlag++;
                    break;
                }
            }
        }
        if (distinctFlag == N-1)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> M(N, vector<int>(N, 0));
    for (int i = 0; i < N*N; i++)
    {
        cin >> M[i/N][i%N];
    }
    cout << distinct(M, N) << "\n";
    
}