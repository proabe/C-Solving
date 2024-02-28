#include <iostream>
using namespace std;

void print2dArray(int *arr[], int m, int n) {
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
    int *arr[m]; // allocated on stack
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int [n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 101;
        }
    }
    print2dArray(arr, m, n);
    return 0;
}