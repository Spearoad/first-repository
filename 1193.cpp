#include <iostream>
using namespace std;

int main() {
	int num, line = 0, n = 0, sum = 0, a = 0;
	cin >> num;
	while (sum < num) {//sum�� num���� Ŀ���� �ݺ�����
		n += 1;
		sum += n;
		line++;//�� ��° �������� ã��
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