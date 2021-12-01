#ifndef MERLIN_LINEARMODEL_H
#define MERLIN_LINEARMODEL_H
#include <Eigen/Dense>
using namespace Eigen;

class LinearModel{
private:
    MatrixXd data;
public:
    LinearModel(MatrixXd*);
    MatrixXd get_data(){return this->data;}
    //void sum_of_square_dev();
};


LinearModel::LinearModel(MatrixXd* data) {
    this->data = *data;
}

#endif //MERLIN_LINEARMODEL_H
