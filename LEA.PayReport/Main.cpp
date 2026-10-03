#include <iostream>
using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

int GetEmployeeNumber();


int main()
{
	int employeeCount = GetEmployeeNumber();

    Employee* employees = new Employee[employeeCount];
    for (int i = 0; i < employeeCount; i++)
    {
        cout << "Enter the ID for Employee " << i + 1 << ": ";
        cin >> employees[i].ID;

        cout << "Enter the First Name for Employee " << i + 1 << ": ";
		cin >> employees[i].FirstName;

		cout << "Enter the Last Name for Employee " << i + 1 << ": ";
		cin >> employees[i].LastName;

        cout << "Enter the Hours Worked for Employee " << i + 1 << ": ";
		cin >> employees[i].HoursWorked;

		cout << "Enter the Hourly Rate for Employee " << i + 1 << ": ";
		cin >> employees[i].HourlyRate;
    }
    float totalPay = 0;

    cout << endl;
    cout << "Pay Report" << endl;
    cout << "----------" << endl;

    for (int i = 0; i < employeeCount; i++)
    {
		float weeklyPay = employees[i].HoursWorked * employees[i].HourlyRate;
		totalPay += weeklyPay;
        cout << employees[i].ID << ". "
            << employees[i].FirstName << " "
            << employees[i].LastName << ": $"
            << weeklyPay << endl;
    }

    cout << endl;
    cout << "Total Pay: $" << totalPay << endl;

    return 0;
}

int GetEmployeeNumber()
{
    int employeeNumber;

    cout << "Enter the number of employees: ";
    cin >> employeeNumber;

    return employeeNumber;
}