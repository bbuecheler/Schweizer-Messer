// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_01_02_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 1, 2 > >::register_converter();
}

