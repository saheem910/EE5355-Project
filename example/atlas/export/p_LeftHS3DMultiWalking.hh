/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:29:41 GMT-04:00
 */

#ifndef P_LEFTHS3DMULTIWALKING_HH
#define P_LEFTHS3DMULTIWALKING_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Kinematics
{
  namespace basic
  {

    void p_LeftHS3DMultiWalking_raw(double *p_output1, const double *q,const double *p);

    inline void p_LeftHS3DMultiWalking(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q,const Eigen::VectorXd &p)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);
      assert_size_matrix(p, 2, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 1);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      p_LeftHS3DMultiWalking_raw(p_output1.data(), q.data(),p.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // P_LEFTHS3DMULTIWALKING_HH
