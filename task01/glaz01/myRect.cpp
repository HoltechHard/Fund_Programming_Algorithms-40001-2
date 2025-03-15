#include "myRect.h"

Rect::Rect(int left, int right, int top, int bottom)
{
	m_left = left;
	m_right = right;
	m_top = top;
	m_bottom = bottom;

	NormalizeAll();
}

Rect::Rect(const Rect & rect)
{
	m_left = rect.m_left;
	m_right = rect.m_right;
	m_top = rect.m_top;
	m_bottom = rect.m_bottom;

	NormalizeAll();
}

Rect::~Rect()
{
	
}

void Rect::InflateRect(int left, int right, int top, int bottom)
{
	m_left -= left;
	m_right += right;
	m_top -= top;
	m_bottom += bottom;

	NormalizeAll();
}

void Rect::InflateRect(int rightLeft, int topBottom)
{
	InflateRect(rightLeft, rightLeft, topBottom, topBottom);
}

void Rect::setAll(int left, int right, int top, int bottom)
{
	m_left = left;
	m_right = right;
	m_top = top;
	m_bottom = bottom;

	NormalizeAll();
}

void Rect::getAll(int &left, int &right, int &top, int &bottom)
{
	left = m_left;
	right = m_right;
	top = m_top;
	bottom = m_bottom;
}

void Rect::NormalizeBound(int &b1, int &b2)
{
	int tmp;
	if(b1 > b2)
	{
		tmp = b1;
		b1 = b2;
		b2 = tmp;
	}
}

void Rect::NormalizeAll()
{
	NormalizeBound(m_left, m_right);
	NormalizeBound(m_top, m_bottom);
}

Rect Rect::BoundingRect(const Rect &rect)
{
	return BoundingRect2(*this, rect);
}

Rect BoundingRect(Rect r1, Rect r2)
{
	int tLeft1, tRight1, tTop1, tBottom1;
	int tLeft2, tRight2, tTop2, tBottom2;

	r1.getAll(tLeft1, tRight1, tTop1, tBottom1);
	r2.getAll(tLeft2, tRight2, tTop2, tBottom2);

	Rect r3(tLeft1 < tLeft2 ? tLeft1 : tLeft2, 
		tRight1 > tRight2 ? tRight1 : tRight2, 
		tTop1 < tTop2 ? tTop1 : tTop2, 
		tBottom1 > tBottom2 ? tBottom1 : tBottom2
		);

	return r3;
}

Rect BoundingRect2(const Rect &r1, const Rect &r2)
{
	return BoundingRect(r1, r2);
}