// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_15_06_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 15, 6 > >::register_converter();
}

