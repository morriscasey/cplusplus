#ifndef PET_H
#define PET_H

#include <string>
using namespace std;
class Pet
{
public:
	Pet();
	Pet(string initialName);

	string getName() const;
	void setName(string newName);

	virtual void talk()=0;

private:
	string name;

};
#endif