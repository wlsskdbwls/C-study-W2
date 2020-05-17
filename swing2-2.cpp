#include <iostream>

int main()
{
	using namespace std;
	int num, i, j, k;

	do
	{
		cout << endl<<"--------별 찍기 시스템--------" << endl;
		cout<<"1. 직각삼각형" << endl;
		cout<<"2. 정삼각형" << endl;
		cout<<"3. 나비" << endl;
		cout<<"4. 나가기"<< endl;

		cout<<"만들고 싶은 모양을 선택해주세요.";
		cin >> num; //만들고 싶은 모양에 해당하는 숫자를 키보드로 입력 받는다.

		switch (num) // switch~case문을 사용하여 여러 개 중 하나를 선택할 수 있도록 한다.
		{
		case 1:
			cout << endl<<"직각삼각형을 선택하셨습니다." << endl;
			cout<< "행의 개수를 선택해주세요.";
			cin>>k; //k는 행의 개수를 입력하는 변수

			for (i = 0; i < k; i++) //오른쪽 아래가 직각인 직각삼각형
			{
				for (j = 0; j < k - 1 - i; j++)
					cout<<" ";
				for (j = 0; j <= i; j++)
					cout<<"*";
				cout << endl;
			}

			 cout << endl;
			
			 for (i = 0; i < k; i++) //왼쪽 위가 직각인 직각삼각형
			{
				for (j = 0; j < k - i; j++)
					cout<<"*";

				cout << endl;
			}

			 cout << endl;

			for (i = k - 1; i >= 0; i--) //오른쪽 위가 직각인 직각삼각형
			{
				for (j = 0; j < k - 1 - i; j++)
					cout<<" ";
				for (j = 0; j <= i; j++)
					cout<<"*";
				cout << endl;
			}
			break; //switch~case문에서 break를 사용하여, 나머지 case까지 출력되지 않도록 한다.

		case 2:
			cout<<endl<<"정삼각형을 선택하셨습니다."<< endl;
			cout<<"행의 개수를 선택해주세요.";
			cin>>k;

			for (i = 0; i < k; i++)
			{
				for (j = 0; j < k - 1 - i; j++)
					cout<<" ";
				for (j = 0; j < i * 2 + 1; j++)
					cout<<"*";
				cout << endl;
			}
			break;

		case 3:
			cout<<endl<<"나비를 선택하셨습니다." << endl;
			do // do~while문을 사용하여 입력된 수가 홀수가 아닌 경우에 "홀수를 입력하세요:"라는 문구가 출력되도록 한다.
			{
				cout<<"홀수를 입력하세요:";
				cin>>k;
			} while (k % 2 == 0 || k == 1);

			for (i = 1; i < k / 2 + 1; i++)
			{
				for (j = 1; j <= i; j++) 
					cout<<"*";
				for (j = 1; j <= k - i * 2; j++) 
					cout<<" ";
				for (j = 1; j <= i; j++) 
					cout<<"*";

				cout << endl;
			}

			for (j = 1; j <= k; j++)
				cout<<"*";
			cout << endl;

			for (i = k / 2; i > 0; i--)
			{
				for (j = 1; j <= i; j++)
					cout<<"*";
				for (j = 1; j <= k - i * 2; j++)
					cout<<" ";
				for (j = 1; j <= i; j++)
					cout<<"*";
				cout << endl;
			}
			break;

		case 4:
			cout << endl<<"나가기를 선택하셨습니다."<< endl; //4를 입력해야 탈출할 수 있음
			cout<< "감사합니다.";


		}
	} while (num != 4); //입력하는 숫자가 4가 아니라면 계속 반복한다.
}