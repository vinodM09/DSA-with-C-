#include <iostream>
using namespace std;

int findPivot(int arr[], int length){
    int start = 0;
    int end = length-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }

        mid = start+ (end - start)/2;
    }
    return start;

}
int main(){

    int arr[6] = {6, 7, 8, 1, 2, 3};

    int pivot = findPivot(arr, 6);
    cout << pivot << endl;
}