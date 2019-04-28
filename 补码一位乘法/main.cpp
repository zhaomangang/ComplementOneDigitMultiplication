#include "Booth_.h"




int main()
{
	//00001010  -00000110
	Booth booth(0x0a, -0x06, 4);
	booth.count();
	booth.Output();
	return 0;
}