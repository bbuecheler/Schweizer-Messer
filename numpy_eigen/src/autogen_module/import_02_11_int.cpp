// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_02_11_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 2, 11 > >::register_converter();
}

