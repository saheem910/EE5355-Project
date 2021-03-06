/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:28:49 GMT-04:00
 */

#ifndef H_LEFTLEG_HH
#define H_LEFTLEG_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void h_LeftLeg_raw(double *p_output1, const double *q);

    inline void h_LeftLeg(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 21, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      h_LeftLeg_raw(p_output1.data(), q.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // H_LEFTLEG_HH
