// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_08_01_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 8, 1 > >::register_converter();
}

