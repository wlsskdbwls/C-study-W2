#include <iostream>

using namespace std;

int main()
{
	int num[5], i; //5개의 변수를 담은 정수형 배열 선언
	int odd = 0; //홀수의 개수
	int even = 0; //짝수의 개수


	cout<<"숫자를 입력해주세요: ";  //숫자를 하나씩 입력한다
	cin >> num[0];
	cout << "숫자를 입력해주세요: ";
	cin >> num[1];
	cout << "숫자를 입력해주세요: ";
	cin >> num[2];
	cout << "숫자를 입력해주세요: ";
	cin >> num[3];
	cout << "숫자를 입력해주세요: ";
	cin >> num[4];

	for (i = 0; i <= 4; i++)
	{
		if (num[i] % 2 == 0) //변수가 짝수일 때
			even++; //even= even+1 → 짝수의 개수가 하나씩 증가

		else //변수가 홀수일때
			odd++; //odd= odd+1 → 홀수의 개수가 하나씩 증가

	}

	cout<< endl<<"---------결과---------"<< endl;
	cout<<"홀수:";
	for (i = 0; i <= 4; i++)
	{
		if (num[i] % 2 == 0)
			continue; //변수가 짝수인 경우에는 아래에 있는 것을 출력하지 않고, 다시 반복문의 처음으로 올라간다.
		              
		cout<< num[i] <<" "; //즉, 홀수만 출력한다.
	}
	cout<< endl<<"홀수는 총 "<<odd<<"개 입니다."<< endl<< endl;

	cout<<"짝수:";
	for (i = 0; i <= 4; i++)
	{
		if (num[i] % 2 != 0)
			continue; //변수가 홀수인 경우에는 아래에 있는 것을 출력하지 않고, 다시 반복문의 처음으로 올라간다.

		cout<< num[i] << " "; //즉, 짝수만 출력한다.
	}
	cout << endl << "짝수는 총 "<<even<<"개 입니다."<< endl << endl;

}

