// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_11_09_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 11, 9 > >::register_converter();
}

