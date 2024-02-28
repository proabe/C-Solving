#include <iostream>
#include <vector>
using namespace std;

// advantages:
// numbers of columns can be dynamic
// easier to pass as an argument to function

void print2dArray(vector<int> arr[], int m, int n) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
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
    vector<int> arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(101);
        }
    }
    print2dArray(arr, m, n);
    return 0;
}