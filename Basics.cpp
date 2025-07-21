#include <iostream>
#include <cmath>
using namespace std;

void printPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void printpattern2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void printpattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void printpattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void printPattern5(int n){
    for(int i=n; i>0; i--){
        for(int j=i; j>0; j--){
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j;
        }
        cout << endl;
    }
}

void printPattern7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<2*i+1; k++){
            cout << "*";
        }
        for(int l=0; l<n-i-1; l++){
            cout << " ";
        }
        cout << endl;
    }
}

// inverted triangular star pattern
void printPattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int k=0; k<2*n - (2*i + 1); k++){
            cout << "*";
        }
        for(int l=0; l<i; l++){
            cout << " ";
        }
        cout << endl;
    }
}

// right angles traingular star symmetrical pattern
void printPattern9(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

// 1 and 0 triangular pattern
void printPattern10(int n){
    for(int i=0; i<n; i++){
        int start;
        if(i%2 == 0){
            start = 1;
        }
        else{
            start = 0;
        }
        for(int j=0; j<=i; j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

// number space number format
void printPattern11(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << j+1;
        }

        for(int k=0; k<2*(n-1)-2*i; k++){
            cout << " ";
        }

        for(int l=i+1; l>0; l--){
            cout << l;
        }
        cout << endl;
    }
}

// natural numbers in a right triangular fasion
void printPattern12(int n){
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

// alphabets starting from A in each row
void printPattern13(int n){
    for(int i=0; i<n; i++){
        for(char letter = 'A'; letter <= 'A'+i; letter ++){
            cout << letter;
        }
        cout << endl;
    }
}

void printPattern14(int n){
    for(int i=0; i<n; i++){
        for(char letter = 'A'; letter <= 'A'+n-(i+1); letter++){
            cout << letter;
        }
        cout << endl;
    }
}

// one alphabet in each row according to i number
void printPattern15(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            char l = 'A'+i;
            cout << l;
        }
        cout << endl;
    }
}

void printPattern16(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }

        for(int k=0; k<(2*i+1)/2; k++){
            char letter = 'A'+k;
            cout << letter;
        }
        for(int m=(2*i+1)/2; m>=0; m--){
            char letter = 'A'+m;
            cout << letter;
        }

        for(int l=0; l<n-i-1; l++){
            cout << " ";
        }
        cout << endl;
    }
}

// alphabets starting off as E-i as a right triangle pattern
void printPattern17(int n){
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            char l = 'A'+n-1 - j;
            cout << l;
        }
        cout << endl;
    }
}

// stars space stars where space forms a diamond
// you need to take n=5; so it needs to be done again
void printPattern18(int n){
    // first half
    for(int i=0; i<n/2; i++){
        //stars
        for(int j=0; j<n/2-i; j++){
            cout << "*";
        }

        //space
        for(int k=0; k<2*i; k++){
            cout << " ";
        }

        //stars
        for(int l=0; l<n/2-i; l++){
            cout << "*";
        }
        cout << endl;
    }

    // second half
    for(int i=n/2; i<n; i++){
        //stars
        for(int j=0; j<=i-n/2; j++){
            cout << "*";
        }

        //space
        for(int k=0; k<n-2*(i-4); k++){
            cout << " ";
        }

        //stars
        for(int l=0; l<=i-n/2; l++){
            cout << "*";
        }
        cout << endl;
    }
}

// Basic Maths
// tell the number of digits in the given number
// time complexity = O(log(N))
int count(int n){
    int digitcount = 0;
    while(n>0){
        int last_digit = n%10;
        digitcount= digitcount+1;
        n = n/10;
    }
    cout << digitcount;
}

// reversing the given number, and not including the trailing zeroes in the end if given so
int reverse(int n){
    int revNum=0;
    while(n>0){
        int last = n%10;
        n = n/10;
        revNum = revNum*10 + last;
    }
    cout << revNum;
}

// palindrome sequence
void palindrome(int n){
    int dupli = n;
    int revNum=0;
    while(n>0){
        int last = n%10;
        n = n/10;
        revNum = revNum*10 + last;
    }
    if(revNum == dupli){
        cout << "true";
    }
    else{
        cout << "false";
    }
}

// checking for armstrong numbers
void armstrong(int n){
    int digicount = 0;
    int temp = n;
    while(temp>0){
        digicount = digicount + 1;
        temp = temp/10;
    }

    int dupli = n;
    int cube_sum = 0;
    while(n>0){
        int last = n%10;
        cube_sum = cube_sum + pow(last, digicount);
        n = n/10;
    }
    
    if(cube_sum == dupli){
        cout << "true";
    }
    else{
        cout << "false";
    }
}

// print all divisors
void alldivisors(int n){
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
}

// check if a number is prime or not
void checkPrime(int n){
    int count = 0;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            count = count + 1;
            if(n/i != i){
            count = count +1;
            }
        }
    }
    if(count == 2){
        cout << "True";
    }
    else{
        cout << "False";
    }
}

// GCD or HCF
void printgcd(int n1, int n2){
    for(int i = min(n1, n2); i>0; i--){
        if(n1%i == 0 && n2%i == 0){
            cout << i;
            break;
        }
    }
}


// Recursion
// Print name n times using recursion
void printName(int i, int n){
    if(i > n){
        return;
    }
    cout << "Gokul" << endl;
    printName(i+1, n);
}

// Print 1 to n using Recursion
void printNum(int i, int n){
    if(i > n){
        return;
    }
    cout << i << endl;
    printNum(i+1, n);
}

// Print n to 1 using recursion
void printNumRev(int i, int n){
    if(i<1){
        return;
    }
    cout << i << endl;
    printNumRev(i-1, n);
}

// sum of n numbers using Recursion
// Parametrised Way
int printSump(int i, int sum){
    if(i < 1){
        return sum;
    }
    printSump(i-1, sum+i);
}
// Functional Way
int printSumf(int n){
    if(n == 0){
        return 0;
    }
    return n + printSumf(n-1);
}

// Factorial of a number n
// Iterative way
int ifactorial(int n){
    int prod = 1;
    for(int i=n; i>0; i--){
        prod = prod*i;
    }
    return prod;
}
// Recursive Way
int rfactorial(int i, int n){
    if(i == 0){
        return 1;
    }
    return i*rfactorial(i-1, n);
}

// Reverse a given array
// 1. Space optimized iterative method
void revArray(int arr[], int n){
    int p1 = 0, p2 = n-1;
    while(p1<p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

// 2. Recursive method
void revArrayrec(int arr[], int start, int end){
    if(start>end){
        return;
    }
    swap(arr[start], arr[end]);
    revArrayrec(arr, start+1, end-1);
}

// Check if a string is palindrome or not
// Recursive method
bool palindrome(string &s, int i){
    // base condition
    if(i>=s.length()/2){
        return true;
    }
    // if the start is not equal to the end
    if(s[i] != s[s.length()-i-1]){
        return false;
    }
    // if start and end are equal, then proceed to the next iteration
    palindrome(s, i+1);
}

// Printing Fibonacci Series upto Nth term using recursion (multiple function calls)
int fibonacci(int n){
    // base condition
    if(n<=1){
        return n;
    }

    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);

    return last + slast;
}


int main(){
    // int n = 5;
    // int arr[] = {5, 4, 3, 2, 1};
    // revArrayrec(arr, 0, n-1);
    // printArray(arr, n);

    int n;
    cout << "Input your number: ";
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
