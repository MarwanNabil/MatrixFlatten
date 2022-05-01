#include<bits/stdc++.h>
 
using namespace std;

const int N = 5;
const int M = 5;
const int P = 5;

int toOneDimension(int i , int j , int k) {
    return (k * N * M) + (j * N) + i;
}

int* toThreeDimension(int idx) {
	static int arr[3] = {0};
    arr[2] = idx / (N * M);
    idx -= (arr[2] * N * M);
    arr[1] = idx / N;
    arr[0] = idx % N;
    return arr;
}

int main() {
	cout << toOneDimension(1 , 3 , 1) << endl;
	int *p = toThreeDimension(41);
	cout << p[0] << " " << p[1] << " " << p[2] << endl;
    return 0;
}
/*
 * {1 , 3 , 1} = 41
 * */
