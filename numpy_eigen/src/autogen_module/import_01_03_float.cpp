// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_01_03_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 1, 3 > >::register_converter();
}

