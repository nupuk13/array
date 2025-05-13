#include <iostream>
#include <algorithm> 
#include <climits>  // Required for INT_MIN and INT_MAX
using namespace std;

int GetMax(int num[], int n) {
    int maximum = INT_MIN;  // ✅ Renamed from 'max' to 'maximum'

    for (int i = 0; i < n; i++) {
        maximum = max(maximum, num[i]);
        
        // if (num[i] > maximum) {
        //     maximum = num[i];
        // }
    }
    return maximum;
}

int GetMin(int num[], int n) {
    int minimum = INT_MAX;  // ✅ Renamed from 'min' to 'minimum'

    for (int i = 0; i < n; i++) {
        if (num[i] < minimum) {  // ✅ Corrected condition
            minimum = num[i];
        }
    }
    return minimum;
}

int main() {
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is " << GetMax(num, size) << endl;
    cout << "Minimum value is " << GetMin(num, size) << endl;

    return 0;
}
