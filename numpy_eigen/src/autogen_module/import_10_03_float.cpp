// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_10_03_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 10, 3 > >::register_converter();
}

