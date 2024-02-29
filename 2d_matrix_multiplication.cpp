#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > matrixMultiplication(const vector < vector <int> > &matrix1, const vector < vector <int> > &matrix2) {
    int a1 = matrix1.size();
    int b1 = matrix1[0].size();
    
    int a2 = matrix2.size();
    int b2 = matrix2[0].size();
    
    if(b1 != a2) return {}; 
    vector<vector<int> > resultant;
    for(int i = 0; i< a1; i++){
        vector <int> v;
        for(int j = 0; j < b2; j++){
            int res = 0;
            for(int k = 0; k < b1; k++){
                res += matrix1[i][k]*matrix2[k][j];
            }
            v.push_back(res);
        }
        resultant.push_back(v);
    }
    return resultant;
}

int main() {
    vector< vector <int> > matrix1 = {
        {4, 8},
        {0, 2},
        {1, 6},
    };

    vector< vector <int> > matrix2 = {
        {5, 2},
        {9, 4},
    };

    vector< vector <int> > resultantMatrix = matrixMultiplication(matrix1, matrix2);
    for (int i = 0; i < resultantMatrix.size(); i++)
    {
       for (int j = 0; j < resultantMatrix[i].size(); j++)
       {
            cout << resultantMatrix[i][j] << " ";
       }
       cout << endl;
    }
    return 0;
}