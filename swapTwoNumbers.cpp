#include<iostream>
using namespace std;

void fun(int m, int n, float a, float b){
	cout << "m and n before swap:"<< m << " " << n << "\n";
	swap(m,n);
	cout << "m and n after swap:"<< m << " " << n << "\n";
	cout << "a and b before swap:"<< a << " " << b << "\n";
	swap(a,b);
	cout << "a and b after swap:"<< a << " " << b << "\n";
}

template<class T> void swap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

int main() {
	fun(100, 200, 11.22, 33.44);
	return 0;
}

// ********** Output *********//
// m and n before swap:100 200
// m and n after swap:200 100
// a and b before swap:11.22 33.44
// a and b after swap:33.44 11.22
