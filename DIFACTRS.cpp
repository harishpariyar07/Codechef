// You are given a number N and find all the distinct factors of N
// Problem Link: https://www.codechef.com/CCSTART2/problems/DIFACTRS
// Solution Link: https://www.codechef.com/viewsolution/56846734
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	int count = 0;
	for(int i = 1; i <= N; i++)
	{
	   if (N % i == 0) 
	   {
	       count++;
	   }
	}
	cout << count << endl;
	for (int i = 1; i <= N; i++)
	{
	    if (N % i == 0) cout << i << " ";
	}
	cout << endl;
	return 0;
}
