#include <iostream>
#include <vector>
using namespace std;

// advantages:
// numbers of rows and columns can be dynamic
// easier to pass as an argument to function

void print2dArray(vector< vector<int> > arr) {
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int m, n;
    cout << "Enter no. of rows of the array\n";
    cin >> m;
    cout << "Enter no. of columns of the array\n";
    cin >> n;
    vector< vector<int> > arr;
    for (int i = 0; i < m; i++)
    {
        vector <int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(101);
        }
        arr.push_back(v);
    }
    print2dArray(arr);
    return 0;
}