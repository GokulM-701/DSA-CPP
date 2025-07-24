#include <iostream>
#include <map>
using namespace std;

// Hashing in Numbers
// Hashing is used in problems like given an array of numbers, and some queries like [1, 2, 3, 4], and for each query we need to find out how many times each number occurs in the array
// Brute force method (using for loop)
int bfMethod(int arr[], int query){
    int cnt = 0;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]==query){
            cnt = cnt + 1;
        }
    }
    return cnt;
}
// Time complexity - O(Q*N), where Q = number of queries, N number of times the loop runs

// Hashing for query of numbers
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Precompute
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] = hash[arr[i]] + 1;
    }

    // giving number q, which is the number of queries which we are gonna ask the system
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetching
        cout << hash[number] << endl;
    }
    return 0;
}
// The problem is there is a maximum limit fot the size of the array which we declare.

// Hashing in Characters
// Given a string, and a query of characters like alphabets, the code needs to answer how many instances of the character are present in the string
// Brute force method
int BFchar(string s, char c){
    int cnt = 0;
    for(int i=0; i<sizeof(s)/sizeof(s[0]); i++){
        if(s[i] == c){
            cnt = cnt + 1;
        }
    }
    return cnt;
}

// Hashing method
int main(){
    string s;
    cin >> s;

    // precompute
    // if there are only small case alphabets or only large case alphabets, use number of elemnts in hash array as 26. If both type of alphabets are present, use 256. This 256 can be used even for previous cases too. 
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    // asking queries
    int q;
    cout << "Type your number of queries: ";
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c-'a'] << endl;
    }
    return 0;
}

// Hashing in numbers using map and unordered map
// If we are trying to fetch the value of a key that does not exist in the map, the map will always return 0 in C++
// For the characters, the syntax will remain the same
int main(){
    int n;
    cout << "Type your number n: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]] += 1;
    }

    //queries
    int q;
    cin >> q;
    while(q--){
        int number;
        cout << "Type your number: ";
        cin >> n;

        //fetch
        cout << mp[number] << endl;
    }
    return 0;
}
/*
Time complexity = O(N*time taken by map data structure)
Storing and fetching in a C++ map takes O(logN) where N - size of the map.
But unordered map takes O(1) for storing and fetching, so it is valid for best and average case scenario
*/
