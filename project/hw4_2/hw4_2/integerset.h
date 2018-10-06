#ifndef integerset_H
#define integerset_H
class integerset
{
public:
	integerset()
	{
		emptyset();
	}
	integerset(int[],int);
	integerset unionofset(const integerset&);
	integerset intersetfunctionofsets(const integerset&);
	void emptyset();
	void inputset();
	void insertelement(int);
	void deleteelement(int);
	void printset()const;
	bool isequalto(const integerset&)const;
private:
	int set[101];
	int validentry(int x)const
	{
	return(x>=0&&x<=100);
	}
};

#endif