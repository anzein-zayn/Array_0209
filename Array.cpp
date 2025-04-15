#include<iostream>
using namespace std;

//Create main and temporary array
int arr[20], B[30];
int n;

void input() {
    while (true){
        cout << "Enter the Number of Elements ";
        for (int i = 0;i < n; i++);
        cin >> arr[i];
    }
}

//Create function to merge two sorted arrays
void mergesort (int low, int high) {//step 1
    if (low >= high){
        return; //1.a
    }    
       