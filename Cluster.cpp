#include "Cluster.h"

//using Clustering::Point;

namespace Clustering
{
	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	//[[[[[[[[[[ LNode (struct) [[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[

	//---------- CONSTRUCTOR ----------------------------------------------------------------------------------------
	LNode::LNode(const Point &p, LNodePtr n = nullptr):point(p),next(n)
	{
//		point = p;
//		next = n;
	}



	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	//[[[[[[[[[[ Cluster (class) [[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[

	unsigned int Cluster::__idGenerator = 0;	//ID generator initialization

	//===============================================================================================================
	//========== PRIVATE FUNCTIONS ==================================================================================
	//===============================================================================================================

	void Cluster::__del()
	{

	}

	void Cluster::__cpy(LNodePtr pts)
	{

	}

	bool Cluster::__in(const Point &p) const
	{
		return false;
	}

	//===============================================================================================================
	//========== CONSTRUCTORS =======================================================================================
	//===============================================================================================================

	Cluster::Cluster(unsigned int d):centroid(d,*this)	//TODO May need more work
	{
		//Set the dimentionality to specification
		__dimensionality = d;

		//Initialize the Cluster size to 0
		__size = 0;

		//Initialize the (empty) LinkedList of points to null
		__points = nullptr;

		//Assign an ID to the Cluster and increment the static ID variable
		__id = __idGenerator;
		++__idGenerator;

		//Initialize the Cluster's Centroid referencing the cluster currently being constructed (*this)
		Centroid centroid(__dimensionality, *this);
	}

	//---------- BIG 3: ONE-ARGUMENT CONSTRUCTOR (COPY CONSTRUCTOR) --------------------------------------------------
	Cluster::Cluster(const Cluster& specimen):centroid(specimen.__dimensionality,*this)
	{
		//Set this Cluster's dimentionality to that of the specimen Cluster
		__dimensionality = specimen.__dimensionality;

		//Initialize the this Cluster size to the specimen's size
		__size = specimen.__size;

		//Initialize the (empty) LinkedList of points to null
		__points = nullptr;

		//Assign an ID to the Cluster and increment the static ID variable
		__id = __idGenerator;
		++__idGenerator;

		//Initialize the Cluster's Centroid referencing the cluster currently being constructed (*this)
		Centroid centroid(__dimensionality, *this);
	}

	//---------- BIG 3: ASSIGNMENT OPERATOR -------------------------------------------------------------------------
	Cluster &Cluster::operator=(const Cluster &cluster)
	{
	}

	//---------- BIG 3: DESTRUCTOR ----------------------------------------------------------------------------------
	Cluster::~Cluster()
	{

	}

	//===============================================================================================================
	//========== PUBLIC FUNCTIONS ===================================================================================
	//===============================================================================================================

	void Cluster::pickCentroids(unsigned int k, Point **pointArray)
	{

	}


	//===============================================================================================================
	//========== GETTERS & SETTERS ==================================================================================
	//===============================================================================================================

	//---------- GET SIZE -------------------------------------------------------------------------------------------
	unsigned int Cluster::getSize() const
	{
		return 0;
	}

	//---------- ADD POINT ------------------------------------------------------------------------------------------
	void Cluster::add(const Point &point)
	{

	}

	//---------- REMOVE POINT ---------------------------------------------------------------------------------------
	const Point& Cluster::remove(const Point &point)
	{
	}

	//---------- CONTAINS POINT? ------------------------------------------------------------------------------------
	bool Cluster::contains(const Point &p) const
	{
//		return false;
	}

	unsigned int Cluster::getDimensionality() const
	{
//		return 0;
	}

	unsigned int Cluster::getId() const
	{
//		return 0;
	}



	//===============================================================================================================
	//========== OVERLOADED OPERATORS ===============================================================================
	//===============================================================================================================

	//---------- [] -------------------------------------------------------------------------------------------------
	const Point& Cluster::operator[](unsigned int index) const
	{
	}

	//---------- += (Point ARGUMENT) --------------------------------------------------------------------------------
	Cluster& Cluster::operator+=(const Point &point)
	{
	}

	//---------- -= (Point ARGUMENT) --------------------------------------------------------------------------------
	Cluster& Cluster::operator-=(const Point &point)
	{
	}

	//---------- += (Cluster ARGUMENT) ------------------------------------------------------------------------------
	Cluster& Cluster::operator+=(const Cluster &cluster)
	{
	}

	//---------- -= (Cluster ARGUMENT) ------------------------------------------------------------------------------
	Cluster& Cluster::operator-=(const Cluster &cluster)
	{
	}

	//---------- << (friend) ----------------------------------------------------------------------------------------
	std::ostream& operator<<(std::ostream &ostream, const Cluster &cluster)
	{
	}

	//---------- >> (friend) ----------------------------------------------------------------------------------------
	std::istream& operator>>(std::istream &istream, Cluster &cluster)
	{
		
	}

	//---------- == (friend) ----------------------------------------------------------------------------------------
	bool operator==(const Cluster &cluster, const Cluster &cluster1)
	{
		return false;
	}

	//---------- != (friend) ----------------------------------------------------------------------------------------
	bool operator!=(const Cluster &cluster, const Cluster &cluster1)
	{
		return false;
	}

	//---------- + (friend) -----------------------------------------------------------------------------------------
	const Cluster operator+(const Cluster &cluster, const Point &point)
	{
	}

	//---------- - (friend) -----------------------------------------------------------------------------------------
	const Cluster operator-(const Cluster &cluster, const Point &point)
	{
	}

	//---------- + (friend) -----------------------------------------------------------------------------------------
	const Cluster operator+(const Cluster &cluster, const Cluster &cluster1)
	{
		//return Clustering::Cluster();
	}

	//---------- - (friend) -----------------------------------------------------------------------------------------
	const Cluster operator-(const Cluster &cluster, const Cluster &cluster1)
	{
		//return Clustering::Cluster();
	}



	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	//[[[[[[[[[[ Centroid (inner-class) [[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[

	Cluster::Centroid::Centroid(unsigned int d, const Cluster &c):__dimensions(d),__c(c),__p(d)
	{
		__valid = false;	//Not sure if this is proper
	}

	const Point Cluster::Centroid::get() const
	{
//		return Clustering::Point(0);
	}

	void Cluster::Centroid::set(const Point &p)
	{

	}

	bool Cluster::Centroid::isValid() const
	{
//		return false;
	}

	void Cluster::Centroid::setValid(bool valid)
	{

	}

	void Cluster::Centroid::compute()
	{

	}

	bool Cluster::Centroid::equal(const Point &point) const
	{
//		return false;
	}

	void Cluster::Centroid::toInfinity()
	{

	}



	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	//[[[[[[[[[[ Move (inner-class) [[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[
	//[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[

	Cluster::Move::Move(const Point &p, Cluster &from, Cluster &to):
						__p(p),__from(from),__to(to)
	{

	}

	void Cluster::Move::perform()
	{

	}

//	Cluster::Move::Move()
//	{
//
//	}
}