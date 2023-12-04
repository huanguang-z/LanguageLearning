#include<iostream>
using namespace std;
int main(void) {
	long long int n,sum;
	long long int Right,Left;
	int RightFlag, LeftFlag;
	long long int res;
	while (cin>>n) {
		sum = 0;
		Left = 1;
		cin>> RightFlag;
		sum += RightFlag;
		LeftFlag = RightFlag;
		for (Right = 2; Right <= n; Right++) {
			cin >> RightFlag;
			sum += RightFlag;
			if (Right % 2 != 0) {

				if (RightFlag != LeftFlag) {
					Left = Right;
					LeftFlag = RightFlag;
					continue;
				}
				else
					continue;
			}
			if (RightFlag != LeftFlag) {
				if (RightFlag == 0)
					sum -= (Right - Left);
				else
					sum+= (Right - Left);
				Left = Right;
				LeftFlag = RightFlag;
			}
		}
		res = n - sum;
		cout << res << endl;
	}
	return 0;
}