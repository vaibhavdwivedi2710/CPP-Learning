#include<bits/stdc++.h>
using namespace std;
void print(pair < int, string > & p) {
  cout << "first element is: " << p.first << " second element is: " << p.second << endl;
}
int main(){
    // Pair of different data types.
  pair < int, string > p1;

  pair < int, string > p2;
  // Pair of same data type.
  pair < int, int > p3(10, 20);

  // make_pair function.
  p1 = make_pair(1, "one");
  p2 = make_pair(2, "second");

  cout << "printing elements of pair\n";
  print(p1);

  print(p2);

  cout << endl;
  // Swapping pairs.
  p1.swap(p2);

  cout << "printing elements after pairs\n";
  print(p1);
  print(p2);
  cout << endl;

  // tie pair STL function.
  int x, y;
  tie(x, y) = p3;

  cout << "printing elements of pair p3 \n";
  cout << "first element is: " << p3.first << " second element is: " << p3.second << endl;
  return 0;
}