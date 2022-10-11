#include <iostream>
#include <vector>
#define MAX 100000

using namespace std;

struct Member
{
	int age;
	string name;
	
	bool operator <= (Member a)
	{
		return age <= a.age;
	}
};

Member sorted[MAX];

template <typename T>
void merge(vector<T>& list, int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;
	
	while (i <= mid && j <= right)
	{
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}
	
	if (i > mid)
	{
		for (int l = j; l <= right; l++)
			sorted[k++] = list[l];
	}
	else
	{
		for (int l = i; l <= mid; l++)
			sorted[k++] = list[l];
	}
	
	for (int l = left; l <= right; l++)
		list[l] = sorted[l];
}

template <typename T>
void merge_sort(vector<T>& list, int left, int right)
{
	int mid;
	
	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector<Member> members;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int _age;
		string _name;
		cin >> _age >> _name;
		
		Member input = { _age, _name };
		members.push_back(input);
	}
	
	merge_sort(members, 0, n - 1);
	
	for (int i = 0; i < n; i++)
	{
		cout << members[i].age << ' ' << members[i].name << '\n';
	}
	
	return 0;
}
