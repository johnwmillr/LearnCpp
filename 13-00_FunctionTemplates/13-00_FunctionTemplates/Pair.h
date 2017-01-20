#ifndef PAIR_H
#define PAIR_H


template <class T>
class Pair
{
private:
	T m_num1;
	T m_num2;
public:
	Pair(T num1, T num2) : m_num1(num1), m_num2(num2)
	{
	}

	T first()  {return m_num1;}
	T second() {return m_num2;}

}



#endif