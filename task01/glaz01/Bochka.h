class Bochka 
{
	double v, alcohol;

public:
	Bochka(double, double = 100.0);
	double GetAlc() const;
	void SetAlc(double);
	void Pereliv(Bochka &, double = 1.0);

};