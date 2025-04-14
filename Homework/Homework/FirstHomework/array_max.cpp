#include <iostream>

#include <vector>

using namespace std;



int findMax(const vector<int>& arr) {

    int maxVal = arr[0];

    for (int i = 1; i < arr.size(); ++i) {

        if (arr[i] > maxVal) {

            maxVal = arr[i];

        }

    }

    return maxVal;

}



int main() {

    vector<int> arr = { 3, 7, 2, 9, 10, 5 };  // 예시 입력

    cout << "최대값: " << findMax(arr) << endl;

    return 0;

}

