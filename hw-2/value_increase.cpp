#include <iostream>

using namespace std;

int main(){
  int T;
  
  // Read the number of instances to test.
  cin >> T;
  
  // Do for every instance set.
  for(int k = 1; k <= T; ++k){

    // Read number of value points to read in.
    int n;
    cin >> n;

    // Read in value points for this test round.
    int data_points[n];
    for(int j = 0; j < n; ++j){
      cin >> data_points[j];
    }

    // Define variables needed to calculate the highest delta.
    int previous_increase = 0;
    int highest_value = 0;

    for(int i = 0; i < n; ++i){

      // Calculate the delta of the outcome when the newest value gets added.
      int temp_diff = previous_increase + data_points[i];

      // If value gets larger then append it.
      if(temp_diff > previous_increase){
        previous_increase = temp_diff;
        if(previous_increase > highest_value){
          highest_value = previous_increase;
        }
      } else if(temp_diff > 0){ // temp_diff is falling but still above zero.
        previous_increase = temp_diff;
      } else { // If applied delta lets the increase fall below zero, reset previous_increase.
        previous_increase = 0;
      }
    }

    cout << highest_value << endl;

    // Print the solution of the current test instance set.
    // cout << R << endl;
  }
  
  return 0;
}