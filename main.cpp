#include <iostream>
#include <string>

class Pokemon {
private:
	std::string m_name;
public:
	Pokemon(const std::string& name) : m_name(name) {}
	~Pokemon() {}
	Pokemon(const Pokemon& other) {
		std::cout << other.m_name << "をコピー" << std::endl;
		m_name = other.m_name;
	}
	
	const std::string& name() const { return m_name; }
};

int main() {


	Pokemon* pokemon1 = new Pokemon("ピカチュウ");
	std::cout << "1体目 : " << pokemon1->name() << std::endl;

	Pokemon* pokemon2 = new Pokemon(*pokemon1);
	std::cout << "2体目 : " << pokemon2->name() << std::endl;


	delete pokemon1;
	delete pokemon2;

	getchar();
	
	return 0;
}