#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<double, 7, 15> test_double_07_15(const Eigen::Matrix<double, 7, 15> & M)
{
	return M;
}
void export_double_07_15()
{
	boost::python::def("test_double_07_15",test_double_07_15);
}

