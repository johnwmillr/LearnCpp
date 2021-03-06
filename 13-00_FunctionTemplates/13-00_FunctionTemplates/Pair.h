#ifndef PAIR_H
#define PAIR_H

template <class T>
class Pair
{
private:
	T m_a;
	T m_b;
public:
	Pair(const T& a, const T& b) : m_a(a), m_b(b)
	{
	}

	// Access the first or second element of the pair	
	T& first()  {return m_a;}
	const T& first()  const {return m_a;}
	T& second() {return m_b;}
	const T& second() const {return m_b;}


	// Little confused here on the usage of const and &
	// I think they need to be const references b/c the template
	// could be a class type
	// From comments
	/*My first() and second() aren�t getters so much as they are accessors
	(in that they both allow get and set). Your version is close to typical
	if you intend first() and second() to be read-only -- however, const 
	reference is a better choice here, since m_first and m_second may be 
	class types, and we want to avoid making copies of those. My versions is
	written more from the viewpoint that we�ll allow read-only access for 
	const objects and full read/write access for non-const objects. Allowing 
	direct access to m_first and m_second via reference does violate 
	encapsulation to some degree, so there�s that tradeoff. Another way to go 
	would have been to have my first() and second() return by const reference only, 
	and then provide a setFirst() and setSecond() for non-const objects that allowed 
	the user to set the value of m_first and m_second.
	That�s probably the safest choice all-around.
	*/
};


#endif