/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:39 GMT-04:00
 */

#ifndef F_HCONT_RIGHTTS3DMULTIWALKING_HH
#define F_HCONT_RIGHTTS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void f_hCont_RightTS3DMultiWalking_raw(double *p_output1, const double *var);

    inline void f_hCont_RightTS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 28, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 14, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      f_hCont_RightTS3DMultiWalking_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // F_HCONT_RIGHTTS3DMULTIWALKING_HH
