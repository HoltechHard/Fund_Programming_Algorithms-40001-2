#pragma once

class Rect
{
	int m_left, m_right, m_top, m_bottom;

	void NormalizeBound(int &, int &);

public:

	Rect(int left = 0, int right = 0, int top = 0, int bottom = 0);
	Rect(const Rect & rect);
	~Rect();
	void InflateRect(int left, int right, int top, int bottom);
	void InflateRect(int rightLeft = 1, int topBottom = 1);
	void setAll(int left, int right, int top, int bottom);
	void getAll(int &left, int &right, int &top, int &bottom);
	Rect BoundingRect(const Rect &);
	
	
	void NormalizeAll();
};


Rect BoundingRect(Rect, Rect);
Rect BoundingRect2(const Rect &, const Rect &);

