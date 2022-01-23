// Output the largest value of mean(P)+mean(Q)
// Problem Link: https://www.codechef.com/problems/MEANMAX
// Solution Link: https://www.codechef.com/viewsolution/56986689
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	    int N;
	    cin >> N;
	    int A[N];
	    double sum = 0.0;
	    for (int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	        sum += A[i];
	    }
	    
	    for (int i = 0; i < N-1; i++)
	    {
	        for (int j = i+1; j < N; j++)
	        {
	            if (A[j] < A[i])
	            {
	                int temp = A[j];
	                A[j] = A[i];
	                A[i] = temp;
	            }
	        }
	    }
	    
	    double tempSum = 0.0, mean1 = 0.0, mean2 = 0.0, maxMean = 0.0;
	    for (int i = 0; i < N; i++)
	    {
	        tempSum += (double)A[i];
	        mean1 = (double)tempSum/(i+1);
	        mean2 = (double)(sum-tempSum)/(N-i-1);
	        if (maxMean < mean1+mean2)
	            maxMean = mean1+mean2;
	    }
	    printf("%.6f\n", maxMean);
	}
	return 0;
}
