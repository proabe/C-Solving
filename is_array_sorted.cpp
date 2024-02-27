#include <iostream>
using namespace std;

bool isAscending(int a, int b) {
    return a < b;
}

bool isDescending(int a, int b) {
    return a > b;
}

bool isArraySorted(int arr[], bool (*sortingFunction)(int, int), int sizeOfArray) {
    for (int i = 1; i < sizeOfArray; i++)
    {
        if (sortingFunction(arr[i], arr[i-1]))
        {
            return false;
        }
        
    }
    return true;
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
    cout << "Enter sorting order: 1 for ascending, 2 for descending\n";
    cin >> sortingOrder;
    cout << std::boolalpha << isArraySorted(arr, sortingOrder == 1 ? &isAscending : &isDescending, t) << endl;
}