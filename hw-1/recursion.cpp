#include <iostream>

using namespace std;

int main(){
  int T;
  
  // Read the number of instances to test.
  cin >> T;
  
  // Do for every instance set.
  for(int k = 1; k <= T; ++k){
    
    // Define all variables needed for instance set calculations.
    int i;
    long long A, B, C, D;
    long long R, R_n_min_1, R_n_min_2;
    
    // Read necessary values for instance set.
    cin >> i;
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    
    // Calculate R with a loop.
    R_n_min_2 = A;
    R_n_min_1 = B;
    
    if(i == 0){
      R = A;
    } else if (i == 1){
      R = B;
    } else {
      for(int m = 1; m < i; ++m){
        R = C * R_n_min_1 + D * R_n_min_2;
        R_n_min_2 = R_n_min_1;
        R_n_min_1 = R;
      }
    }
    
    // Print the solution of the current test instance set.
    cout << R << endl;
  }
  
  return 0;
}