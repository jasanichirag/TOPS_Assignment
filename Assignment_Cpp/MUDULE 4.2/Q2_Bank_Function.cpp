#include <iostream>
using namespace std;
class banking
{
public:
  string name;
  string AccountType;
  long long int AccountNumber = 0;
  int CurrentBal = 0;
  void NewUser()
  {
    cout << "\n\t:: NEW USER REGISTRATION ::";
    cout << "\n\nENTER ACCOUNT HOLDER NAME : ";
    getline(cin, name);
    getline(cin, name);
    cout << "ENTER ACCOUNT TYPE : ";
    cin >> AccountType;
    cout << "ENTER ACCOUNT NUMBER : ";
    cin >> AccountNumber;
    cout << "CURRENT BALANCE : " << CurrentBal;
    cout << "\n\n\t\"SUCCESSFULLY REGISTRATION\"";
    cout << "\n==================================================";
  }
  void depositAmount()
  {
    int amount;
    cout << "\n\t:: DEPOSIT AMOUNT ::";
    cout << "\n\nName : " << name;
    cout << "\nAccount Number : " << AccountNumber;
    cout << "\nAccount Type : " << AccountType;
    cout << "\n\nEnter Amount : ";
    cin >> amount;
    CurrentBal += amount;
    cout << "\n\t\"SUCCESSFULLY DEPOSITED\"";
    cout << "\n==================================================";
  }
  void withdrawl()
  {
    int amount;
    cout << "\n\t:: WITHDRAW AMOUNT ::";
    cout << "\n\nName : " << name;
    cout << "\nAccount Number : " << AccountNumber;
    cout << "\nAccount Type : " << AccountType;
  up:
    cout << "\n\nEnter Amount :";
    cin >> amount;
    if (CurrentBal >= amount)
    {
      CurrentBal -= amount;
    }
    else
    {
      cout << "your current amount is not enough !!";
      goto up;
    }
    cout << "\n\t\"YOUR TRANSACTION SUCCESSFUL\"";
    cout << "\n==================================================";
  }
  void userAccount()
  {
    cout << "\n\t:: USER DETAILS ::";
    cout << "\n\nACCOUNT HOLDER NAME : " << name;
    cout << "\nACCOUNT TYPE : " << AccountType;
    cout << "\nACCOUNT NUMBER : " << AccountNumber;
    cout << "\nCURRENT BALANCE : " << CurrentBal;
    cout << "\n==================================================";
  }
};
int main()
{
  // Q2 ]--> Define a class to represent a bank account. Include the following members:--> 1. Data Member : -Name of the depositor - Account Number - Type of Account - Balance amount in the account ;
  // 2. Member Functions -To assign values - To deposited an amount - To withdraw an amount after checking balance - To display name and balance

banking user;  // object use
menu :
   cout << "\n==================================================";
up:
  cout << "\n\t-:: Secure Assets Financial. ::-\n==================================================\n";
  cout << "CODE\tBANKING :- ";
  cout << "\n\n 1\t New Users : ";
  cout << "\n 2\t Deposited An Amount : ";
  cout << "\n 3\t Withdraw An Amount : ";
  cout << "\n 4\t Check Balance : ";
  cout << "\n 5\t EXIT :";
  cout << "\n==================================================";
  char function;
  cout << "\n\nENTER NUMBER :";
  cin >> function;
  cout << "==================================================";
  if (function == '1' || function == '2' || function == '3' || function == '4' || function == '5')
  {
    if (function == '1')
    {
      user.NewUser();
    }
    else if (function == '2')
    {
      user.depositAmount();
    }
    else if (function == '3')
    {
      user.withdrawl();
    }
    else if (function == '4')
    {
      user.userAccount();
    }
    else if (function == '5')
    {
      goto exit;
    }
  }
  else
  {
    cout << "\nplease enter valid input !!";
    goto menu;
  }
s:
  cout << "\nBANKING FOR PRESS 1 :  \t     EXIT FOR PRESS 0 : \n";
  char fun1;
  cout << "\n\t\tEnter Number : ";
  cin >> fun1;
  cout << "==================================================";
  if (fun1 == '1' || fun1 == '0')
  {
    if (fun1 == '1')
    {
      goto up;
    }
    else
    {
      goto exit;
    }
  }
  else
  {
    cout << "\nPlease Enter Valid Input !!";
    goto s;
  }
exit:
  cout << "\n\t*****THANKING_YOU*****";
  cout << "\n==================================================\n";

  return 0;
}