#include <bits/stdc++.h>
using namespace std;
int main(){
            int n;
            cin>> n; 
            int arr[n];
            int j ;
            for(int i =0 ; i<n ; i++){
             cin>> arr[i];
            }
            for(int i =1 ; i<n ;i++){
                int current = arr[i];
                j = i -1;
                while(arr[j]>current && j>=0){
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = current ;
            }
            
            int m = n/2;
            cout<< arr[m]; 
}