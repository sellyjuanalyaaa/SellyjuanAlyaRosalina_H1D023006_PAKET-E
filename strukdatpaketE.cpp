#include<iostream>
#include<algorithm>
using namespace std;

//fungsi untuk memeriksa apakah bilangan adalah prima
bool isPrime(int num){
    if(num<=1)return false;
    for(int i=2;i* i<=num;i++){
        if(num%i==0)return false;
    }
    return true;
}
//fungsi mencari nilai array dengan linear search
int linearSearch(int arr[],int n,int x) {
    for(int i=0;i<n;i++) {
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cin>>n>>m;

    int array_A[n];
    int array_B[m];

    //input arrray A
    for(int i=0;i<n;i++){
        cin>>array_A[i];
    }

    //input array B
    for(int i=0;i<m;i++){
        cin>>array_B[i];
    }

    int result[n+m];//meggunakan array untu hasil
    int result_count=0;//counter untuk hasil

    //cari nilai yang memenuhi syarat
    for(int i=0; i<n; i++){
        if(isPrime(array_A[i])&&linearSearch(array_B,m,array_A[i])==-1){
            result[result_count]=array_A[i];
            result_count++;
        }
    }

    //urutkan hasil pencarian
    sort(result,result+result_count);

    //cetak hasil pencarian
    if(result_count==0){
        cout<<"TIDAK ADA"<<endl;
    }else{
        cout<<"yang dicari : ";
        for(int i=0;i<result_count;i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }

}