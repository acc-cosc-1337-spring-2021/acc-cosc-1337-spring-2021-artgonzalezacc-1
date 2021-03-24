#include "vec.h"
#include <string>
using std::string;

using std::vector;
using std::cout;

int main() 
{
	vector<string> names(9, "joe");
	names.insert(names.begin(), "mary");
		
	for(auto name: names)
	{
		cout<<name<<"\n";
	}
	
	
	


	return 0;
}