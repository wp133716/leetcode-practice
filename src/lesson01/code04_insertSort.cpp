#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace insertSort
{
    void swap(vector<int> &arr, int i, int j){
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    void printArr(vector<int> arr){
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }

    void code04_insertSort(vector<int> &arr){
        int arrLength = arr.size();
        if(arrLength < 2) return;

        for(int i=1; i<arrLength; i++)
            for(int j=i-1; j>=0 && arr[j]>arr[j+1]; j--)
                    swap(arr, j, j+1);
    }

    void testCode04_insertSort(){
        vector<int> arr = {3, 1, 5, 4, 3, -7, 6, 5, 9, 8};
        printArr(arr);
        code04_insertSort(arr);
        printArr(arr);
    }

} // namespace insertSort