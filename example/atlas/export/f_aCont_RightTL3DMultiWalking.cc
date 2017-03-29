/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:59:25 GMT-05:00
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
static void output1(double *p_output1,const double *var)
{
  double _NotUsed;
  NULL;
  p_output1[0]=var[0] - var[77];
  p_output1[1]=var[1] - var[78];
  p_output1[2]=var[2] - var[79];
  p_output1[3]=var[3] - var[80];
  p_output1[4]=var[4] - var[81];
  p_output1[5]=var[5] - var[82];
  p_output1[6]=var[6] - var[83];
  p_output1[7]=var[7] - var[84];
  p_output1[8]=var[8] - var[85];
  p_output1[9]=var[9] - var[86];
  p_output1[10]=var[10] - var[87];
  p_output1[11]=var[11] - var[88];
  p_output1[12]=var[12] - var[89];
  p_output1[13]=var[13] - var[90];
  p_output1[14]=var[14] - var[91];
  p_output1[15]=var[15] - var[92];
  p_output1[16]=var[16] - var[93];
  p_output1[17]=var[17] - var[94];
  p_output1[18]=var[18] - var[95];
  p_output1[19]=var[19] - var[96];
  p_output1[20]=var[20] - var[97];
  p_output1[21]=var[21] - var[98];
  p_output1[22]=var[22] - var[99];
  p_output1[23]=var[23] - var[100];
  p_output1[24]=var[24] - var[101];
  p_output1[25]=var[25] - var[102];
  p_output1[26]=var[26] - var[103];
  p_output1[27]=var[27] - var[104];
  p_output1[28]=var[28] - var[105];
  p_output1[29]=var[29] - var[106];
  p_output1[30]=var[30] - var[107];
  p_output1[31]=var[31] - var[108];
  p_output1[32]=var[32] - var[109];
  p_output1[33]=var[33] - var[110];
  p_output1[34]=var[34] - var[111];
  p_output1[35]=var[35] - var[112];
  p_output1[36]=var[36] - var[113];
  p_output1[37]=var[37] - var[114];
  p_output1[38]=var[38] - var[115];
  p_output1[39]=var[39] - var[116];
  p_output1[40]=var[40] - var[117];
  p_output1[41]=var[41] - var[118];
  p_output1[42]=var[42] - var[119];
  p_output1[43]=var[43] - var[120];
  p_output1[44]=var[44] - var[121];
  p_output1[45]=var[45] - var[122];
  p_output1[46]=var[46] - var[123];
  p_output1[47]=var[47] - var[124];
  p_output1[48]=var[48] - var[125];
  p_output1[49]=var[49] - var[126];
  p_output1[50]=var[50] - var[127];
  p_output1[51]=var[51] - var[128];
  p_output1[52]=var[52] - var[129];
  p_output1[53]=var[53] - var[130];
  p_output1[54]=var[54] - var[131];
  p_output1[55]=var[55] - var[132];
  p_output1[56]=var[56] - var[133];
  p_output1[57]=var[57] - var[134];
  p_output1[58]=var[58] - var[135];
  p_output1[59]=var[59] - var[136];
  p_output1[60]=var[60] - var[137];
  p_output1[61]=var[61] - var[138];
  p_output1[62]=var[62] - var[139];
  p_output1[63]=var[63] - var[140];
  p_output1[64]=var[64] - var[141];
  p_output1[65]=var[65] - var[142];
  p_output1[66]=var[66] - var[143];
  p_output1[67]=var[67] - var[144];
  p_output1[68]=var[68] - var[145];
  p_output1[69]=var[69] - var[146];
  p_output1[70]=var[70] - var[147];
  p_output1[71]=var[71] - var[148];
  p_output1[72]=var[72] - var[149];
  p_output1[73]=var[73] - var[150];
  p_output1[74]=var[74] - var[151];
  p_output1[75]=var[75] - var[152];
  p_output1[76]=var[76] - var[153];
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

  double *var;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 154 && ncols == 1) && 
      !(mrows == 1 && ncols == 154))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 77, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "f_aCont_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void f_aCont_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
