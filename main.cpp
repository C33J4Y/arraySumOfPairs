#include <iostream>
using namespace std;

/*Find a pair of numbers in an array that adds to a given sum

int arr[] = {2, 4, 7};
int sum = 9;
*/

int main() {
  int arr[4] = {2,6,8,3};
  int sum = 8;
  int index = 0;
  
while(index < 4){
  for(int i = index+1; i < 4; i++){
    if(arr[index]+arr[i]==sum){
      cout << arr[index] << " " << arr[i] << endl;
      
    }
   
  }
  
  index++;
}
}