#include<iostream>
using namespace std;

bool ap(int n, int arr[]) {
    if (n < 2)
        return false;

    double diff = arr[1] - arr[0];
    for (int i = 1; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] != diff)
            return false;
    }
    return true;
}

bool gp(int n, int arr[]) {
    if (n < 2)
        return false;

        double ratio = arr[1] * 1.0 / arr[0];
        
        for (int i = 1; i < n - 1; i++) {
            if ((arr[i + 1] * 1.0 / arr[i]) != ratio)
                 return false;
        }

    
    return true;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least 2 elements." << endl;
        return 1; // indicating error
    }

    int *arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (ap(n, arr)) {
        cout << "Array is in AP" << endl;
    }
    else if (gp(n, arr)) {
        cout << "Array is in GP" << endl;
    }
    else {
        cout << "Array is neither in AP nor in GP" << endl;
    }

    delete[] arr; // Freeing memory allocated for the array
    return 0;
}
