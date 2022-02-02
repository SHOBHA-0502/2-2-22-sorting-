#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long int n ;
    cin>>n;
    int j ;
    int arr[n];
    int current;
    
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    for(int i = 1;i<n ; i++){
         current = arr[i];
        j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
            
        }
        arr[j+1] = current;
    }
    // for(int i =0 ; i<n ; i++){
    //     cout<< arr[i]<< " ";
    // }


 long int min = INT_MAX;
    int x ;
    for(int i =0 ; i<n ; i++){
        x  = ((arr[i+1])-(arr[i]));
          x = abs(x);
    
        if(x < min ){
            min = x ;
        }
        
    }
    // cout<< min<< "??";
    for(int i =0 ; i<n ; i++){
        if( min ==  abs(arr[i+1] - arr[i] )){
            cout<< arr[i]<< " " << arr[i+1] <<" ";
        }  
     
     }
}



