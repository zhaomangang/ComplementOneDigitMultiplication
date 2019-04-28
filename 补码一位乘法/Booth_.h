#pragma once
class Booth
{
public:
	Booth(int x, int y, int bits);
	~Booth();
	void count();
	void Output();
private:
	int x;
	int y;
	int bits;
	int res;
};

