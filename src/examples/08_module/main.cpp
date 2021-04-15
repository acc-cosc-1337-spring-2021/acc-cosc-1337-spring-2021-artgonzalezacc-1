#include "temperature_data.h"
#include<iostream>

int main() 
{
	std::vector<Temperature> out_temps
	{
		Temperature(1, 98.9), Temperature(2, 99.5), Temperature(3, 99.1),
		Temperature(4, 99.6), Temperature(5, 99), Temperature(6, 99.7)
	};

	TemperatureData data;
	std::cout<<"Save vector to file \n";
	data.save_temps(out_temps);

	std::cout<<"Read file and recreate the vector\n";

	std::vector<Temperature> in_temps = data.get_temps();

	for(auto temp: in_temps)
	{
		std::cout<<temp.get_hour()<<" "<<temp.get_reading()<<"\n";
	}

	return 0;
}