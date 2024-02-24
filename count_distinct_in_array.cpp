#include <iostream>
using namespace std;

int distinctInArray(int arr[], int sizeOfArray) {
    int count = 0;
    bool isDistinct = true;
    for (int i = 0; i < sizeOfArray; i++)
    {
        isDistinct = true;
        for (int j = i-1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct == true)
        {
            count++;
        }   
    }
    return count;
}

int main() {
    int t;
    int sortingOrder;
    cout << "Enter array size\n";
    cin >> t;
    int arr[t];
    int index = 0;
    cout << "Enter array element one by one\n";
    while (index < t) {
        int element;
        cin >> element;
        arr[index] = element;
        index++;
    }
    cout << "Distinct elements count: " << distinctInArray(arr, t) << endl; 
}