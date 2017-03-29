/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:32 GMT-04:00
 */

#ifndef JS_Y1ACC_RIGHTTS3DMULTIWALKING_HH
#define JS_Y1ACC_RIGHTTS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void Js_y1Acc_RightTS3DMultiWalking_raw(double *p_output1, const double *var);

    inline void Js_y1Acc_RightTS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var)
    {
      // Check
      // - Inputs
      assert_size_matrix(var, 1, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 9, 2);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Js_y1Acc_RightTS3DMultiWalking_raw(p_output1.data(), var.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JS_Y1ACC_RIGHTTS3DMULTIWALKING_HH
