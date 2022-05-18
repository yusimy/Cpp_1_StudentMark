#include <iostream>

using namespace std;

int main ()
{
	
	int student_mark;
	while (true)
	{
		cout<<"Enter student's mark: ";
		cin>>student_mark;
	
		if (student_mark >=95 && student_mark <=100)
		{
			cout<<"You obtained Grade A"<<endl;
		
		}
	
		else if (student_mark >=90 && student_mark <=94)
		{
			cout<<"You obtained Grade A-"<<endl;
		}
	
		else if (student_mark >=85 && student_mark <=89)
		{
			cout<<"You obtained Grade B+"<<endl;
		}

		else if (student_mark >=80 && student_mark <=86)
		{
			cout<<"You obtained Grade B"<<endl;
		}

		else
		{
			cout<<"You need to work harder"<<endl;
		}
	}
}
