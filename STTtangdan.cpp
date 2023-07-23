#include <iostream>
using namespace std;
 
void input(int a[], int &n){
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"\n-----NHAP MANG---\n";
    for(int i= 0; i<n;i++){
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
 
void InterchangeSort(int a[], int n){   
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j]) 
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
 
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<< arr[i] <<" ";
   cout<<"\n";
}
int main()
{
    int arr[100];
    int n;
 
    input(arr, n);
    InterchangeSort(arr, n);
    cout<<"Sorted array: ";
    printArray(arr, n);
    return 0;
}
