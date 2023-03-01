#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

namespace bubbleSort
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

    void code03_bubbleSort(vector<int> &arr){
        int arrLength = arr.size();
        if(arrLength < 2) return;

        for(int end=arrLength-1; end>=0; end--){
            for(int start=0; start<end; start++){
                if(arr[start]>arr[start+1]) swap(arr, start, start+1);
            }
        }
    }

    void testCode03_bubbleSort(){
        vector<int> arr = {3, 4, 3, -7, 5, 9, 8};
        printArr(arr);
        code03_bubbleSort(arr);
        printArr(arr);
    }

} // namespace bubbleSort