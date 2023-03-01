#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace selectSort
{
    void swap(vector<int> &arr, int i, int j){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    void printArr(vector<int> arr){
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i];
        }
        cout<<endl;
    }

    void code02_selectSort(vector<int> &arr){
        int arrLength = arr.size();
        if(arrLength < 2) return;

        // for(int i=0; i<arrLength; i++){
        //     for(int j=i+1; j<arrLength; j++){
        //         if(arr[i]>arr[j]) swap(arr, i, j);
        //     }
        // }
        for(int i=0; i<arrLength; i++){
            int minValueIndex = i;
            for(int j=i+1; j<arrLength; j++){
                minValueIndex = arr[j] < arr[minValueIndex] ? j : minValueIndex; 
            }
            swap(arr, i, minValueIndex);
        }
    }

    void testCode02_selectSort(){
        vector<int> arr = {3, 4, -7, 3, 5, 9, 8};
        printArr(arr);
        code02_selectSort(arr);
        printArr(arr);
    }

} // namespace selectSort