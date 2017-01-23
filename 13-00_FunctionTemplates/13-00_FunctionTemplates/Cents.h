#ifndef CENTS_H
#define CENTS_H

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents) : m_cents(cents)
	{
	}

	friend bool operator>(Cents &c1, Cents &c2)
	{
		return (c1.m_cents > c2.m_cents);
	}

	friend std::ostream& operator<< (std::ostream &out, const Cents &cents)
	{
		out << cents.m_cents << " cents ";
		return out;
	}

	void operator+=(Cents cents)
	{
		m_cents += cents.m_cents;
	}

	void operator/=(int value)
	{
		m_cents /= value;
	}
};


#endif