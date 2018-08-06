#include <iostream>
#include <string.h>
using namespace std;

int m, n, sum;
bool num[10001];

int main()
{
	int min;				// 전역변수로 선언할 시 모호함이 존재 -> 왜그런진 모르겠음(함수 때문인가?)
	memset(num, 1, 10001);
	num[0] = false; num[1] = false;
	for(int i = 2; i <= 10000; i++)
		if (num[i]) for (int j = i * i; j <= 10000; j += i) num[j] = false;
	cin >> m >> n;
	for (int i = n; i >= m; i--)
		if (num[i]) {
			sum += i;
			min = i;
		}
	if (sum == 0)  cout << -1;
	else {
		cout << sum << endl;
		cout << min;
	}
	return 0;
}