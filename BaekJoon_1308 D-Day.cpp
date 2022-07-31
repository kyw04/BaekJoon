#include <iostream>

using namespace std;

typedef struct _Date
{
	int year;
	int month;
	int date;
}Date;

int monthCount[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int dayCounting(Date chageDate)
{
	int cnt = 0;
	for (int i = 0; i < chageDate.year; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			cnt++;
		cnt += 365;
	}
	
	for (int i = 0; i + 1 < chageDate.month; i++)
	{
		if (i == 1 && (chageDate.year % 4 == 0 && chageDate.year % 100 != 0) || chageDate.year % 400 == 0)
			cnt++;	
		cnt += monthCount[i];
	}
	
	return cnt + chageDate.date;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	Date start;
	Date end;
	
	Date thousand = { 1000, 0, 0 };
	const int THOUSANDDAY = dayCounting(thousand);
	
	cin >> start.year >> start.month >> start.date;
	cin >> end.year >> end.month >> end.date;
	
	int startCount = dayCounting(start);
	int endCount = dayCounting(end);
	int Dday = endCount - startCount;
	
	if (Dday >= THOUSANDDAY || Dday == 0)
	{
		cout << "gg";
	}
	else
	{
		cout << "D-" << Dday;
	}
	
	return 0;
}
