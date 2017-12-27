// MD Monirul Islam
// Binary search implementation in iterative function
#include <iostream>
using namespace std;

const int SIZE = 100;

int binary_search(int arr[],int size,int target);

int main()
{
    int size,arr[SIZE],target,result;
    cout << "How Many Elements you would like to insert? ";
    cin >> size;
    cout << "Enter Elements of Array in Ascending order\n";
    
    for(int i= 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> target;
    
    result=binary_search(arr,size,target);
    
    if(result != -1)
        cout << "Element " << target << " found at index " << result << endl;
    else
        cout << "Element is not found....!!!" << endl;
    
    return 0;
}

int binary_search(int arr[],int size,int target)
{
    int first,last,mid;
    first=0;
    last=size - 1;
    
    while(first <= last)
    {
        mid = first + (last-first)/2;
        if(target == arr[mid])
            return mid;
        else
            if(target >arr[mid])
                first = mid+1;
            else
                last = mid-1;
    }
    
    return -1;
}