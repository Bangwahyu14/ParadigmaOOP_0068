#include <iostream>
using namespace std;

class baseClass final {
	virtual void perkenalan() final {
		cout << "Hallo saya funcation dari base class";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hallo saya funcation dari derived Class";
	}