/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:58:16 GMT-05:00
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
  p_output1[10]=1;
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
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=3;
  p_output1[24]=3;
  p_output1[25]=3;
  p_output1[26]=3;
  p_output1[27]=3;
  p_output1[28]=3;
  p_output1[29]=3;
  p_output1[30]=3;
  p_output1[31]=3;
  p_output1[32]=3;
  p_output1[33]=3;
  p_output1[34]=3;
  p_output1[35]=4;
  p_output1[36]=4;
  p_output1[37]=4;
  p_output1[38]=4;
  p_output1[39]=4;
  p_output1[40]=4;
  p_output1[41]=4;
  p_output1[42]=4;
  p_output1[43]=4;
  p_output1[44]=4;
  p_output1[45]=4;
  p_output1[46]=4;
  p_output1[47]=4;
  p_output1[48]=4;
  p_output1[49]=5;
  p_output1[50]=5;
  p_output1[51]=5;
  p_output1[52]=5;
  p_output1[53]=5;
  p_output1[54]=5;
  p_output1[55]=5;
  p_output1[56]=5;
  p_output1[57]=5;
  p_output1[58]=5;
  p_output1[59]=5;
  p_output1[60]=5;
  p_output1[61]=5;
  p_output1[62]=6;
  p_output1[63]=6;
  p_output1[64]=6;
  p_output1[65]=6;
  p_output1[66]=6;
  p_output1[67]=6;
  p_output1[68]=6;
  p_output1[69]=6;
  p_output1[70]=6;
  p_output1[71]=6;
  p_output1[72]=6;
  p_output1[73]=6;
  p_output1[74]=7;
  p_output1[75]=8;
  p_output1[76]=9;
  p_output1[77]=10;
  p_output1[78]=11;
  p_output1[79]=12;
  p_output1[80]=13;
  p_output1[81]=14;
  p_output1[82]=15;
  p_output1[83]=16;
  p_output1[84]=16;
  p_output1[85]=16;
  p_output1[86]=17;
  p_output1[87]=17;
  p_output1[88]=17;
  p_output1[89]=17;
  p_output1[90]=17;
  p_output1[91]=17;
  p_output1[92]=17;
  p_output1[93]=18;
  p_output1[94]=18;
  p_output1[95]=18;
  p_output1[96]=18;
  p_output1[97]=18;
  p_output1[98]=18;
  p_output1[99]=18;
  p_output1[100]=18;
  p_output1[101]=18;
  p_output1[102]=18;
  p_output1[103]=18;
  p_output1[104]=19;
  p_output1[105]=19;
  p_output1[106]=19;
  p_output1[107]=19;
  p_output1[108]=19;
  p_output1[109]=19;
  p_output1[110]=19;
  p_output1[111]=19;
  p_output1[112]=19;
  p_output1[113]=20;
  p_output1[114]=20;
  p_output1[115]=20;
  p_output1[116]=20;
  p_output1[117]=20;
  p_output1[118]=20;
  p_output1[119]=20;
  p_output1[120]=20;
  p_output1[121]=20;
  p_output1[122]=20;
  p_output1[123]=20;
  p_output1[124]=20;
  p_output1[125]=21;
  p_output1[126]=21;
  p_output1[127]=21;
  p_output1[128]=21;
  p_output1[129]=21;
  p_output1[130]=21;
  p_output1[131]=21;
  p_output1[132]=21;
  p_output1[133]=5;
  p_output1[134]=6;
  p_output1[135]=16;
  p_output1[136]=17;
  p_output1[137]=18;
  p_output1[138]=19;
  p_output1[139]=20;
  p_output1[140]=21;
  p_output1[141]=34;
  p_output1[142]=35;
  p_output1[143]=36;
  p_output1[144]=4;
  p_output1[145]=5;
  p_output1[146]=6;
  p_output1[147]=16;
  p_output1[148]=17;
  p_output1[149]=18;
  p_output1[150]=19;
  p_output1[151]=20;
  p_output1[152]=21;
  p_output1[153]=34;
  p_output1[154]=35;
  p_output1[155]=36;
  p_output1[156]=4;
  p_output1[157]=5;
  p_output1[158]=6;
  p_output1[159]=16;
  p_output1[160]=17;
  p_output1[161]=18;
  p_output1[162]=19;
  p_output1[163]=20;
  p_output1[164]=21;
  p_output1[165]=34;
  p_output1[166]=35;
  p_output1[167]=36;
  p_output1[168]=5;
  p_output1[169]=6;
  p_output1[170]=16;
  p_output1[171]=17;
  p_output1[172]=18;
  p_output1[173]=19;
  p_output1[174]=20;
  p_output1[175]=21;
  p_output1[176]=34;
  p_output1[177]=35;
  p_output1[178]=36;
  p_output1[179]=37;
  p_output1[180]=38;
  p_output1[181]=39;
  p_output1[182]=6;
  p_output1[183]=16;
  p_output1[184]=17;
  p_output1[185]=18;
  p_output1[186]=19;
  p_output1[187]=20;
  p_output1[188]=21;
  p_output1[189]=34;
  p_output1[190]=35;
  p_output1[191]=36;
  p_output1[192]=37;
  p_output1[193]=38;
  p_output1[194]=39;
  p_output1[195]=16;
  p_output1[196]=17;
  p_output1[197]=18;
  p_output1[198]=19;
  p_output1[199]=20;
  p_output1[200]=21;
  p_output1[201]=34;
  p_output1[202]=35;
  p_output1[203]=36;
  p_output1[204]=37;
  p_output1[205]=38;
  p_output1[206]=39;
  p_output1[207]=40;
  p_output1[208]=41;
  p_output1[209]=42;
  p_output1[210]=22;
  p_output1[211]=23;
  p_output1[212]=25;
  p_output1[213]=26;
  p_output1[214]=27;
  p_output1[215]=24;
  p_output1[216]=28;
  p_output1[217]=35;
  p_output1[218]=37;
  p_output1[219]=16;
  p_output1[220]=29;
  p_output1[221]=34;
  p_output1[222]=35;
  p_output1[223]=36;
  p_output1[224]=38;
  p_output1[225]=39;
  p_output1[226]=16;
  p_output1[227]=17;
  p_output1[228]=19;
  p_output1[229]=21;
  p_output1[230]=31;
  p_output1[231]=34;
  p_output1[232]=35;
  p_output1[233]=36;
  p_output1[234]=37;
  p_output1[235]=38;
  p_output1[236]=39;
  p_output1[237]=16;
  p_output1[238]=17;
  p_output1[239]=21;
  p_output1[240]=32;
  p_output1[241]=34;
  p_output1[242]=35;
  p_output1[243]=36;
  p_output1[244]=38;
  p_output1[245]=39;
  p_output1[246]=16;
  p_output1[247]=17;
  p_output1[248]=18;
  p_output1[249]=19;
  p_output1[250]=21;
  p_output1[251]=33;
  p_output1[252]=34;
  p_output1[253]=35;
  p_output1[254]=36;
  p_output1[255]=37;
  p_output1[256]=38;
  p_output1[257]=39;
  p_output1[258]=16;
  p_output1[259]=17;
  p_output1[260]=30;
  p_output1[261]=34;
  p_output1[262]=35;
  p_output1[263]=36;
  p_output1[264]=38;
  p_output1[265]=39;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 133, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_controlDynamics_RightTL3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_controlDynamics_RightTL3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
