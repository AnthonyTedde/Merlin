//
// Created by ATE on 11/28/21.
//
#include <src/LinearModels/LinearModel.h>
#include "main.h"
#define BOOT_TEST_MODULE LinearModel test
#include <boost/test/included/unit_test.hpp>
//#include <boost/test/unit_test.hpp>
//#include "../src/LinearModels/LinearModel.h"
#include <Eigen/Dense>

using namespace Eigen;
using namespace boost::unit_test;

int global = 5;

BOOST_AUTO_TEST_CASE(test){
    //MatrixXd data = MatrixXd::Random(3, 3);
    MatrixXd data ;
    LinearModel lm = LinearModel(&data);
    int a1 = 100;
    //   std::vector<int> a{1, 2};
    //   std::vector<int> b{1, 2};
    BOOST_TEST(true);
}