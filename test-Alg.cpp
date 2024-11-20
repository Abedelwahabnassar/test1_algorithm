
# include <iostream>
using namespace std;
#include <chrono>
int RecarciveFact(long long n)
{
	if(n==2)
	return 2;
	return n*RecarciveFact(n-1);
}
int ItreativeFact(long long  n)
{
	long long f =1;
	for(int i=2;i<=n;i++)
	f=f*i;
	return f;
}
 int main()
{
	long long n=5;

    auto start_iterative = chrono::high_resolution_clock::now();
    cout << "Iterative Fact: " << ItreativeFact(n) << endl;
    auto end_iterative = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> iterative_time = end_iterative - start_iterative;
    cout << "Iterative Time: " << iterative_time.count() << endl;
    auto start_recursive = chrono::high_resolution_clock::now();
    cout << "Recursive Fact: " << RecarciveFact(n) << endl;
    auto end_recursive = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> recursive_time = end_recursive - start_recursive;
    cout << "Recursive Time: " << recursive_time.count() << endl;
}