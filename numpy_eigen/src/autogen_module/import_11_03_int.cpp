// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_11_03_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 11, 3 > >::register_converter();
}

