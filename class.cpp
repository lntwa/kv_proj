#include <iostream>
#include <string>
#include <chrono>

using namespace std;

class Phone //классы по умолчанию закрыты, просто описание без переменных
{
	 private: //закрытие данных
	 	float battery_volume;

	 public: //можно использовать чтобы данные были в доступе
	 	string brand;
	 	uint8_t color[3];

	 void set_brand(string brand)
	 {
	 	if(brand == "amogus")
	 	{
	 		this->brand = "wow";
	 	}
	 	this->brand = brand;
	 }

	 float get_brand(){
	 	return this->brand;
	 }

	 void discharge_time(int min)
	 {
	 	while(min--)
	 	{
	 		cout << min << endl;
	 		// sleep(0.1);
	 	}
	 }
};
