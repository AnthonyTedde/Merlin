#include "lm.h"

lm::lm(int dim[2]) {
    this->data = new MatrixXd(dim[0], dim[1]);
}
//void lm::sum_of_square_dev() {}