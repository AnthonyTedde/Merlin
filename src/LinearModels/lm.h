#ifndef MERLIN_LM_H
#define MERLIN_LM_H
#include <Eigen/Dense>
using namespace Eigen;

class lm{
private:
    MatrixXd *data;
public:
    lm(int dim[2]);
    //void sum_of_square_dev();
};

#endif //MERLIN_LM_H
