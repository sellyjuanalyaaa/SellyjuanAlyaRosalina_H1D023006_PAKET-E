#include <iostream>
#include<stack>
using namespace std;
  stack<int> ganjilStack;
    int arr[]={13,11,9,7,5,3,1};
    int n;
    int count=0;

// Fungsi cetak
void printGanjilStack(stack<int>n) {
    while(!n.empty()){
        cout << n.top()<<" ";
        n.pop();
    }cout<<endl;
}
int main(){ 
cin>>n;
    // masukkan bilangan ganjil dari array ke dalam stack
    if(count==0){
        for(int i=0;i<7;i++){
            if(arr[i]%2!=0) {
                ganjilStack.push(arr[i]);
            }
        }
    }
    //mencetak isi stack ganjil
    printGanjilStack(ganjilStack);
}
