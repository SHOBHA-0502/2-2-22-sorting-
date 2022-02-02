// #include <bits/stdc++.h>
// using namespace std;

// void replacePiHelper(char str[], int start)
// {
//     if (str[start] == '\0' || str[start + 1] == '\0') {
//         return;
//     }
//     replacePiHelper(str, start + 1);
//     if (str[start] == 'p' && str[start + 1] == 'i') {
//         for (int i = strlen(str); i >= start + 2; i--) {
//             str[i + 2] = str[i];
//         }
//         str[start] = '3';
//         str[start + 1] = '.';
//         str[start + 2] = '1';
//         str[start + 3] = '4';
//     }
// }
// void replacePi(char str[])
// {
//     replacePiHelper(str, 0);
// }
 
//     int main() {
//     int size = 1e6;
//     char str[size];
//     cin.getline(str, size);
//     replacePi(str);
//     cout << str;
// }
    
// #include<iostream>
// #include<string>
// using namespace std;

//  void  ReplacePi(string input, string output, int i){
//     if (i == input.length() - 1||i == input.length() ){
//         cout<<output<<endl;
//         //return output;
//     }

//     if(input[i] == 'p' && input[i+1]== 'i'){
//         output = output + '3' +'.' + '1' + '4';
//         //cout<<output<<">>" <<endl;
//         ReplacePi(input, output, i+2);
//     }  
//     else {
//         output = output + input[i];
//         //cout<<output<<"//"<<endl;
//         ReplacePi(input, output, i+1);    
//     }
// }


// int main () {
//     string input, output = "";
//     getline(cin, input);
//     int i = 0;
//     ReplacePi(input, output, i);
//     return 0;
// }
// #include<iostream>
// using namespace std ;
// int main(){
//     int n ; 
//     cin>>n ;
//     int arr[n];
//     for(int i=0; i<n ;i++){
//         cin>>arr[i];
//     }
//     int max= arr[0];
//     for(int i =1; i<n ;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     cout<<max;
//     return 0;
// }
// #include<iostream>
// using namespace std ;
// int main(){
//     long long int n ;
//     cin>>n ;
//     int arr[n];
//     long long int sum =0 ;
//     for(int i =0 ;i<n ; i++){
//         sum += arr[i];
        
//     }
//     cout<<sum;
// }
// #include <iostream>
// using namespace std;

// int pairSum(int *input, int size, int x)
// {
//  int n  = size ;
//  int count =0 ;
//    for(int i =0 ; i<n ; i++){
//        for(int j = i +1 ; j <n ; j++ ){
//            if(input[i] + input[j] ==x){
//                count ++;
//                cout<< cou
//            }
// }
//    }
//   cout<< count ;
 
// }

// int main()
// {
// 	int t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		int size;
// 		int x;

// 		cin >> size;
// 		int *input = new int[size];

// 		for (int i = 0; i < size; i++)
// 		{
// 			cin >> input[i];
// 		}

// 		cin >> x;

// 		cout << pairSum(input, size, x) << endl;

// 		delete[] input;
// 	}
	
// 	return 0;
// }
// #include<iostream>
// using namespace std ;
// int main(){
// 	int n ;
// 	cin>>n ;
// 	int arr[n];
// 	for(int i =0 ; i<n ; i++){
// 		cin >> arr[i];

// 	}
// 	for(int j =0 ; j< n-1 ; j++){
// 	for(int i =0 ; i<n-j; i++){
// 		if(arr[i]>arr[i+1]){
// 			int temp ;
// 			temp = arr[i];
// 			arr[i] = arr[i+1];
// 			arr[i+1] = temp ;
// 		}
// 	}
// 	}

// 	for(int i =0 ; i<n ; i++){
// 		cout<<arr[i] <<" ";

// 	}

// }
#include<iostream>
using namespace std ;

int main(){
    int n ; 
	cin>>n;
    int arr[n];
    int j ;
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    
//     for(int i=1 ; i<n ; i++){
//         int current = arr[i];
//         j = i-1;
//         while(arr[j]>current && j<=0){
//             arr[j+1]= arr[j];
// 			j--;
//         }
//         arr[j+1] = current ;
//     }
// 	for(int i =0 ; i<n ; i++){
//             cout<< arr[i] << " ";
    
// }
for(int i =0 ; i<n ; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
	    for(int i =0 ; i<n ; i++){
        cout<< arr[i] << " ";
     }
	 cout<<endl;
    }


		for(int i =0 ; i<n ; i++){
           cout<< arr[i] << " ";
     }
    
}
