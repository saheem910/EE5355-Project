/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:25:46 GMT-04:00
 */

#ifndef JE_COM_MAT_HH
#define JE_COM_MAT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace atlas
{
  namespace basic
  {

    void Je_com_mat_raw(double *p_output1, const double *q);

    inline void Je_com_mat(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &q)
    {
      // Check
      // - Inputs
      assert_size_matrix(q, 21, 1);

	
      // - Outputs
      assert_size_matrix(p_output1, 1, 63);


      // set zero the matrix
      p_output1.setZero();


      // Call Subroutine with raw data
      Je_com_mat_raw(p_output1.data(), q.data());
    }
  
  }
}

#endif // MATLAB_MEX_FILE

#endif // JE_COM_MAT_HH