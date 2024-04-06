#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
protected:
    string emp_name;
    int emp_id;
    string address;
    string mail_id;
    long long mobile_no;

public:

    Employee(string emp_name, int emp_id, string address, string mail_id, long long mobile_no) {
        this->emp_name = emp_name;
        this->emp_id = emp_id;
        this->address = address;
        this->mail_id = mail_id;
        this->mobile_no = mobile_no;
    }

    void displayEmployee() {
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Address: " << address << endl;
        cout << "Mail ID: " << mail_id << endl;
        cout << "Mobile Number: " << mobile_no << endl;
    }
};

class Programmer : public Employee {
protected:
    double basic_pay;

public:
    
    Programmer(string emp_name, int emp_id, string address, string mail_id, long long mobile_no, double basic_pay) 
    : Employee(emp_name, emp_id, address, mail_id, mobile_no) {
        this->basic_pay = basic_pay;
    }

    double calculateGrossSalary() {
        return basic_pay + (0.97 * basic_pay) + (0.10 * basic_pay) + (0.12 * basic_pay) + (0.001 * basic_pay);
    }

    void displayPaySlip() {
        cout << "\nPay Slip for Programmer" << endl;
        displayEmployee();
        cout << fixed << setprecision(2);
        cout << "Basic Pay: " << basic_pay << endl;
        cout << "DA: " << 0.97 * basic_pay << endl;
        cout << "HRA: " << 0.10 * basic_pay << endl;
        cout << "PF: " << 0.12 * basic_pay << endl;
        cout << "Staff Club Fund: " << 0.001 * basic_pay << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
    }
};


int main() {
    Programmer p("John", 101, "123, Street Name", "john@example.com", 9876543210, 50000.0);
    p.displayPaySlip();
    return 0;
}

