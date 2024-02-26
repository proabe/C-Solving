#include <iostream>
using namespace std;

void insertAtIndex(int arr[], int sizeOfArray, int index, int element) {
    int prevTemp;
    for(int i=0; i <= sizeOfArray; i++){
        if(i >= index) {
            int currTemp;
            if(i == index){
                prevTemp = arr[i];
                arr[i] = element;
            } else {
                currTemp = arr[i];
                arr[i] = prevTemp;
                prevTemp = currTemp;
            }
        }
    }
    
}

int main() {
    int t;
    int indexForElement;
    int element;
    cout << "Enter array size\n";
    cin >> t;
    int arr[t];
    int index = 0;
    cout << "Enter array element one by one\n";
    while (index < t) {
        cin >> arr[index];
        index++;
    }
    cout << "Enter index where to place an element\n";
    cin >> indexForElement;
    cout << "Enter element to place at the provided index\n";
    cin >> element;
    insertAtIndex(arr, t, indexForElement, element);
    for (int x : arr)
    {
        cout << x << " ";
    }
}