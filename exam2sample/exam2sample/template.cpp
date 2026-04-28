#include <iostream>
#include <string>

using namespace std;

const int ARRAY_LEN = 2;
template<class T>
int search( T a[], int n, T key ) {
  int i;
  for( i = 0; i < n; i++ ) {
  	if ( a[i] == key ) return i;
  }
return -1;
}

int main() {
	string array[ARRAY_LEN] = {"hello", "goodbye"};
    string k = "hello";

	int i = search(array,2,k);
    cout << i << endl;

	return 0;
}