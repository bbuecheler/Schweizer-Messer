#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, 12, 16> test_double_12_16(const Eigen::Matrix<double, 12, 16> & M)
{
	return M;
}
void export_double_12_16()
{
	boost::python::def("test_double_12_16",test_double_12_16);
}

