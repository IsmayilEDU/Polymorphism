#pragma once

class Car
{

	string _marka;
	string _model;
	short _year;
	string _ban;
	string _color;
	double _engine;
	unsigned int _mileage;
	bool _checkNew;
	const short _capacity;

protected:

	string __transmission;

	//	Encapsulation of transmission
	virtual const string get__transmission() const 
	{
		return this->__transmission;
	}

public:

	//	Encapsulation of marka
	const string get_marka() const
	{
		return this->_marka;
	}
	void set_marka(const string marka)
	{
		//	Check sent brand
		if (marka == "")
		{
			cout << "Sent brand can't empty!" << endl;
			return;
		}

		this->_marka = marka;
	}
	
	//	Encapsulation of model
	const string get_model() const
	{
		return this->_model;
	}
	void set_model(const string model)
	{
		//	Check sent brand
		if (model == "")
		{
			cout << "Sent model can't empty!" << endl;
			return;
		}

		this->_model = model;
	}

	//	Encapsulation of year
	const short get_year() const
	{
		return this->_year;
	}
	void set_year(const short year)
	{
		//	Check sent year
		if (year < 1886 || year > 2023)
		{
			cout << "Sent year can't empty!" << endl;
		}

		this->_year = year;
	}

	//	Encapsualtion of type of Ban
	const string get_ban() const
	{
		return this->_ban;
	}
	void set_ban(const string ban)
	{
		//	Check sent ban
		if ((ban != "Sedan") && (ban != "Xetcbek"))
		{
			cout << "Sent ban is not right!" << endl; 
			return;
		}

		this->_ban = ban;
	}

	//	Encapsulation of engine
	const double get_engine() const
	{
		return this->_engine;
	}
	void set_engine(const double engine)
	{
		//	Check sent engine
		if (engine < 0 || engine > 6.3)
		{
			cout << "Sent engine is not right!" << endl;
			return;
		}

		this->_engine = engine;
	}

	//	Encapsulation of mileage
	const unsigned int get_mileage() const
	{
		return this->_mileage;
	}
	void set_mileage(const unsigned int mileage)
	{
		//	Check sent mileage
		if (mileage < 0)
		{
			cout << "Sent mileage cannot be less than 0!" << endl;
			return;
		}

		this->_mileage = mileage;
	}

	//	Encapsulation of checkNew
	const bool get_checkNew() const
	{
		return this->_checkNew;
	}
	void set_checkNew()
	{
		if (this->_mileage == 0)
		{
			this->_checkNew = true;
		}
		else
		{
			this->_checkNew = false;
		}
	}

	//	Encapsulation of capacity
	const short get_capacity() const
	{
		return this->_capacity;
	}

	//	Default constructor
	Car() : _capacity(5) {}

	//	Constructor with parameters
	Car(const string marka, const string model, const short year, const string ban,
		const double engine, const unsigned int mileage)
		:	Car()
	{
		set_marka(marka);
		set_model(model);
		set_year(year);
		set_ban(ban);
		set_engine(engine);
		set_mileage(mileage);
		set_checkNew();
	}

	//	Destructor
	~Car() {}

	//	Show car's specifications
	virtual void showSpecicifications() const 
	{
		cout << "		Car's specifications" << endl
		<< "Marka: " << this->_marka << endl
		<< "Model: " << this->_model << endl
		<< "Year: " << this->_year << endl
		<< "Ban: " << this->_ban << endl
		<< "Engine: " << this->_engine << endl
		<< "Mileage: " << this->_mileage << endl
		<< "New: " << boolalpha << this->_checkNew << endl
		<< "Capacity: " << this->_capacity << endl<<endl;
	}
};