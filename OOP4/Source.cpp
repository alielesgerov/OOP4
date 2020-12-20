#include<iostream>
#include<assert.h>

//Home Work 1

//class Fraction
//{
//	int numerator;
//	int denominator;
//public:
//	Fraction() :numerator(0),denominator(0){}
//	Fraction(int numerator, int denominator)
//	{
//		setNumerator(numerator);
//		setDenominator(denominator);
//		getReducedFraction();
//	}
//	//Setter
//	void setNumerator(int numerator)
//	{
//		this->numerator = numerator;
//	}
//	void setDenominator(int denominator)
//	{
//		assert(denominator !=0);
//		this->denominator = denominator;
//	}
//	//Getter
//	int getDenominator()const
//	{
//		return denominator;
//	}
//	int getNumerator()const
//	{
//		return numerator;
//	}
//	void getReducedFraction()
//	{
//		for (int i = denominator * numerator; i > 1; i--) 
//		{
//			if ((denominator % i == 0) && (numerator % i == 0))
//			{
//				denominator /= i;
//				numerator /= i;
//			}
//
//		}
//	}
//	// Fraction + Fraction
//	Fraction& operator+(const Fraction& other)
//	{
//		Fraction result(getNumerator() * other.getDenominator() + other.getNumerator() * getDenominator(), getDenominator() * other.getDenominator());
//		return result;
//		
//	}
//	Fraction& operator-(const Fraction& other)
//	{
//		Fraction result(getNumerator() * other.getDenominator() - other.getNumerator() * getDenominator(), getDenominator() * other.getDenominator());
//		return result;
//
//	}
//	Fraction& operator*(const Fraction& other)
//	{
//		Fraction result(getNumerator()  * other.getNumerator(), getDenominator() * other.getDenominator());
//		return result;
//
//	}
//	Fraction& operator/(const Fraction& other)
//	{
//		Fraction result(getNumerator() * other.getDenominator(), other.getNumerator() * getDenominator());
//		return result;
//
//	}
//	//fraction + int
//	Fraction& operator+(int num)
//	{				
//		Fraction result((getDenominator()*num)+getNumerator(),getDenominator());
//		return result;
//	}				
//	Fraction& operator-(int num)
//	{				
//		Fraction result(getNumerator()-(getDenominator() * num), getDenominator());
//		return result;
//	}				
//	Fraction& operator*(int num)
//	{				
//		Fraction result(getNumerator() * num, getDenominator());
//		return result;
//	}				
//	Fraction& operator/(int num)
//	{
//		assert(num != 0);
//		Fraction result(getNumerator(), getDenominator()*2);
//		return result;
//	}
//	//increment & decrement
//	Fraction& operator++()
//	{
//		setNumerator(getDenominator() + getNumerator());
//		return* this;
//	}
//	Fraction& operator--()
//	{
//		setNumerator(getNumerator()-getDenominator());
//		return*this;
//	}
//	Fraction& operator++(int)
//	{
//		auto temp = *this;
//		setNumerator(getDenominator() + getNumerator());
//		return temp;
//	}
//	Fraction& operator--(int)
//	{	
//		auto temp = *this;
//		setNumerator(getNumerator() - getDenominator());
//		return temp;
//	}
//	//overload cout
//	friend std::ostream& operator<<(std::ostream& out,const Fraction& fraction);
//	friend std::istream& operator>>(std::istream& in, Fraction& fraction);
//	void Show()const
//	{
//		if (getDenominator() == 1)
//			std::cout << "Fraction: " << getNumerator() << std::endl;
//		else
//			std::cout <<"Fraction: "<<getNumerator() << "/" << getDenominator() << std:: endl;
//	}
//};
//
//std::istream& operator>>(std::istream& in,Fraction& fraction)
//{
//	in >> fraction.numerator >> fraction.denominator;
//	fraction.getReducedFraction();
//	return in;
//}
//
//std::ostream& operator<<(std::ostream& out, const Fraction& fraction)
//{
//	if (fraction.denominator == 1)
//		out << "Fraction: " << fraction.numerator << std::endl;
//	else
//		out << "Fraction: " << fraction.numerator << "/" << fraction.denominator << std::endl;
//	return out;
//}
//
//int main()
//{
//	//operator+ 
//	/*Fraction f1(50,100);
//	Fraction f2(68, 94);
//	Fraction f3;
//	f3 = f1 + f2;
//	std::cout << f3 << std::endl;*/
//	//operator -
//	/*Fraction f1(50, 100);
//	Fraction f2(68, 94);
//	Fraction f3;
//	f3 = f1 - f2;
//	std::cout << f3 << std::endl;*/
//	//operator *
//	/*Fraction f1(50, 100);
//	Fraction f2(68, 94);
//	Fraction f3;
//	f3 = f1 * f2;
//	std::cout << f3 << std::endl;*/
//	//operator /
//	/*Fraction f1(50, 100);
//	Fraction f2(68, 94);
//	Fraction f3;
//	f3 = f1 / f2;
//	std::cout << f3 << std::endl;*/
//	//operator ++
//	/*Fraction f(50, 100);
//	f++;//posfix
//	++f;//prefix
//	std::cout << f << std::endl;*/
//	//operator --
//	/*Fraction f(50, 100);
//	f--;//posfix
//	--f;//prefix
//	std::cout << f << std::endl;*/
//	//operator +(int)
//	/*Fraction f(50, 100);
//	Fraction f2 = f + 2;
//	std::cout << f2 << std::endl;*/
//	//operator -(int)
//	/*Fraction f(50, 100);
//	Fraction f2 = f - 2;
//	std::cout << f2 << std::endl;*/
//	//operator *(int)
//	/*Fraction f(50, 100);
//	Fraction f2 = f * 2;
//	std::cout << f2 << std::endl;*/
//	// operator /(int)
//	/*Fraction f(50, 100);
//	Fraction f2 = f / 2;
//	std::cout << f2 << std::endl;*/
//	//cin cout overload
//	/*Fraction f;
//	std::cout << "Enter fraction(numerator, denominator): ";
//	std::cin >> f;
//	std::cout << f << std::endl;*/
//	return 0;
//}

//Home Work 2

//#include<Windows.h>
//class Computer
//{
//	int id;
//	char* model;
//	char* vendor;
//	char* videocard;
//	char* monitor;
//	int disk_size;
//	double cpu_ghz;
//	int ram;
//	int core;
//	double price;
//	bool isSSD;
//public:
//	static int myid;
//	Computer():id(0),model(nullptr),vendor(nullptr),videocard(nullptr),monitor(nullptr),disk_size(0),cpu_ghz(0),isSSD(0),ram(0),core(0),price(0){}
//	Computer(const char*model,const char*vendor,const char*videocard,const char*monitor,int disk_size,bool isSSD,double cpu_ghz,int core,int ram,double price)
//	{
//		setID();
//		setModel(model);
//		setVendor(vendor);
//		setVideocard(videocard);
//		setMonitor(monitor);
//		setDiskSize(disk_size);
//		setCpuGhz(cpu_ghz);
//		setIsSSD(isSSD);
//		setRam(ram);
//		setCore(core);
//		setPrice(price);
//	}
//	Computer(const Computer& computer)
//	{
//		setID(computer.getID());
//		setModel(computer.getModel());
//		setVendor(computer.getVendor());
//		setCpuGhz(computer.getCpuGhz());
//		setRam(computer.getRam());
//		setCore(computer.getCore());
//		setVideocard(computer.getVideocard());
//		setMonitor(computer.getMonitor());
//		setDiskSize(computer.getDiskSize());
//		setIsSSD(computer.getIsSSD());
//		setPrice(computer.getPrice());
//	}
//	//Setter
//	void setIsSSD(bool isSSD)
//	{
//		assert(isSSD == 0 || isSSD == 1);
//		this->isSSD = isSSD;
//	}
//	void setID()
//	{
//		id = ++myid;
//	}
//	void setID(int id)
//	{
//		this->id = id;
//	}
//	void setModel(const char* model)
//	{
//		assert(model!=nullptr);
//		this->model = _strdup(model);
//	}
//	void setVendor(const char* vendor)
//	{
//		assert(vendor!=nullptr);
//		this->vendor = _strdup(vendor);
//	}
//	void setVideocard(const char* videocard)
//	{
//		assert(videocard!=nullptr);
//		this->videocard = _strdup(videocard);
//	}
//	void setMonitor(const char* monitor)
//	{
//		assert(monitor!=nullptr);
//		this->monitor = _strdup(monitor);
//	}
//	void setDiskSize(int disk_size)
//	{
//		assert(disk_size > 0);
//		this->disk_size = disk_size;
//	}
//	void setCpuGhz(double cpu_ghz)
//	{
//		assert(cpu_ghz <= 5 && cpu_ghz > 0);
//		this->cpu_ghz = cpu_ghz;
//	}
//	void setRam(int ram)
//	{
//		assert(ram > 0);
//		this->ram = ram;
//	}
//	void setCore(int core)
//	{
//		assert(core > 0);
//		this->core = core;
//	}
//	void setPrice(double price)
//	{
//		assert(price > 0);
//		this->price = price;
//	}
//	//Getter
//	void getData(const char* model, const char* vendor, const char* videocard, const char* monitor, int disk_size, bool isSSD, double cpu_ghz, int core, int ram, double price)
//	{
//		setID();
//		setModel(model);
//		setVendor(vendor);
//		setVideocard(videocard);
//		setMonitor(monitor);
//		setDiskSize(disk_size);
//		setCpuGhz(cpu_ghz);
//		setIsSSD(isSSD);
//		setRam(ram);
//		setCore(core);
//		setPrice(price);
//	}
//	bool getIsSSD()const
//	{
//		return isSSD;
//	}
//	int getID()const
//	{
//		return id;
//	}
//	const char* getModel()const
//	{
//		return model;
//	}
//	const char* getVendor()const
//	{
//		return vendor;
//	}
//	const char* getVideocard()const
//	{
//		return videocard;
//	}
//	const char* getMonitor()const
//	{
//		return monitor;
//	}
//	int getDiskSize()const
//	{
//		return disk_size;
//	}
//	double getCpuGhz()const
//	{
//		return cpu_ghz;
//	}
//	int getRam()const
//	{
//		return  ram;
//	}
//	int getCore()const
//	{
//		return core;
//	}
//	double getPrice()const
//	{
//		return price;
//	}
//	//Show
//	void Show()const
//	{
//		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//		std::cout << "=================================\n";
//		std::cout << "\tID: ";
//		SetConsoleTextAttribute(hConsole, 12);
//		std::cout << getID() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "Model: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getModel() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "Vendor: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getVendor() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "Videocard: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getVideocard() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "Monitor: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getMonitor()<<std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "Disk Size: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getDiskSize() <<" Gb"<< std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "SSD: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout <<std::boolalpha <<getIsSSD() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "CPU Speed: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getCpuGhz() <<" Ghz"<< std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "CPU core: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getCore() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "RAM: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getRam() <<" Gb"<< std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "Price: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getPrice() <<" $"<< std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//	}
//	//operator overload
//	Computer& operator=(const Computer& computer)
//	{
//		setID(computer.getID());
//		setModel(computer.getModel());
//		setVendor(computer.getVendor());
//		setCpuGhz(computer.getCpuGhz());
//		setRam(computer.getRam());
//		setCore(computer.getCore());
//		setVideocard(computer.getVideocard());
//		setMonitor(computer.getMonitor());
//		setDiskSize(computer.getDiskSize());
//		setIsSSD(computer.getIsSSD());
//		setPrice(computer.getPrice());
//		return *this;
//	}
//	//overload (cin, cout)
//	friend std::ostream& operator<<(std::ostream& out, const Computer& computer);
//	friend std::istream& operator>>(std::istream& in, Computer& computer);
//	//Destructor
//	~Computer()
//	{
//		delete[]model;
//		delete[]vendor;
//		delete[]videocard;
//		delete[]monitor;
//	}
//};
//
//std::istream& operator>>(std::istream& in,Computer& computer)
//{
//	char* temp=new char[255];
//	std::cout << "Enter Model: ";
//	in.ignore();
//	in.getline(temp, 255);
//	computer.model = _strdup(temp);
//	std::cout << "Enter vendor: ";
//	in.getline(temp, 255);
//	computer.vendor = _strdup(temp);
//	std::cout << "Enter Videocard: ";
//	in.getline(temp, 255);
//	computer.videocard = _strdup(temp);
//	std::cout << "Enter Monitor: ";
//	in.getline(temp, 255);
//	computer.monitor = _strdup(temp);
//	delete[]temp;
//	std::cout << "Enter Disk Size: ";
//	in >> computer.disk_size;
//	std::cout << "Enter is SSD: ";
//	in >> computer.isSSD;
//	std::cout << "Enter CPU speed: ";
//	in >> computer.cpu_ghz;
//	std::cout << "Enter RAM: ";
//	in >> computer.ram;
//	std::cout << "Enter CPU cores: ";
//	in >> computer.core;
//	std::cout << "Enter Price: ";
//	in >> computer.price;
//	computer.setID();
//	return in;
//}
//
//std::ostream& operator<<(std::ostream& out, const Computer& computer)
//{
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	out << "=================================\n";
//	out << "\tID: ";
//	SetConsoleTextAttribute(hConsole, 12);
//	out << computer.id << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "Model: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << computer.model << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "Vendor: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << computer.vendor << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "Videocard: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << computer.videocard << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "Monitor: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << computer.monitor << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "Disk Size: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << computer.disk_size << " Gb" << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "SSD: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << std::boolalpha << computer.isSSD << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "CPU Speed: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << computer.cpu_ghz << " Ghz" << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	std::cout << "CPU core: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	std::cout << computer.core << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	std::cout << "RAM: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	std::cout << computer.ram << " Gb" << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	std::cout << "Price: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	std::cout << computer.price<<" $" << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	return out;
//
//}
//int Computer::myid = 0;
//
//
//class ComputerStore
//{
//	size_t id;
//	char* store_name;
//	char* store_address;
//	size_t computer_count;
//	Computer* computers;
//
//public:
//	static int myid;
//	ComputerStore() :id(0),store_name(nullptr), store_address(nullptr), computers(nullptr) ,computer_count(0){}
//
//	ComputerStore(const char* store_name, const char* store_address, const Computer* computers, int computer_count)
//	{
//		setComputerCount(computer_count);
//		setComputers(computers);
//		setStoreAddress(store_address);
//		setStoreName(store_name);
//		setID();
//	}
//	//Setter
//	void setID()
//	{
//		this->id = ++myid;
//	}
//	void setComputers(const Computer* computers)
//	{
//		assert(computers!=nullptr);
//
//		size_t length = getComputerCount();
//		this->computers = new Computer[length];
//
//		if (this->computers)
//		{
//			for (size_t i = 0; i < length; i++)
//			{
//				this->computers[i] = computers[i];
//			}
//		}
//	}
//	void setComputerCount(int computer_count)
//	{
//		assert(computer_count > 0 );
//		this->computer_count = computer_count;
//	}
//	void setStoreName(const char* store_name)
//	{
//		assert(store_name!=nullptr);
//		this->store_name = _strdup(store_name);
//	}
//	void setStoreAddress(const char* store_address)
//	{
//		assert(store_address!=nullptr);
//		this->store_address = _strdup(store_address);
//	}
//	//Getter
//	size_t getID() const
//	{
//		return id;
//	}
//	size_t getComputerCount() const
//	{
//		return computer_count;
//	}
//	Computer* getComputers() const
//	{
//		return computers;
//	}
//	const char* getStoreName() const
//	{
//		return store_name;
//	}
//	const char* getStoreAddress() const
//	{
//		return store_address;
//	}
//
//	bool addComputer(const Computer& computer)
//	{
//		assert(&computer!=nullptr);
//
//		size_t new_size = getComputerCount() + 1;
//
//		Computer* new_computers = new Computer[new_size];
//
//		if (new_computers)
//		{
//			for (size_t i = 0; i < new_size - 1; i++)
//			{
//				new_computers[i] = computers[i];
//			}
//
//			new_computers[new_size - 1] = computer;
//
//			setComputerCount(new_size);
//
//			if (computers)
//				delete[] computers;
//
//			computers = new_computers;
//			new_computers = nullptr;
//			return true;
//		}
//		return false;
//	}
//
//	bool deleteComputer(int id)
//	{
//		assert(id > 0);
//		if (computers)
//		{
//			size_t new_size = getComputerCount() - 1;
//			Computer* new_computers = new Computer[new_size];
//
//			if (new_computers)
//			{
//				for (size_t i = 0, length = new_size + 1, j = 0; i < length; i++)
//				{
//					if (computers[i].getID() != id)
//					{
//						new_computers[j++] = computers[i];
//					}
//				}
//				delete[] computers;
//
//				computers = new_computers;
//				new_computers = nullptr;
//
//				setComputerCount(new_size);
//				return true;
//			}
//		}
//		return false;
//	}
//	void Show()
//	{
//		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//		std::cout << "Store id: ";
//		SetConsoleTextAttribute(hConsole, 12);
//		std::cout << getID() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "Name: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getStoreName() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		std::cout << "Address: ";
//		SetConsoleTextAttribute(hConsole, 10);
//		std::cout << getStoreAddress() << std::endl;
//		SetConsoleTextAttribute(hConsole, 15);
//		for (size_t i = 0; i < getComputerCount(); i++)
//		{
//			std::cout << computers[i] << std::endl;
//		}
//	}
//	friend std::ostream& operator << (std::ostream& out, const ComputerStore& store);
//	friend std::istream& operator >> (std::istream& in, ComputerStore& store);
//	~ComputerStore()
//	{
//		delete[] store_name;
//		delete[] store_address;
//		delete[] computers;
//	}
//};
//
//std::ostream& operator << (std::ostream& out, const ComputerStore& store)
//{
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	out << "Store id: ";
//	SetConsoleTextAttribute(hConsole, 12);
//	out<< store.id << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "Name: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << store.store_name << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	out << "Address: ";
//	SetConsoleTextAttribute(hConsole, 10);
//	out << store.store_address << std::endl;
//	SetConsoleTextAttribute(hConsole, 15);
//	for (size_t i = 0; i < store.computer_count; i++)
//	{
//			out << store.computers[i] << std::endl;
//	}
//
//	return out;
//}
//std::istream& operator >> (std::istream& in, ComputerStore& store)
//{
//	char* temp = new char[255];
//	std::cout << "Enter Store Name: ";
//	in.getline(temp, 255);
//	store.store_name = _strdup(temp);
//	std::cout << "Enter Store Address: ";
//	in.getline(temp,255);
//	store.store_address = _strdup(temp);
//	std::cout << "Enter Computer count: ";
//	in >> store.computer_count;
//	for (size_t i = 0; i < store.computer_count; i++)
//	{
//		Computer computer;
//		computer.setID(i);
//		in >> computer;
//		store.addComputer(computer);
//	}
//	return in;
//}
//int ComputerStore::myid = 0;
//
//int main()
//{
//	/*size_t size = 6;
//	Computer* computer=new Computer[size];
//
//	computer[0].getData("MSI", "msi", "Nvidia GTX 1080Ti", "1080 FHD 144Hz ", 1024,true, 4.6,8,32,3500);
//	computer[1].getData("HP", "hp", "AMD radeon 520M", "1080 FHD 60Hz", 2048, false, 2.4,4,8,1200);
//	computer[2].getData("Toshiba", "toshiba", "Intel Graphics", "1080 FHD 60Hz", 1024, false, 1.8,4,4,780);
//	computer[3].getData("Predator", "Asus", "Nvidia GTX 1080", "1080 FHD 144Hz", 1024*2, true, 4.6,16,64,5000);
//	computer[4].getData("Dell Alienware 520", "Dell", "Nvidia GTX 1080Ti", "1080 FHD 144Hz", 1024, true, 4.0,8,32,3250);
//	//Overload (cin, cout)(yoxlamamishdan evvel size artirin )
//	std::cout << "Enter data: " << std::endl;
//	std::cin >> computer[5];
//	for (size_t i = 0; i < size; i++)
//	{
//		std::cout << computer[i] << std::endl;
//	}*/
//
//	/*Computer* computer1=new Computer("MSI", "msi", "Nvidia GTX 1080Ti", "1080 FHD 144Hz ", 1024, true, 4.6, 8, 32, 3500);
//	Computer* computer2=new Computer("HP", "hp", "AMD radeon 520M", "1080 FHD 60Hz", 2048, false, 2.4, 4, 8, 1200);
//	Computer* computer3=new Computer("Toshiba", "toshiba", "Intel Graphics", "1080 FHD 60Hz", 1024, false, 1.8, 4, 4, 780);
//	Computer* computers = new Computer[2]{ *computer1,*computer2 };
//	ComputerStore store("AzerTech store", "Hardasa Azerbaycanda", computers, 2);
//	std::cout << store << std::endl;
//	store.deleteComputer(1);
//	std::cout << store << std::endl;
//	store.addComputer(*computer3);
//	std::cout << store << std::endl;*/
//	return 0;
//}