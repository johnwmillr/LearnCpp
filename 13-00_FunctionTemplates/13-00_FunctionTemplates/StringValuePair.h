#ifndef STRINGVALUEPAIR_H
#define STRINGVALUEPAIR_H

#include <string>
#include "Pair2.h"

template <class T>
class StringValuePair: public Pair2<std::string, T>
{
private:
	std::string m_str;
	T m_var;

public:
	StringValuePair(const std::string& str, const T& var)
		: Pair2<std::string, T>(str, var)
	{
	}
	
};



#endif