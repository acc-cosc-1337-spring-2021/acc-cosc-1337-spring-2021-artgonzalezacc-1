#include "vector.h"
using std::cout;
#include<string>
using std::string;

//
int main()
{
    int val = add<int>(5,5);
    cout<<val<<"\n";

    double dval = add<double>(6.7, 9.9);
    cout<<dval<<"\n";

    string n = "joe", n1 = "mary";
    string res = add<string>(n, n1);
    cout<<res<<"\n";

    Vector<int> v(3);
	v.PushBack(5);
    cout<<v[0]<<"\n";

    Vector<double> v1(3);
    v1.PushBack(5.5);
    cout<<v1[0]<<"\n";

    Vector<char> v2;
    v2.PushBack('n');
    v2.PushBack('b');
    cout<<v2[0]<<"\n";
    cout<<v2[1]<<"\n";
    
    //v = get_vector();

    /*std::cout<<"Before functions\n";
    use_stack_my_vector();
    use_heap_vector();
    std::cout<<"After functions\n";*/

    return 0;
}

