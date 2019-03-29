#ifndef _DATE_H_
#define _DATE_H_

#include <iostream>

class Date {
	private:
		int year;
		int month;
		int day;
	public:
		date ();
		date (const int& d, const int& m, const int& y);

		void setDay (int day_);
		void setMonth (int month_);
		void setYear (int year_);

		date operator ++ ();
		date operator ++ (int);
		date operator -- ();
		date operator -- (int);
};
	bool operator == (const date&, const date&);
	bool operator != (const date&, const date&);
	bool operator < (const date&, const date&);
	bool operator > (const date&, const date&);
	bool operator <= (const date&, const date&);
	bool operator >= (const date&, const date&);

	friend ostream &operator << (ostream& o, const date& d);

#endif