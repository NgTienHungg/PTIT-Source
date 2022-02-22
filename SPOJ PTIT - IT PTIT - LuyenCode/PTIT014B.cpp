// https://www.spoj.com/PTIT/problems/PTIT014B/
// PTIT014B - 2014 Bài B - Hình chữ nhật

#include <iostream>
using namespace std;

int main()
{
	int K;
	cin >> K;
	for (int i = 1; i <= K; i++)
	{
		long x_A, y_A, u_A, v_A, x_B, y_B, u_B, v_B;
		cin >> x_A >> y_A >> u_A >> v_A >> x_B >> y_B >> u_B >> v_B;
		if ((v_B >= y_A && v_B <= v_A && x_B <= u_A && u_B >= x_A) || (v_B > v_A && y_B <= v_A && x_B <= u_A && u_B >= x_A))
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}