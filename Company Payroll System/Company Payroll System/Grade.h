#pragma once
using namespace std;
using namespace System;
using namespace System::Collections::Generic;
ref class Grade
{
protected: 
	String ^Position;
	float TaxRate, PayRate;
	static  Dictionary<String ^,Grade^>^GradesMap = gcnew Dictionary<String ^,Grade^>;


public:
	Grade();
	Grade( String^);
	String ^ GetPostition();
	void SetPosition(String^ );
	float GetTaxRate();
	void SetTaxRate(float);
	float GetPayRate();
	void SetPayRate(float);
};
