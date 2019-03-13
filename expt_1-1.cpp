#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	string TicketType;
	string NumberofTicketsSold;
	
	cout << "Ticket Type" << "	" << "Number of Tickets Sold" << "		" << endl;

	cout << "	" << endl;

	double box;
	cout << "Box ($250.00): " << "		";
	cin >> box;
	cout << "	" <<  "Sale Amount:	 " << setprecision(2) << fixed << box * 250.00 << endl;

	double sideline;
	cout << "Sideline ($100.00): " << "	";
	cin >> sideline;
	cout << "	" << "Sale Amount "  << setprecision(2) << fixed << sideline * 100.00 << endl;

	double premium;
	cout << "Premium ($50.00): " << "		";
	cin >> premium;
	cout << "	" <<  "Sale Amount "  << setprecision(2) << fixed <<  premium * 50.00 << endl;

	double generaladmission;
	cout << "General Admission ($25.00): " << "	";
	cin >> generaladmission;
	cout << "	" <<  "Sale Amount "  << setprecision(2) << fixed << generaladmission * 25.00 << endl;

	double TotalSaleAmount;
	cout << "Total Sale Amount: " << " " << setprecision(2) << fixed << (box * 250.00) + (sideline * 100.00) + (premium * 50.00) + (generaladmission * 25.00);
	cin >> TotalSaleAmount;
	cout << "	" ;

	_getch();
	return 0;
}