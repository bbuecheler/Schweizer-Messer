// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_08_10_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 8, 10 > >::register_converter();
}

