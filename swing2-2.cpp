#include <iostream>

int main()
{
	using namespace std;
	int num, i, j, k;

	do
	{
		cout << endl<<"--------�� ��� �ý���--------" << endl;
		cout<<"1. �����ﰢ��" << endl;
		cout<<"2. ���ﰢ��" << endl;
		cout<<"3. ����" << endl;
		cout<<"4. ������"<< endl;

		cout<<"����� ���� ����� �������ּ���.";
		cin >> num; //����� ���� ��翡 �ش��ϴ� ���ڸ� Ű����� �Է� �޴´�.

		switch (num) // switch~case���� ����Ͽ� ���� �� �� �ϳ��� ������ �� �ֵ��� �Ѵ�.
		{
		case 1:
			cout << endl<<"�����ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout<< "���� ������ �������ּ���.";
			cin>>k; //k�� ���� ������ �Է��ϴ� ����

			for (i = 0; i < k; i++) //������ �Ʒ��� ������ �����ﰢ��
			{
				for (j = 0; j < k - 1 - i; j++)
					cout<<" ";
				for (j = 0; j <= i; j++)
					cout<<"*";
				cout << endl;
			}

			 cout << endl;
			
			 for (i = 0; i < k; i++) //���� ���� ������ �����ﰢ��
			{
				for (j = 0; j < k - i; j++)
					cout<<"*";

				cout << endl;
			}

			 cout << endl;

			for (i = k - 1; i >= 0; i--) //������ ���� ������ �����ﰢ��
			{
				for (j = 0; j < k - 1 - i; j++)
					cout<<" ";
				for (j = 0; j <= i; j++)
					cout<<"*";
				cout << endl;
			}
			break; //switch~case������ break�� ����Ͽ�, ������ case���� ��µ��� �ʵ��� �Ѵ�.

		case 2:
			cout<<endl<<"���ﰢ���� �����ϼ̽��ϴ�."<< endl;
			cout<<"���� ������ �������ּ���.";
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
			cout<<endl<<"���� �����ϼ̽��ϴ�." << endl;
			do // do~while���� ����Ͽ� �Էµ� ���� Ȧ���� �ƴ� ��쿡 "Ȧ���� �Է��ϼ���:"��� ������ ��µǵ��� �Ѵ�.
			{
				cout<<"Ȧ���� �Է��ϼ���:";
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
			cout << endl<<"�����⸦ �����ϼ̽��ϴ�."<< endl; //4�� �Է��ؾ� Ż���� �� ����
			cout<< "�����մϴ�.";


		}
	} while (num != 4); //�Է��ϴ� ���ڰ� 4�� �ƴ϶�� ��� �ݺ��Ѵ�.
}