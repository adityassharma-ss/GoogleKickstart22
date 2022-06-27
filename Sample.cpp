#include <bits/stdc++.h>
using namespace std;

void candy() {
  
  int N, M;
  
  cin >> N >> M;
  
  int C[N];
  
  for (int i = 0; i < N; i++) {
    cin >> C[i];
  }
  
  int sum = 0;
  
  for (int i = 0; i < N; i++) {
    sum += C[i];
  }
  
  int rc = sum % M;
  
  cout << rc << "\n";
}

int main() {
  
  int T;
  cin >> T;
  
  for (int test_no = 1; test_no <= T; test_no++) {
    
    cout << "Case #" << test_no << ": ";
    
    candy();
  }
}  
