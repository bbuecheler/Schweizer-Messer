// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_12_D_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 12, Eigen::Dynamic > >::register_converter();
}

