/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 17:57:18 GMT-04:00
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
  p_output1[0]=1;
  p_output1[1]=1;
  p_output1[2]=1;
  p_output1[3]=1;
  p_output1[4]=1;
  p_output1[5]=1;
  p_output1[6]=1;
  p_output1[7]=1;
  p_output1[8]=1;
  p_output1[9]=1;
  p_output1[10]=2;
  p_output1[11]=2;
  p_output1[12]=2;
  p_output1[13]=2;
  p_output1[14]=2;
  p_output1[15]=2;
  p_output1[16]=2;
  p_output1[17]=2;
  p_output1[18]=2;
  p_output1[19]=2;
  p_output1[20]=2;
  p_output1[21]=3;
  p_output1[22]=3;
  p_output1[23]=3;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=4;
  p_output1[33]=4;
  p_output1[34]=4;
  p_output1[35]=4;
  p_output1[36]=4;
  p_output1[37]=4;
  p_output1[38]=4;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=5;
  p_output1[43]=5;
  p_output1[44]=5;
  p_output1[45]=5;
  p_output1[46]=5;
  p_output1[47]=5;
  p_output1[48]=5;
  p_output1[49]=5;
  p_output1[50]=5;
  p_output1[51]=5;
  p_output1[52]=6;
  p_output1[53]=6;
  p_output1[54]=6;
  p_output1[55]=6;
  p_output1[56]=6;
  p_output1[57]=6;
  p_output1[58]=6;
  p_output1[59]=6;
  p_output1[60]=6;
  p_output1[61]=7;
  p_output1[62]=7;
  p_output1[63]=7;
  p_output1[64]=7;
  p_output1[65]=7;
  p_output1[66]=7;
  p_output1[67]=7;
  p_output1[68]=7;
  p_output1[69]=7;
  p_output1[70]=7;
  p_output1[71]=8;
  p_output1[72]=8;
  p_output1[73]=8;
  p_output1[74]=8;
  p_output1[75]=8;
  p_output1[76]=8;
  p_output1[77]=8;
  p_output1[78]=8;
  p_output1[79]=8;
  p_output1[80]=8;
  p_output1[81]=8;
  p_output1[82]=9;
  p_output1[83]=9;
  p_output1[84]=9;
  p_output1[85]=9;
  p_output1[86]=9;
  p_output1[87]=9;
  p_output1[88]=9;
  p_output1[89]=9;
  p_output1[90]=9;
  p_output1[91]=9;
  p_output1[92]=9;
  p_output1[93]=10;
  p_output1[94]=10;
  p_output1[95]=10;
  p_output1[96]=10;
  p_output1[97]=10;
  p_output1[98]=10;
  p_output1[99]=10;
  p_output1[100]=10;
  p_output1[101]=10;
  p_output1[102]=10;
  p_output1[103]=11;
  p_output1[104]=11;
  p_output1[105]=11;
  p_output1[106]=11;
  p_output1[107]=11;
  p_output1[108]=11;
  p_output1[109]=11;
  p_output1[110]=11;
  p_output1[111]=11;
  p_output1[112]=12;
  p_output1[113]=12;
  p_output1[114]=13;
  p_output1[115]=13;
  p_output1[116]=14;
  p_output1[117]=14;
  p_output1[118]=1;
  p_output1[119]=5;
  p_output1[120]=6;
  p_output1[121]=16;
  p_output1[122]=17;
  p_output1[123]=18;
  p_output1[124]=19;
  p_output1[125]=20;
  p_output1[126]=21;
  p_output1[127]=22;
  p_output1[128]=2;
  p_output1[129]=4;
  p_output1[130]=5;
  p_output1[131]=6;
  p_output1[132]=16;
  p_output1[133]=17;
  p_output1[134]=18;
  p_output1[135]=19;
  p_output1[136]=20;
  p_output1[137]=21;
  p_output1[138]=23;
  p_output1[139]=3;
  p_output1[140]=4;
  p_output1[141]=5;
  p_output1[142]=6;
  p_output1[143]=16;
  p_output1[144]=17;
  p_output1[145]=18;
  p_output1[146]=19;
  p_output1[147]=20;
  p_output1[148]=21;
  p_output1[149]=24;
  p_output1[150]=4;
  p_output1[151]=5;
  p_output1[152]=6;
  p_output1[153]=16;
  p_output1[154]=17;
  p_output1[155]=18;
  p_output1[156]=19;
  p_output1[157]=20;
  p_output1[158]=21;
  p_output1[159]=25;
  p_output1[160]=4;
  p_output1[161]=5;
  p_output1[162]=6;
  p_output1[163]=16;
  p_output1[164]=17;
  p_output1[165]=18;
  p_output1[166]=19;
  p_output1[167]=20;
  p_output1[168]=21;
  p_output1[169]=26;
  p_output1[170]=4;
  p_output1[171]=5;
  p_output1[172]=6;
  p_output1[173]=17;
  p_output1[174]=18;
  p_output1[175]=19;
  p_output1[176]=20;
  p_output1[177]=21;
  p_output1[178]=27;
  p_output1[179]=1;
  p_output1[180]=5;
  p_output1[181]=6;
  p_output1[182]=10;
  p_output1[183]=11;
  p_output1[184]=12;
  p_output1[185]=13;
  p_output1[186]=14;
  p_output1[187]=15;
  p_output1[188]=28;
  p_output1[189]=2;
  p_output1[190]=4;
  p_output1[191]=5;
  p_output1[192]=6;
  p_output1[193]=10;
  p_output1[194]=11;
  p_output1[195]=12;
  p_output1[196]=13;
  p_output1[197]=14;
  p_output1[198]=15;
  p_output1[199]=29;
  p_output1[200]=3;
  p_output1[201]=4;
  p_output1[202]=5;
  p_output1[203]=6;
  p_output1[204]=10;
  p_output1[205]=11;
  p_output1[206]=12;
  p_output1[207]=13;
  p_output1[208]=14;
  p_output1[209]=15;
  p_output1[210]=30;
  p_output1[211]=4;
  p_output1[212]=5;
  p_output1[213]=6;
  p_output1[214]=10;
  p_output1[215]=11;
  p_output1[216]=12;
  p_output1[217]=13;
  p_output1[218]=14;
  p_output1[219]=15;
  p_output1[220]=31;
  p_output1[221]=4;
  p_output1[222]=5;
  p_output1[223]=6;
  p_output1[224]=11;
  p_output1[225]=12;
  p_output1[226]=13;
  p_output1[227]=14;
  p_output1[228]=15;
  p_output1[229]=32;
  p_output1[230]=7;
  p_output1[231]=33;
  p_output1[232]=8;
  p_output1[233]=34;
  p_output1[234]=9;
  p_output1[235]=35;
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
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var is wrong.");
    }

  /*  Assign pointers to each input.  */
  var = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 118, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_holPos_RightTS3DMultiWalking.hh"

namespace Kinematics
{
namespace basic
{

void Js_holPos_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
