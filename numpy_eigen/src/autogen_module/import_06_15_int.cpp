// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_06_15_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 6, 15 > >::register_converter();
}

