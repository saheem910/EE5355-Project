/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:44 GMT-04:00
 */

#ifndef DDYD2_LEFTHS3DMULTIWALKING_HH
#define DDYD2_LEFTHS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void ddyd2_LeftHS3DMultiWalking_raw(double *p_output1, const double *t,const double *a);

    inline void ddyd2_LeftHS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &t,const Eigen::VectorXd &a)
    {
      // Check
      // - Inputs
      assert_size_matrix(t, 1, 1);
      assert_size_matrix(a, 49, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 7, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      ddyd2_LeftHS3DMultiWalking_raw(p_output1.data(), t.data(),a.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // DDYD2_LEFTHS3DMULTIWALKING_HH
