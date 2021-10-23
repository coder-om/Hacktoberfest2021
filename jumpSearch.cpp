/* Jump Search is a searching algorithm for sorted array with a time complexity y of O(sqrt(n)) and space complexity  of O(1)*/
#include<iostream>
#include<math.h>
using namespace std;
int jump_search(int arr[] , int n , int s ){
  int start = 0;
   int m = sqrt(n); //initializing size of jump block

   while(arr[m] <= s && m < n) {
      // the control will continue to jump the blocks
      start = m;  // shift the block
      m += sqrt(n);
      if(m > n - 1)  // if m exceeds the array size
         return -1;
   }

   for(int i = start; i<m; i++) { //linear search in current block
      if(arr[i] == s)
         return i; //returning position of element
   }
   return -1;
}
int main (){
int n;
	cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++)
    cin>>arr[i];
    int x ;
    cin>>x;
    int index = jump_search(arr, n, x);
    if(index < 0) cout<<"\nNumber "<<x<<" not found"<<endl;
    else cout << "\nNumber " << x << " is at index " << index;
    return 0;

}
