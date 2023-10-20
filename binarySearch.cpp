#include<iostream>
using namespace std;
#define size 5
bool binarySearch(int x,int arr[]){
    int i,first,last,mid;
    first = 0;
    last = size;
    for(i=0;i<=size;i++){
        mid = ((first+last)/2);
        if(x == arr[mid]){
            return true;
        }
        else if(x > arr[mid]){
            first = arr[mid];
        }
        else{
            last = arr[mid];
        }
    }
    return false;
}
int main(){
    int i,arr[size];
    cout<<"Enter elements    :"<<endl;
    for(i=0;i<=size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter a value to search  :"<<endl;
    cin>>key;
    if(!binarySearch(key,arr)){
        cout<<"Your value is not found"<<endl;
    }
    else{
        cout<<"Your value is found"<<endl;
    }
}