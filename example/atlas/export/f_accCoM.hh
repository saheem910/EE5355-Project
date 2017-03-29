/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:04 GMT-04:00
 */

#ifndef F_ACCCOM_HH
#define F_ACCCOM_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void f_accCoM_raw(double *p_output1, const double *var);

    inline void f_accCoM(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 63, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 3);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      f_accCoM_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // F_ACCCOM_HH
