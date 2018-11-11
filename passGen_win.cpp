/* Password Generator V1.0
   Jan 01, 2017
Copyright (c) 2017, Navratan Lal Gupta. All Right Reserved. */

#include<iostream.h>
#include<string>
#include<ctime>
#include<windows.h>

string generateAlphaLower();
string generateAlphaUpper();
string generateSymbol();
string generateNum0to9();
string generatePassword(short);
short menu();
void about();

int main()
{
	string password;
	short opt,opt1;
	cout<<"\n";
	cout<<"*****************************************************\n";
	cout<<"\t passGen: Password Generator\t\n";
	cout<<"*****************************************************\n";
	cout<<"\n passGen V1.0, Jan 01, 2017";										//check date
	cout<<"\n\n Copyright(c) 2017, Navratan Gupta. All Right Reserved.";
	cout<<endl<<endl;
	LABEL1:
	opt=menu();
	if(opt>5 || opt<0)
	{
		cout<<string(40,'\n');
		cout<<"\n\n Invalid Choice !!! Try again.\n\n";
		goto LABEL1;
	}
	if(opt==5)
	{
		about();
		cout<<" 0. Exit\n\n 1. Menu\n\n";
		cout<<"Choose (0 or 1): \n\n Choice>> ";
		cin>>opt1;
		if(opt1==0)
		{
			cout<<"\n\n SECURITY WARNING: Keep your password secret and keep changing time to time.";
			cout<<"\n\n Thank You. See you again. \n\n";
			Beep(3320,400);
			for(long i=0;i<10000000;i++)
			{
				for(short j=0;j<85;j++){}
			}
			exit(1);
		}
		else if(opt1==1)
		{
			cout<<string(40,'\n');
			goto LABEL1;
		}
		else
		{
			cout<<" Wrong choice !!! Try again";
			goto LABEL2;
		}
	}
	password=generatePassword(opt);
	LABEL2:
	Beep(3320,400);
	cout<<"\n\n----------------------------------";
	cout<<"\n----------------------------------";
	cout<<"\n Generated Password: "<<password<<"\n";
	cout<<"----------------------------------";
	cout<<"\n----------------------------------";
	cout<<"\n\n\n 0. Exit\n\n 1. Re-generate\n\n";
	cout<<" Choose (0 or 1): \n\n Choice>> ";
	cin>>opt1;
	if(opt1==0)
	{
		cout<<"\n\n SECURITY WARNING: Keep your password secret and keep changing time to time.";
		cout<<"\n\n Thank You. See you again. \n\n";
		Beep(3320,400);
		for(long i=0;i<10000000;i++)
		{
			for(short j=0;j<85;j++){}
		}
		exit(1);
	}
	else if(opt1==1)
	{
		cout<<string(40,'\n');
		goto LABEL1;
	}
	else
	{
		cout<<" Wrong choice !!! Try again";
		goto LABEL2;
	}
}

short menu()
{
	short opt;
	cout<<"\n\n---------------------------------";
	cout<<"\n Menu";
	cout<<"\n---------------------------------";
	cout<<"\n\n Generate\n\n";
	cout<<" 0. Exit\n\n 1. Weak Password \t(NOT RECOMMENDED)\n\n 2. Average strength \n\n 3. Strong Password \t(RECOMMENDED)\n\n 4. Very strong\n\n";
	cout<<" -\n\n";
	cout<<" 5. About\n\n";
	cout<<" Choose an option (0-5): \n\n Choice>> ";
	cin>>opt;
	if(opt==0)
	{
		cout<<"\n\n SECURITY WARNING: Keep your password secret and keep changing time to time.";
		cout<<"\n\n Thank You. See you again. \n\n";
		Beep(3320,400);
		for(long i=0;i<10000000;i++)
		{
			for(short j=0;j<85;j++){}
		}
		exit(1);
	}
	return opt;
}

string generatePassword(short opt)
{
	string pass,letter1,letter2;
	short choice1,choice2,choice3,choice4,num6to7,choice5,choice6,choice7;
	srand(time(NULL));
	choice1=rand()%2;
	//cout<<"choice 1: "<<choice1<<"\n";
	if(choice1==0)
	{
		letter1=generateAlphaLower();
		pass=letter1;
	}
	else
	{
		letter1=generateAlphaUpper();
		pass=letter1;
	}
	//cout<<pass<<"\n";
	//srand(time(NULL));
	choice2=(rand()%4)/2;
	//cout<<"choice 2: "<<choice2<<"\n";
	if(choice2==0)
	{
		letter2=generateAlphaLower();
		pass=pass+letter2;
	}
	else
	{
		letter2=generateAlphaUpper();
		pass=pass+letter2;
	}
	//cout<<pass<<"\n";
	choice3=(rand()%8)/4;
	//cout<<"choice 3: "<<choice3<<"\n";
	if(choice3==0)
	{
		letter2=generateAlphaLower();
		pass=pass+letter2;
	}
	else
	{
		letter2=generateAlphaUpper();
		pass=pass+letter2;
	}
	//cout<<pass<<"\n";
	choice4=(rand()%10)/5;
	//cout<<"choice 4: "<<choice4<<"\n";
	if(choice4==0)
	{
		letter2=generateSymbol();
		pass=pass+letter2;
		letter2=generateNum0to9();
		pass=pass+letter2;
	}
	else
	{
		letter2=generateNum0to9();
		pass=pass+letter2;
		letter2=generateSymbol();
		pass=pass+letter2;
	}
	//cout<<pass<<"\n";
	num6to7=(rand()%100)/10;
	//cout<<"6th letter: "<<num6to7<<"\n";
	letter2=num6to7+'0';
	pass=pass+letter2;
	//cout<<pass<<"\n";
	if(opt==2||opt==3||opt==4)
	{
		num6to7=(rand()%200)/20;
		//cout<<"7th letter: "<<num6to7<<"\n";
		letter2=num6to7+'0';
		pass=pass+letter2;
		//cout<<pass<<"\n";
		choice5=(rand()%12)/6;
		//cout<<"choice 5: "<<choice5<<"\n";
		if(choice5==0)
		{
			letter2=generateAlphaLower();
			pass=pass+letter2;
		}
		else
		{
			letter2=generateAlphaUpper();
			pass=pass+letter2;
		}
	}
	//cout<<pass<<"\n";
	if(opt==3||opt==4)
	{
		choice6=(rand()%14)/7;
		//cout<<"choice 6: "<<choice6<<"\n";
		if(choice6==0)
		{
			letter2=generateAlphaLower();
			pass=pass+letter2;
		}
		else
		{
			letter2=generateAlphaUpper();
			pass=pass+letter2;
		}
		//cout<<pass<<"\n";
		choice7=(rand()%16)/8;
		//cout<<"choice 7: "<<choice7<<"\n";
		if(choice7==0)
		{
			letter2=generateAlphaLower();
			pass=pass+letter2;
		}
		else
		{
			letter2=generateAlphaUpper();
			pass=pass+letter2;
		}
	}
	//cout<<pass<<"\n";
	if(opt==4)
	{
		if(choice4==0)
		{
			letter2=generateSymbol();
			pass=pass+letter2;
		}
		else
		{
			letter2=generateNum0to9();
			pass=pass+letter2;
		}
	}
	//cout<<pass<<"\n";
	return pass;
}

string generateAlphaLower()
{
	string a;
	//srand(time(NULL));
	int x=rand()%26;
	a=x+'a';
	return a;
}
string generateAlphaUpper()
{
	string a;
	//srand(time(NULL));
	int x=rand()%26;
	a=x+'A';
	return a;
}
string generateSymbol()
{
	short check;
	string a;
	check=(rand()%24)/2;
	//cout<<"Symbol check: "<<check<<"\n";
	switch(check)
	{
		case 1:
			a='!';
			break;
		case 2:
			a='@';
			break;
		case 3:
			a='#';
			break;
		case 4:
			a='$';
			break;
		case 5:
			a='%';
			break;
		case 6:
			a='^';
			break;
		case 7:
			a='&';
			break;
		case 8:
			a='*';
			break;
		case 9:
			a='(';
			break;
		case 10:
			a=')';
			break;
		case 11:
			a='_';
			break;
		case 12:
			a='+';
			break;
	}
	return a;
}
string generateNum0to9()
{
	short check;
	string a;
	check=(rand()%20)/2;
	//cout<<"Gen Num 0 to 9 check: "<<check<<"\n";
	a=check+'0';
	return a;
}
void about()
{
	cout<<string(40,'\n');
	cout<<"\n\n---------------------------------";
	cout<<"\n About";
	cout<<"\n---------------------------------";
	cout<<"\n\n passGen V1.0: Password Generator is a basic tool to generate a strong";
	cout<<"\n\n and hard-to-guess passwords. This tool is very easy to use with";
	cout<<"\n\n easy to understand interface. passGen can generate over 20,000 TRILLIONS !!!";
	cout<<"\n\n of possible passwords reducing repeatation probability to zero.";
	cout<<"\n\n\n\n Weak password: 6 characters long including lower, upper case, symbol and number. This is not recommended\n to be used for securing sensitive informations.";
	cout<<"\n\n Average: 8 characters long including lower, upper case, symbol and number.";
	cout<<"\n\n Strong: 10 characters long including lower, upper case, symbol and number. This is highly recommended.";
	cout<<"\n\n Very strong: 11 characters long including lower, upper case, symbol and number. This is highly recommended\n to safeguard sensitive information.";
	cout<<"\n\n\n Copyright(c) 2017, Navratan Gupta. All Right Reserved.\n\n";
}
