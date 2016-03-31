#include "Exceptions.h"

namespace Clustering
{
	//========== class OutOfBoundsEx ==================================================================================

	OutOfBoundsEx::OutOfBoundsEx(unsigned int c, int r)
	{
		__current = c;
		__rhs = r;
		__name = "OutOfBoundsEx";
	}

	unsigned int OutOfBoundsEx::getCurrent() const
	{
		return __current;
	}

	int OutOfBoundsEx::getRhs() const
	{
		return __rhs;
	}

	std::string OutOfBoundsEx::getName() const
	{
		return __name;
	}

	std::ostream& operator<<(std::ostream &os, const OutOfBoundsEx &ex)
	{
		os << ex.__name;
		return os;
	}


	//========== class DimensionalityMismatchEx =======================================================================

	DimensionalityMismatchEx::DimensionalityMismatchEx(unsigned int c, unsigned int r)
	{
		__current = c;
		__rhs = r;
		__name = "DimensionalityMismatchEx";
	}

	unsigned int DimensionalityMismatchEx::getCurrent() const
	{
		return __current;
	}

	unsigned int DimensionalityMismatchEx::getRhs() const
	{
		return __rhs;
	}

	std::string DimensionalityMismatchEx::getName() const
	{
		return __name;
	}

	std::ostream& operator<<(std::ostream &os, const DimensionalityMismatchEx &ex)
	{
		os << ex.__name;
		return os;
	}


	//========== class ZeroClustersEx =================================================================================

	ZeroClustersEx::ZeroClustersEx()
	{

	}

	std::string ZeroClustersEx::getName() const
	{
//		return std::basic_string<char, char_traits < _CharT>, allocator < _CharT >> ();
	}

	std::ostream& operator<<(std::ostream &os, const ZeroClustersEx &ex)
	{
//		return <#initializer#>;
	}


	//========== class DataFileOpenEx =================================================================================

	DataFileOpenEx::DataFileOpenEx(std::string filename)
	{

	}

	std::string DataFileOpenEx::getFilename() const
	{
//		return std::basic_string<char, char_traits < _CharT>, allocator < _CharT >> ();
	}

	std::string DataFileOpenEx::getName() const
	{
//		return std::basic_string<char, char_traits < _CharT>, allocator < _CharT >> ();
	}

	std::ostream& operator<<(std::ostream &os, const DataFileOpenEx &ex)
	{
//		return <#initializer#>;
	}


	//========== class ZeroDimensionsEx ===============================================================================

	ZeroDimensionsEx::ZeroDimensionsEx()
	{
		__name = "ZeroDimensionsEx";
	}

	std::string ZeroDimensionsEx::getName() const
	{
		return __name;
//		return "ZeroDimensionsEx";
	}

	std::ostream& operator<<(std::ostream &os, const ZeroDimensionsEx &ex)
	{
		os << ex.__name;
		return os;
	}


	//========== class EmptyClusterEx =================================================================================

	EmptyClusterEx::EmptyClusterEx()
	{

	}

	std::string EmptyClusterEx::getName() const
	{
//		return std::basic_string<char, char_traits < _CharT>, allocator < _CharT >> ();
	}

	std::ostream& operator<<(std::ostream &os, const EmptyClusterEx &ex)
	{
//		return <#initializer#>;
	}
}

