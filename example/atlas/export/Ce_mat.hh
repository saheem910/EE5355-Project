/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:27:35 GMT-04:00
 */

#ifndef CE_MAT_HH
#define CE_MAT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace atlas
{
  namespace basic
  {

    void Ce_mat_raw(double *p_output1, const double *q,const double *dq);

    inline void Ce_mat(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q,const Eigen::VectorXd &dq)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);
      assert_size_matrix(dq, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 21, 21);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Ce_mat_raw(p_output1.data(), q.data(),dq.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // CE_MAT_HH
