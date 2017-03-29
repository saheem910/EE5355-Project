/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:09 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var,const double *auxdata)
{
  double t1;
  double t2;
  t1 = -1. + auxdata[0];
  t2 = 1/t1;
  p_output1[0]=-1.*var[1] + var[64] - 0.166666666666667*t2*var[0]*(var[22] + 4.*var[43] + var[85]);
  p_output1[1]=-1.*var[2] + var[65] - 0.166666666666667*t2*var[0]*(var[23] + 4.*var[44] + var[86]);
  p_output1[2]=-1.*var[3] + var[66] - 0.166666666666667*t2*var[0]*(var[24] + 4.*var[45] + var[87]);
  p_output1[3]=-1.*var[4] + var[67] - 0.166666666666667*t2*var[0]*(var[25] + 4.*var[46] + var[88]);
  p_output1[4]=-1.*var[5] + var[68] - 0.166666666666667*t2*var[0]*(var[26] + 4.*var[47] + var[89]);
  p_output1[5]=-1.*var[6] + var[69] - 0.166666666666667*t2*var[0]*(var[27] + 4.*var[48] + var[90]);
  p_output1[6]=-1.*var[7] + var[70] - 0.166666666666667*t2*var[0]*(var[28] + 4.*var[49] + var[91]);
  p_output1[7]=-1.*var[8] + var[71] - 0.166666666666667*t2*var[0]*(var[29] + 4.*var[50] + var[92]);
  p_output1[8]=-1.*var[9] + var[72] - 0.166666666666667*t2*var[0]*(var[30] + 4.*var[51] + var[93]);
  p_output1[9]=-1.*var[10] + var[73] - 0.166666666666667*t2*var[0]*(var[31] + 4.*var[52] + var[94]);
  p_output1[10]=-1.*var[11] + var[74] - 0.166666666666667*t2*var[0]*(var[32] + 4.*var[53] + var[95]);
  p_output1[11]=-1.*var[12] + var[75] - 0.166666666666667*t2*var[0]*(var[33] + 4.*var[54] + var[96]);
  p_output1[12]=-1.*var[13] + var[76] - 0.166666666666667*t2*var[0]*(var[34] + 4.*var[55] + var[97]);
  p_output1[13]=-1.*var[14] + var[77] - 0.166666666666667*t2*var[0]*(var[35] + 4.*var[56] + var[98]);
  p_output1[14]=-1.*var[15] + var[78] - 0.166666666666667*t2*var[0]*(var[36] + 4.*var[57] + var[99]);
  p_output1[15]=-1.*var[16] + var[79] - 0.166666666666667*t2*var[0]*(var[37] + 4.*var[58] + var[100]);
  p_output1[16]=-1.*var[17] + var[80] - 0.166666666666667*t2*var[0]*(var[38] + 4.*var[59] + var[101]);
  p_output1[17]=-1.*var[18] + var[81] - 0.166666666666667*t2*var[0]*(var[39] + 4.*var[60] + var[102]);
  p_output1[18]=-1.*var[19] + var[82] - 0.166666666666667*t2*var[0]*(var[40] + 4.*var[61] + var[103]);
  p_output1[19]=-1.*var[20] + var[83] - 0.166666666666667*t2*var[0]*(var[41] + 4.*var[62] + var[104]);
  p_output1[20]=-1.*var[21] + var[84] - 0.166666666666667*t2*var[0]*(var[42] + 4.*var[63] + var[105]);
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var,*auxdata;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var,auxdata).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 106 && ncols == 1) && 
      !(mrows == 1 && ncols == 106))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "auxdata is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
  auxdata = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 21, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var,auxdata);


}

#else // MATLAB_MEX_FILE

#include "f_intVelHS_vec.hh"

namespace Kinematics
{
namespace basic
{

void f_intVelHS_vec_raw(double *p_output1, const double *var,const double *auxdata)
{
  // Call Subroutines
  output1(p_output1, var, auxdata);

}

}
}

#endif // MATLAB_MEX_FILE
