/*
 * Automatically Generated from Mathematica.
 * Mon 10 Apr 2017 15:18:13 GMT-04:00
 */

#ifndef YD2_RIGHTTL3DMULTIWALKING_HH
#define YD2_RIGHTTL3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void yd2_RightTL3DMultiWalking_raw(double *p_output1, const double *t,const double *a);

    inline void yd2_RightTL3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &t,const Eigen::VectorXd &a)
    {
      // Check
      // - Inputs
      assert_size_matrix(t, 1, 1);
      assert_size_matrix(a, 77, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 11, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      yd2_RightTL3DMultiWalking_raw(p_output1.data(), t.data(),a.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // YD2_RIGHTTL3DMULTIWALKING_HH
