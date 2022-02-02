#include<iostream>
using namespace std ;
int main(){
int t ;
cin>> t ;
while(t--){
    int m;
    cin>>m ;
    int n ;
    cin>>n ;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>> arr[i];
    }
    for(int i =0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            if(arr[i] + arr[j] == m && i!=j){
                cout<< i+1 << " " << j +1<< " ";
                arr[j] = -234;
                //cout << arr[i]<<" "<<arr[j]<<" ";
            
                 break;
                
            }
           
        }
            
        
    }
    cout<<endl;

}

}
