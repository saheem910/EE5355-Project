/*
 * Automatically Generated from Mathematica.
 * Mon 10 Apr 2017 15:18:09 GMT-04:00
 */

#ifndef JP_RIGHTTL3DMULTIWALKING_HH
#define JP_RIGHTTL3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void Jp_RightTL3DMultiWalking_raw(double *p_output1, const double *q,const double *p);

    inline void Jp_RightTL3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q,const Eigen::VectorXd &p)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);
      assert_size_matrix(p, 2, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 21);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Jp_RightTL3DMultiWalking_raw(p_output1.data(), q.data(),p.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JP_RIGHTTL3DMULTIWALKING_HH
