// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_D_15_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, Eigen::Dynamic, 15 > >::register_converter();
}

