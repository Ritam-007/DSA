#include<iostream>
using namespace std;
#define size 5
bool linearSearch(int x,int Arr[]){
    int j;
    for(j=0;j<size;j++){
        if(Arr[j]==x){
            return true;
        }
    }
    return false;
}
int main(){
    int i,key;
    int arr[size];
    cout<<"Enter values :";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter a key value to find    :"<<endl;
    cin>>key;
    if(linearSearch(key,arr)){
        cout<<"Your element is found"<<endl;
    }
    else{
        cout<<"Your element is not found"<<endl;
    }
    return 0;
}