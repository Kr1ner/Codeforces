#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int start,int end){
    int pivot = a[start];
    int cnt = 0;
    for(int i=start+1;i<=end;i++){
        if(a[i]<=pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = start + cnt;
    swap(a[pivotIndex], a[start]);
 
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (a[i] <= pivot) {
            i++;
        }
 
        while (a[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(a[i++], a[j--]);
        }
    }
 
    return pivotIndex;
}

void quicksort(int a[],int start,int end){
    if(start>=end){
        return;
    }
    int p = partition(a,start,end);
    quicksort(a,start,p-1);
    quicksort(a,p+1,end);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        quicksort(a,0,sizeof(a)-1);
        for(int i =0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
}