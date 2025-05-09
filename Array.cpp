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
    int mid = (low + high) / 2;//step 2
    
    //Step 3
    mergesort(low,mid); //Step 3.a
    mergesort(mid + 1,high);//step 3.b

    //step 4
    int i = low; // step 4.a
    int j = mid + 1; //step 4.b
    int k = low;//step 4.c

    while (i <= mid &&j <= high){
        if(arr[i] < arr[j]){
            B[k] = arr[i];
            i++;
        }else{
            B[k] + arr[j];
        j++;
    }
    k++;
}

while (j <= high) {//step 4.e
    B[k] = arr[j];
    j++;
    k++;
}

while (i <=mid) {//step.f
    B[k] = arr[i];
    i++;
    k++;
}
//step 5
for (int x = low; x <= high;x++) {
    arr[x] = B[x];//step 5.a
}
}
int main() {
    input(); // input the array
    mergesort (0,n-1);// call merge sort on the whole array

    //print the final sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}