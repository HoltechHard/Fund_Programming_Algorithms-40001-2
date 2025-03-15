#include "Bochka.h"

Bochka::Bochka(double alc, double vol)
{
	alcohol = alc;
	v = vol;
}

double Bochka::GetAlc() const
{
	return alcohol;
}

void Bochka::SetAlc(double alc)
{
	alcohol = alc;
}

void Bochka::Pereliv(Bochka &b, double sz)
{
	b.alcohol = (alcohol * sz + b.alcohol * b.v) / (sz + b.v);
	b.v += sz;
	v -= sz;
}