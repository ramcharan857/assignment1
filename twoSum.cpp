#include <iostream>
#include <bits/stdc++.h>
#include <array>
using namespace std;

// Two Sum
vector<int> twosum(int a[], int target, int n){
   sort(a, a+n);
   vector<int> res;
   int i = 0;
   int j = n-1;
   while (i < j){
    if (a[i] + a[j] == target){
      return  {i,j};
    }
    else if (a[i] + a[j] > target)
    {
      j--;
    }
    else{
      i++;
    }
    
   }
   return {};

}

// Main Logic
int main(){
  int a[] = {1, 2, 4 ,7 ,9};
  int target = 9;
  vector<int> res = twosum(a, target, 5);
  cout << "The indices are: " << endl;
  for (size_t i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;
  return 0;
  }