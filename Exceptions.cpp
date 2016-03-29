#include "Exceptions.h"

namespace Clustering
{
	//========== class OutOfBoundsEx ==================================================================================

	OutOfBoundsEx::OutOfBoundsEx(unsigned int c, int r)
	{

	}

	unsigned int OutOfBoundsEx::getCurrent() const
	{
//		return 0;
	}

	int OutOfBoundsEx::getRhs() const
	{
//		return 0;
	}

	std::string OutOfBoundsEx::getName() const
	{
//		return std::basic_string<char, char_traits < _CharT>, allocator < _CharT >> ();
	}

	std::ostream& operator<<(std::ostream &os, const OutOfBoundsEx &ex)
	{
//		return <#initializer#>;
	}


	//========== class DimensionalityMismatchEx =======================================================================

	DimensionalityMismatchEx::DimensionalityMismatchEx(unsigned int c, unsigned int r)
	{

	}

	unsigned int DimensionalityMismatchEx::getCurrent() const
	{
		return 0;
	}

	unsigned int DimensionalityMismatchEx::getRhs() const
	{
		return 0;
	}

	std::string DimensionalityMismatchEx::getName() const
	{
//		return std::basic_string<char, char_traits < _CharT>, allocator < _CharT >> ();
	}

	std::ostream& operator<<(std::ostream &os, const DimensionalityMismatchEx &ex)
	{
//		return <#initializer#>;
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

	}

	std::string ZeroDimensionsEx::getName() const
	{
//		return std::basic_string<char, char_traits < _CharT>, allocator < _CharT >> ();
	}

	std::ostream& operator<<(std::ostream &os, const ZeroDimensionsEx &ex)
	{
//		return <#initializer#>;
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

