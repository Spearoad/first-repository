#include <iostream>
using namespace std;

int main() {
	int num, line = 0, n = 0, sum = 0, a = 0;
	cin >> num;
	while (sum < num) {//sum이 num보다 커지면 반복해제
		n += 1;
		sum += n;
		line++;//몇 번째 라인인지 찾기
	}

	sum -= n;
	a = num - sum;
	//cout << "line number :" << line << "\n";
	//cout << "a number :" << a << "\n";
	if (line % 2 == 0) { 
		cout << a << "/" << line - (a - 1);
	}
	else {
		cout << line - (a - 1) << "/" << a;
	}
}