// https://www.spoj.com/PTIT/problems/P175SUME/
// P175SUME - ROUND 5E - Trò chơi với queue

#include <bits/stdc++.h>
using namespace std;

struct Num
{
	int val;
	int cou;
	Num(int val, int cou) : val(val), cou(cou) {}
};

int main()
{
    
    queue<Num> q;
	for (int  i = 1; i <= 5; ++i) {
		q.push(Num(i, 1));
	}

	int n;
    cin >> n;
	while (n > q.front().cou) {
		n -= q.front().cou;
		q.push(Num(q.front().val, q.front().cou * 2));
		q.pop();
	}
	cout << q.front().val;
    return 0;
}