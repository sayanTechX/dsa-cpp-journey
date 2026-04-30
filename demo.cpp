

// #include <iostream>
// using namespace std;

// int main() {
//     cout << "i love susmita and he also loves me" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int age = 20;
//     cout << age << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter the age : ";
//     cin >> age;

//     cout << "your age is : " << age << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10, b= 14;
//     cout << "sum = " << (a+b) << endl;
//     cout << "difference = " << (a-b) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cout << "enter a : ";
//     cin >> a;
    
//     cout << "enter b : ";
//     cin >> b;

//     int sum = a+b;
//     cout << "sum = " << sum << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
//     int n = 0;
//     int sum = 0;
//     cout << "enter n: ";
//     cin >> n;

//     for (int i = 1; i<=n; i++) {
//         if (i%2 !=0) {
//             sum = sum +i;
//         }
      
//     }
//     cout << "sum of odd numbers = " <<sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;
//     bool isPrime = true;   // 1️⃣ declared and initialized

//     if (n <= 1) {
//         isPrime = false;
//     } else {
//         for (int i = 2; i <= n - 1; i++) {
//             if (n % i == 0) {   // non-prime
//                 isPrime = false;
//                 break;
//             }
//         }
//     }

//     if (isPrime == true) {
//         cout << "prime no\n";
//     } else {
//         cout << "non prime no\n";
//     }

    // isPrime -> true  -> prime
    // isPrime -> false -> non prime

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 0;
//     int sum = 0;
//     cout << "enter n: ";
//     cin >> n;

//     for (int i=1; i<=n; i++) {
//         if(i % 3 ==0) {
//             sum = sum+i;
//         }
//     }
//     cout << "sum =" << sum;
//     return 0;
// }



// conditional statement if-else
// #include <iostream>
// using namespace std;

// int main() {
//     int n = -5;

//     if (n>=0) {
//         cout << "n is positive\n";
//     } else {
//          cout << "n is negitive\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cout << "Enter char: ";
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z') {
//         cout << "lowercase\n";
//     } else if (ch >= 'A' && ch <= 'Z') {
//         cout << "uppercase\n";
//     } else {
//         cout << "not an alphabet\n";
//     }

//     return 0;
// }

// Loops

// int main() {
//     int count = 1;

//     while (count <= 10) {
//         cout << count << " ";
//         count++;
//     }

//     cout << endl;
//     return 0;
// }
// #include <iostream>
// using namespace std;

//  int main() {
//     int n = 7;

//     for (int  i = 1; i<=n; i++)
//     {
//         cout << i << " ";
//     }

//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

//  int main() {
//     int n = 7;
//     int sum = 0;

//     for (int  i = 1; i<=n; i++)
//     {
//         sum += i;
//     }

//     cout << "sum = " << sum << endl;
//     return 0;
// }

// try this using while loop


// patterns
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 7;

//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 7;

//     for (int i=1; i<=n; i++) {
//         for (int j=1; j<=n; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 7;

//     for (int i=0; i<n; i++) { //outer loop
//         char ch = 'A';
//         for (int j=0; j<n; j++) { //inner loop
//             cout << ch;
//             ch = ch+1;
//         }
//         cout << endl;
//     }
//     return 0;
// }
 
// n is define to no of line. 


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int num = 1;

//     for (int i=0; i<n; i++) { //outer loop
//         for (int j=0; j<n; j++) { //inner loop
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for (int i=0; i<n; i++) { //n
//         for (int j=0; j<i+1; j++) { //i+1
//             cout << "* ";
            
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     for (int i=0; i<n; i++) { //n
//         for (int j=0; j<i+1; j++) { //i+1
//             cout << "* ";
            
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;
    

//     for (int i=0; i<n; i++) {
//         char ch = 'A';
//         for (int j = 0; j<n; j++) {
//             cout << ch;
//             ch = ch+1;
//         }
//       cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;
//     int num =1;
    

//     for (int i=0; i<n; i++) {
        
//         for (int j = 0; j<n; j++) {
//             cout << num;
//             num++;
//         }
//       cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6;

    

//     for (int i=0; i<n; i++) {
        
//         for (int j = 0; j<i+1; j++) {
//             cout << "* ";
            
//         }
//       cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

    

//     for (int i=0; i<n; i++) {
        
//         for (int j = 0; j<i+1; j++) {
//             cout << (i+1);
            
//         }
//       cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;

    

//     for (int i=0; i<n; i++) {
        
//         for (int j = 1; j<i+1; j++) {
//             cout << j;
            
//         }
//       cout << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for (int i=0; i<n; i++) {
        
//         for (int j = i+1; j>0; j--) {
//             cout << j;
            
//         }
//       cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int num = 1;
//     for (int i=0; i<n; i++) {
        
//         for (int j = i+1; j>0; j--) {
//             cout << num << " ";
//             num++;
            
//         }
//       cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int num = 1;
//     for (int i=0; i<n; i++) {
//         //spaces
//         for (int j =0; j<i; j++) {
//             cout << " ";
//             }
//             //nums
//         for (int j =0; j<n-i;j++) {
//             cout << (i+1) ;
//         }
//         cout << endl;
//       }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for (int i=0; i<n; i++) {
//         //spaces: n-i-1
//         for(int j =0; j<n-i-1; j++) {
//             cout << " ";
//         }
//         //nums1:i+1
//         for (int j =1;j<=i+1;j++) {
//             cout<< j;
//         }
//         //nums2:
//         for(int j= i; j>0; j--){
//             cout<< j;
//         }
//         cout<< endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     for (int i=0; i<n; i++) {
//         //spaces

//         cout << "*";
        
//     }
//     return 0;
// }

//function

// #include <iostream>
// using namespace std;

// //function defination
// int printHello() {
//     cout<< "hello world\n";
//     return 3;
// }

// int main() {
//     //function call
//     int val = printHello();
//     cout<< "val = " << val << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// //sum of 2 no
// int sum (int a,int b) {
//     int s = a+b;
//     return s;
// }

// int main() {
//    cout << sum(10, 5);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// //sum of 2 no
// int sumN (int n) {
//     int sum = 0;

//     for(int i =1; i<=n; i++){
//         sum+=i;
//     }
//     return sum;
// }

// int main() {
//    cout << sumN(5) << endl;
//    cout << sumN(10) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// //sum of 2 no
// int factorialN (int n) {
//     int fact = 1;

//     for(int i =1; i<=n; i++){
//         fact *=i;
//     }
//     return fact;
// }

// int main() {
//    cout << factorialN(5) << endl;
//    cout << factorialN(10) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int changeX(int x){
//     x = 2*x;
//     cout << "x= " << x << endl;
//  }
// int main() {
//    int x =5;
//    changeX(x);
//    cout << "x = " << x << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int sumOfDigits(int num) {
//     int digSum = 0;

//     while(num>0) {
//         int lastDig = num%10;
//         num /=10;

//         digSum += lastDig;
//     }
//     return digSum;
// }

// int main() {
//     cout<< "sum= "<< sumOfDigits(12450) <<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int sumOfDigits(int num) {
//     int digSum = 0;

//     while(num>0) {
//         int lastDig = num%10;
//         num /=10;

//         digSum += lastDig;
//     }
//     return digSum;
// }

// int main() {
//     cout<< "sum= "<< sumOfDigits(12450) <<endl;

//     return 0;
// }

//Binary no system

// #include <iostream>
// using namespace std;

// int decToBinary(int decNum) {
//     int ans = 0, pow = 1;

//     while(decNum>0) {
//         int rem = decNum % 2;
//         decNum /=2;

//         ans+= (rem*pow);
//         pow *=10; 
//     }
//     return ans;//binary form
// }

// int main() {
//     int decNum = 50;

//     cout<< decToBinary(decNum) << endl;

//     return 0;
// }

//Bitwise AND operators
// #include <iostream>
// using namespace std;

// int main() {
//     int a= 4, b = 8;

//     cout<< (a & b) << endl;
//     return 0;
// }
// 
// #include <iostream>
// using namespace std;

// int main() {

//     cout<< (4 << 1) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     cout<< (8 >> 2) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {

    cout<< (8 >> 2) << endl;
    return 0;
} 