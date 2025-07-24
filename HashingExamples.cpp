#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

// An array is given, and we need to find the number of occurences of each element in the array
void arrFreq(int arr[], int n){
    // creating a map to store the corresponding the number of occurences for the elemnets in the array
    unordered_map<int, int> mp;  // using unordered map is better since time complexity is lesser than the case of map
    for(int i=0; i<n; i++){
        mp[arr[i]] += 1;
    }

    // Retrieving the values
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}

// Given an array of size N, find the highest and lowest frequency element
void arrFreqHL(int arr[], int n){
    unordered_map<int, int> mp2;
    for(int i=0; i<n; i++){
        mp2[arr[i]] += 1;
    }

    int maxFreq = 0;
    int key_maxFreq = 0;
    int minFreq = n;
    int key_minFreq = 0;

    for(auto it = mp2.begin(); it != mp2.end(); it++){
        if(it->second > maxFreq){
            maxFreq = it->second;
            key_maxFreq = it->first;
        }
    }

    for(auto it = mp2.begin(); it != mp2.end(); it++){
        if(it->second < minFreq){
            minFreq = it->second;
            key_minFreq = it->first;
        }
    }

    cout << "The highest frequency element is: " << key_maxFreq << endl;
    cout << "The lowest frequency element is: " << key_minFreq << endl;
}

int main(){
    int arr[8] = {5, 5, 5, 4, 3, 4, 3, 2};
    arrFreqHL(arr, 8);
    return 0;
}