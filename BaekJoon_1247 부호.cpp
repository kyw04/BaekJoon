#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int tc = 3, n;
	
	while (tc--)
	{
		stack<long long> plus_stack;
		stack<long long> minus_stack;
		long long sum = 0, plus = 0, minus = 0;
		cin >> n;
	
		for (int i = 0; i < n; i++)
		{
			long long input;
			cin >> input;
			
			if (input == 0)
				continue;
			else if (input > 0)
				plus_stack.push(input);
			else
				minus_stack.push(input);
		}
		
		while (!plus_stack.empty() && !minus_stack.empty())
		{
			if (!plus_stack.empty() && !plus)
			{
				plus = plus_stack.top();
				plus_stack.pop();
			}
			
			if (!minus_stack.empty() && !minus)
			{
				minus = minus_stack.top();
				minus_stack.pop();
			}
			
			if (plus && sum <= 0)
			{
				sum += plus;
				plus = 0;
			}
			
			if (minus && sum >= 0)
			{
				sum += minus;
				minus = 0;
			}
		}
		
		while (!plus_stack.empty() && sum <= 0)
		{
			sum += plus_stack.top();
			plus_stack.pop();
		}
		
		while (!minus_stack.empty() && sum >= 0)
		{
			sum += minus_stack.top();
			minus_stack.pop();
		}
		
		if (sum == 0)
			cout << "0\n";
		else if (sum > 0)
			cout << "+\n";
		else
			cout << "-\n";
	}
	
	return 0;
}
