// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_09_16_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 9, 16 > >::register_converter();
}

