#ifndef PLUGINLIB_TUTORIALS__POLYGON_BASE_H_
#define PLUGINLIB_TUTORIALS__POLYGON_BASE_H_ 

namespace polygon_base 
{
	class RegularPolygon
	{
	public:
		/* with pluginlib, a constructor withut parameters is
		requiered for classes so, if any parameters are requiered
		, we use the initialize method to initialize the object*/
		virtual void initialize(double side_length) = 0;
		virtual double area() = 0;
		virtual ~RegularPolygon(){}
	protected:
		// constructor without parameters
		RegularPolygon() {}
	};
};

#endif