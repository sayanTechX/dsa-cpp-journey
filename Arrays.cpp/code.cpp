// #include <iostream>
// using namespace std;

// int main() {
//     cout << "C++ is working!" << endl;
//     return 0;
// }

// Arrays in c++
// #include <iostream> 
// using namespace std;
// loops in c++
// int main() {
//     int marks[5] = {23,45,67,89,100};
//     int size = 5;

//     // int sz = size
//     //loops : 0 to size-1
//     for (int i = 0; i<size; i++){
//         cout<< marks[i] << endl;
//     } 

//     // cout << marks[2] << endl;
//     return 0;
// }

// #include <iostream> 
// using namespace std;

// int main() {
//     int size = 5;
//     int marks[size];

//     for (int i = 0; i<size; i++){
//         cin >> marks [i];
//     }

//     for(int i= 0; i<size; i++){
//         cout << marks[i] << endl;
//     }
    

//     return 0;
// }
// largest and smallest element in an array
// #include <iostream> 
// #include <climits>

// using namespace std;

// int main() {
//    int nums[] = {5,15,22,1,-15,24};
//    int size = 6;

//    int smallest = INT_MAX;

//    for(int i = 0; i<size; i++) {
//     if(nums[i] < smallest) {
//         smallest = nums[i];
//     }
//    }

//    cout << "smallest = " << smallest << endl;

//     return 0;
// }

// #include <iostream> 
// using namespace std;

// int linearSearch(int arr[], int sz, int target) {
//     for(int i =0; i<sz; i++) {
//         if(arr[i] == target){ //found
//             return i;
//         }
//     }
//     return -1; //not found
// }

// void reversrArray(int arr[], int sz) {
//     int start = 0, end = sz-1;

//     while(start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {4,2,7,8,1,2,5};
//     int sz = 7;

//     reversrArray(arr, sz);

//     for(int i = 0; i<sz; i++){
//         cout << arr[i] << " ";
//     }

//     cout << endl;
//     return 0;

// }

// Vector in c++

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int>vec = {1,2,3}; //0
//     cout << vec[0] << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int>vec (5, 0); //0
//     cout << vec[0] << endl;
//     cout << vec[1] << endl;
//     cout << vec[2] << endl;
//     cout << vec[3] << endl;
//     cout << vec[4] << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int>vec;

//     cout << "size = " << vec.size() << endl;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     cout << "after push back size = " << vec.size() << endl;

//     for(int val : vec) {
//         cout << val << endl;
//     }
//     return 0;
// }


// largest and smallest element in an array
// #include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {5,15,22,1,-15,24};
//     int size = 6;

//     int smallest = INT8_MAX;
//     int largest = INT8_MIN;

//     for(int i = 0; i<size; i++) {
//         if(nums[i] <smallest) {
//             smallest = nums[i];
//         }
//         if(nums[i] >largest) {
//             largest = nums[i];
//         }
//     }
//     cout << "smallest = " << smallest << endl;
//     cout << "largest = " << largest << endl;
//     return 0;
// }

// Linear Search Alogorithm 

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int sz, int target) {
//     for(int i = 0; i < sz; i++) {
//         if(arr[i] == target) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;
//     int target = 8;

//     cout << linearSearch(arr, sz, target) << endl;

//     return 0;
// }

// Reverse an array, 2 pointer approach

// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int sz) {
//     int start = 0, end = sz - 1;
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;

//     reverseArray(arr, sz);

//     for (int i = 0; i < sz; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// Sum & Product of an array

// #include <iostream>
// using namespace std;

// void sumAndProduct(int arr[], int size) {
//     int sum = 0;
//     int product = 1;

//     for(int i = 0; i < size; i++) {
//         sum = sum + arr[i];
//         product = product * arr[i];
//     }
//     cout << "sum = " << sum << endl;
//     cout << "product = " << product << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = 5;

//     sumAndProduct(arr, size);

//     return 0;
// }

// Swap min and max element in an array

// #include <iostream>
// using namespace std;

// void swapMinMax(int arr[], int size) {
//     int minIndex = 0;
//     int maxIndex = 0;

//     // Find min and max index
//     for(int i = 1; i < size; i++) {
//         if(arr[i] < arr[minIndex]) {
//             minIndex = i;
//         }
//         if(arr[i] > arr[maxIndex]) {
//             maxIndex = i;
//         }
//     }

//     // Swap min and max
//     int temp = arr[minIndex];
//     arr[minIndex] = arr[maxIndex];
//     arr[maxIndex] = temp;
// }

// int main() {
//     int arr[] = {6, 7, 3, 1};
//     int size = 4;

//     swapMinMax(arr, size);

//     // Print updated array
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// print unque values in an array

// #include <iostream>
// using namespace std;

// void printUnique(int arr[], int size) {
//     for(int i = 0; i <size; i++) {

//         int count = 0;

//         for(int j = 0; j < size; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if(count == 1) {
//             cout << arr[i] << " ";
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 2, 4, 5, 1};
//     int size = 7;

//     printUnique(arr, size);

//     return 0;
// }

//intersection of two arrays

#include <iostream>
using namespace std;

void intersection(int arr1[], int sz1, int arr2[], int sz2) {
    for(int i = 0; i < sz1; i++) {
        for(int j = 0; j < sz2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int sz1 = 5;

    int arr2[] = {4, 5, 6, 7, 8};
    int sz2 = 5;

    intersection(arr1, sz1, arr2, sz2);

    return 0;
}