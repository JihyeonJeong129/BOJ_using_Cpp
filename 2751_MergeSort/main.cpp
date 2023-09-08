#include <iostream>

void merge(int *arr, int *temp, int left, int right){

    int mid = (left + right)/2;
    int L = left;
    int R = mid+1;
    int k = left;

    while(L <= mid && R <= right){
        if(arr[L] <= arr[R]){
            temp[k++] = arr[L++];
        }

        else{
            temp[k++] = arr[R++];
        }
    }

    if(L > mid){
        for(int i = R; i <= right; i++){
            temp[k++] = arr[i];
        }
    }

     else{
        for(int i = L; i <= mid; i++){
            temp[k++] = arr[i];
        }
    }

    for(int i = left; i <= right; i++){
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int *temp, int left, int right){
    if(left == right)
        return;
    
    int mid = (left + right)/2;

    mergeSort(arr, temp, left, mid);
    mergeSort(arr, temp, mid+1, right);
    merge(arr,temp,left,right);
}

int main()
{
    int n;

    std::cin >> n;

    int *arr = new int[n];

    int *temp = new int[n];

//data(array) input
    for(int i = 0; i < n; i++){
        
        std::cin >> arr[i];
    }

    mergeSort(arr, temp, 0, n-1);

//Print Result
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << "\n";
    }

    delete[] arr;

    delete[] temp;

    return 0;
}
