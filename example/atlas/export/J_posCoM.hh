/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:00 GMT-04:00
 */

#ifndef J_POSCOM_HH
#define J_POSCOM_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void J_posCoM_raw(double *p_output1, const double *var);

    inline void J_posCoM(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 56, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      J_posCoM_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // J_POSCOM_HH
