#ifndef PAIR2_H
#define PAIR2_H

template <class T, class S>
class Pair2
{
private:
	T m_a;
	S m_b;
public:
	Pair2(const T& a, const S& b) : m_a(a), m_b(b)
	{
	}

	// Access the first or second element of the pair				
	T& first() {return m_a;}
	const T& first() const {return m_a;}
	S& second() {return m_b;}
	const S& second() const {return m_b;}

	// From comments
	/*My first() and second() aren’t getters so much as they are accessors
	(in that they both allow get and set). Your version is close to typical
	if you intend first() and second() to be read-only -- however, const 
	reference is a better choice here, since m_first and m_second may be 
	class types, and we want to avoid making copies of those. My versions is
	written more from the viewpoint that we’ll allow read-only access for 
	const objects and full read/write access for non-const objects. Allowing 
	direct access to m_first and m_second via reference does violate 
	encapsulation to some degree, so there’s that tradeoff. Another way to go 
	would have been to have my first() and second() return by const reference only, 
	and then provide a setFirst() and setSecond() for non-const objects that allowed 
	the user to set the value of m_first and m_second.
	That’s probably the safest choice all-around.
	*/
};

#endif