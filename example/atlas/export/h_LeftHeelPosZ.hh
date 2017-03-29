/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:39 GMT-04:00
 */

#ifndef H_LEFTHEELPOSZ_HH
#define H_LEFTHEELPOSZ_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void h_LeftHeelPosZ_raw(double *p_output1, const double *q);

    inline void h_LeftHeelPosZ(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      h_LeftHeelPosZ_raw(p_output1.data(), q.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // H_LEFTHEELPOSZ_HH
