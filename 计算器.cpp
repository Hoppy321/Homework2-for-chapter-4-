#include <iostream>
using namespace std;
int  main()
{
	char op;  
	double  num1, num2, result;
    while(1)
    {
	cin >> num1 >> op >> num2;             // A 
	if(num1==4&op=='Q'&&num2==4)
	    { cout<<"再按任意键退出程序"<<endl;
		system("pause"); 
	    return 0;
	    } 
	else 
	switch (op)
	{  
		case '+' : result =num1+num2; break;
		case '-' : result =num1-num2; break;
		case '*' : result =num1*num2; break;
		case '/' : result =num1/num2; break;
		default: cout << "运算符非法." << endl;	continue;
	}  
	cout <<num1<< op <<num2<< "=" <<result<< endl;
	}
    
    system("pause");
	return 0;
}
