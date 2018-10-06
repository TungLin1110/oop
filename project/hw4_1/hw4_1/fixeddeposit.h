#ifndef fixeddeposit_H
#define fixeddeposit_H
class fixeddeposit
{
public:
	fixeddeposit(double b)
	{
		fixedbalance=(b>=0.0?b:0.0);
	}
	void calculatesixmonthlyinterest();
	static void modifyinterest(double);
	void printbalance() const;
private:
	double fixedbalance;
	static double annualinterestrate;
};
#endif