#include <iostream>
#include <vector>

using namespace std;

void transpose(vector < vector <int> > &matrix) {
    // vector<vector<int> > m(n, vector<int>(n)); if you need to created vector of size n
    vector<vector<int> > m;
        for(int i = 0; i < matrix.size(); i++){
            vector <int> v;
            for(int j = 0; j < matrix[i].size(); j++){
                v.push_back(matrix[j][i]);
            }
            m.push_back(v);
        }
        matrix = m;
}

int main() {
    vector< vector <int> > matrix = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4},
    };

    transpose(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
       for (int j = 0; j < matrix[i].size(); j++)
       {
            cout << matrix[i][j] << " ";
       }
       cout << endl;
    }
    

    return 0;
}