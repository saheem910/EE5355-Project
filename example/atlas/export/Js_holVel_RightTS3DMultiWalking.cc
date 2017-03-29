/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:57:30 GMT-05:00
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
  p_output1[11]=1;
  p_output1[12]=1;
  p_output1[13]=1;
  p_output1[14]=1;
  p_output1[15]=1;
  p_output1[16]=1;
  p_output1[17]=1;
  p_output1[18]=1;
  p_output1[19]=1;
  p_output1[20]=2;
  p_output1[21]=2;
  p_output1[22]=2;
  p_output1[23]=2;
  p_output1[24]=2;
  p_output1[25]=2;
  p_output1[26]=2;
  p_output1[27]=2;
  p_output1[28]=2;
  p_output1[29]=2;
  p_output1[30]=2;
  p_output1[31]=2;
  p_output1[32]=2;
  p_output1[33]=2;
  p_output1[34]=2;
  p_output1[35]=2;
  p_output1[36]=2;
  p_output1[37]=2;
  p_output1[38]=2;
  p_output1[39]=2;
  p_output1[40]=2;
  p_output1[41]=3;
  p_output1[42]=3;
  p_output1[43]=3;
  p_output1[44]=3;
  p_output1[45]=3;
  p_output1[46]=3;
  p_output1[47]=3;
  p_output1[48]=3;
  p_output1[49]=3;
  p_output1[50]=3;
  p_output1[51]=3;
  p_output1[52]=3;
  p_output1[53]=3;
  p_output1[54]=3;
  p_output1[55]=3;
  p_output1[56]=3;
  p_output1[57]=3;
  p_output1[58]=3;
  p_output1[59]=3;
  p_output1[60]=3;
  p_output1[61]=4;
  p_output1[62]=4;
  p_output1[63]=4;
  p_output1[64]=4;
  p_output1[65]=4;
  p_output1[66]=4;
  p_output1[67]=4;
  p_output1[68]=4;
  p_output1[69]=4;
  p_output1[70]=4;
  p_output1[71]=4;
  p_output1[72]=4;
  p_output1[73]=4;
  p_output1[74]=5;
  p_output1[75]=5;
  p_output1[76]=5;
  p_output1[77]=5;
  p_output1[78]=5;
  p_output1[79]=5;
  p_output1[80]=5;
  p_output1[81]=5;
  p_output1[82]=5;
  p_output1[83]=5;
  p_output1[84]=5;
  p_output1[85]=5;
  p_output1[86]=5;
  p_output1[87]=5;
  p_output1[88]=5;
  p_output1[89]=5;
  p_output1[90]=6;
  p_output1[91]=6;
  p_output1[92]=6;
  p_output1[93]=6;
  p_output1[94]=6;
  p_output1[95]=6;
  p_output1[96]=6;
  p_output1[97]=6;
  p_output1[98]=6;
  p_output1[99]=6;
  p_output1[100]=6;
  p_output1[101]=6;
  p_output1[102]=6;
  p_output1[103]=6;
  p_output1[104]=6;
  p_output1[105]=6;
  p_output1[106]=7;
  p_output1[107]=7;
  p_output1[108]=7;
  p_output1[109]=7;
  p_output1[110]=7;
  p_output1[111]=7;
  p_output1[112]=7;
  p_output1[113]=7;
  p_output1[114]=7;
  p_output1[115]=7;
  p_output1[116]=7;
  p_output1[117]=7;
  p_output1[118]=7;
  p_output1[119]=7;
  p_output1[120]=7;
  p_output1[121]=7;
  p_output1[122]=7;
  p_output1[123]=7;
  p_output1[124]=7;
  p_output1[125]=7;
  p_output1[126]=8;
  p_output1[127]=8;
  p_output1[128]=8;
  p_output1[129]=8;
  p_output1[130]=8;
  p_output1[131]=8;
  p_output1[132]=8;
  p_output1[133]=8;
  p_output1[134]=8;
  p_output1[135]=8;
  p_output1[136]=8;
  p_output1[137]=8;
  p_output1[138]=8;
  p_output1[139]=8;
  p_output1[140]=8;
  p_output1[141]=8;
  p_output1[142]=8;
  p_output1[143]=8;
  p_output1[144]=8;
  p_output1[145]=8;
  p_output1[146]=8;
  p_output1[147]=9;
  p_output1[148]=9;
  p_output1[149]=9;
  p_output1[150]=9;
  p_output1[151]=9;
  p_output1[152]=9;
  p_output1[153]=9;
  p_output1[154]=9;
  p_output1[155]=9;
  p_output1[156]=9;
  p_output1[157]=9;
  p_output1[158]=9;
  p_output1[159]=9;
  p_output1[160]=9;
  p_output1[161]=9;
  p_output1[162]=9;
  p_output1[163]=9;
  p_output1[164]=9;
  p_output1[165]=9;
  p_output1[166]=9;
  p_output1[167]=10;
  p_output1[168]=10;
  p_output1[169]=10;
  p_output1[170]=10;
  p_output1[171]=10;
  p_output1[172]=10;
  p_output1[173]=10;
  p_output1[174]=10;
  p_output1[175]=10;
  p_output1[176]=10;
  p_output1[177]=10;
  p_output1[178]=10;
  p_output1[179]=10;
  p_output1[180]=11;
  p_output1[181]=11;
  p_output1[182]=11;
  p_output1[183]=11;
  p_output1[184]=11;
  p_output1[185]=11;
  p_output1[186]=11;
  p_output1[187]=11;
  p_output1[188]=11;
  p_output1[189]=11;
  p_output1[190]=11;
  p_output1[191]=11;
  p_output1[192]=11;
  p_output1[193]=11;
  p_output1[194]=11;
  p_output1[195]=11;
  p_output1[196]=12;
  p_output1[197]=13;
  p_output1[198]=14;
  p_output1[199]=4;
  p_output1[200]=5;
  p_output1[201]=6;
  p_output1[202]=16;
  p_output1[203]=17;
  p_output1[204]=18;
  p_output1[205]=19;
  p_output1[206]=20;
  p_output1[207]=21;
  p_output1[208]=22;
  p_output1[209]=23;
  p_output1[210]=24;
  p_output1[211]=25;
  p_output1[212]=26;
  p_output1[213]=27;
  p_output1[214]=38;
  p_output1[215]=39;
  p_output1[216]=40;
  p_output1[217]=41;
  p_output1[218]=42;
  p_output1[219]=4;
  p_output1[220]=5;
  p_output1[221]=6;
  p_output1[222]=16;
  p_output1[223]=17;
  p_output1[224]=18;
  p_output1[225]=19;
  p_output1[226]=20;
  p_output1[227]=21;
  p_output1[228]=22;
  p_output1[229]=23;
  p_output1[230]=24;
  p_output1[231]=25;
  p_output1[232]=26;
  p_output1[233]=27;
  p_output1[234]=37;
  p_output1[235]=38;
  p_output1[236]=39;
  p_output1[237]=40;
  p_output1[238]=41;
  p_output1[239]=42;
  p_output1[240]=4;
  p_output1[241]=5;
  p_output1[242]=6;
  p_output1[243]=16;
  p_output1[244]=17;
  p_output1[245]=18;
  p_output1[246]=19;
  p_output1[247]=20;
  p_output1[248]=21;
  p_output1[249]=22;
  p_output1[250]=23;
  p_output1[251]=24;
  p_output1[252]=25;
  p_output1[253]=26;
  p_output1[254]=27;
  p_output1[255]=38;
  p_output1[256]=39;
  p_output1[257]=40;
  p_output1[258]=41;
  p_output1[259]=42;
  p_output1[260]=5;
  p_output1[261]=6;
  p_output1[262]=17;
  p_output1[263]=18;
  p_output1[264]=19;
  p_output1[265]=20;
  p_output1[266]=21;
  p_output1[267]=25;
  p_output1[268]=26;
  p_output1[269]=27;
  p_output1[270]=37;
  p_output1[271]=39;
  p_output1[272]=41;
  p_output1[273]=5;
  p_output1[274]=6;
  p_output1[275]=16;
  p_output1[276]=17;
  p_output1[277]=18;
  p_output1[278]=19;
  p_output1[279]=20;
  p_output1[280]=21;
  p_output1[281]=25;
  p_output1[282]=26;
  p_output1[283]=27;
  p_output1[284]=38;
  p_output1[285]=39;
  p_output1[286]=40;
  p_output1[287]=41;
  p_output1[288]=42;
  p_output1[289]=5;
  p_output1[290]=6;
  p_output1[291]=16;
  p_output1[292]=17;
  p_output1[293]=18;
  p_output1[294]=19;
  p_output1[295]=20;
  p_output1[296]=21;
  p_output1[297]=25;
  p_output1[298]=26;
  p_output1[299]=27;
  p_output1[300]=38;
  p_output1[301]=39;
  p_output1[302]=40;
  p_output1[303]=41;
  p_output1[304]=42;
  p_output1[305]=4;
  p_output1[306]=5;
  p_output1[307]=6;
  p_output1[308]=10;
  p_output1[309]=11;
  p_output1[310]=12;
  p_output1[311]=13;
  p_output1[312]=14;
  p_output1[313]=15;
  p_output1[314]=22;
  p_output1[315]=23;
  p_output1[316]=24;
  p_output1[317]=25;
  p_output1[318]=26;
  p_output1[319]=27;
  p_output1[320]=32;
  p_output1[321]=33;
  p_output1[322]=34;
  p_output1[323]=35;
  p_output1[324]=36;
  p_output1[325]=4;
  p_output1[326]=5;
  p_output1[327]=6;
  p_output1[328]=10;
  p_output1[329]=11;
  p_output1[330]=12;
  p_output1[331]=13;
  p_output1[332]=14;
  p_output1[333]=15;
  p_output1[334]=22;
  p_output1[335]=23;
  p_output1[336]=24;
  p_output1[337]=25;
  p_output1[338]=26;
  p_output1[339]=27;
  p_output1[340]=31;
  p_output1[341]=32;
  p_output1[342]=33;
  p_output1[343]=34;
  p_output1[344]=35;
  p_output1[345]=36;
  p_output1[346]=4;
  p_output1[347]=5;
  p_output1[348]=6;
  p_output1[349]=10;
  p_output1[350]=11;
  p_output1[351]=12;
  p_output1[352]=13;
  p_output1[353]=14;
  p_output1[354]=15;
  p_output1[355]=22;
  p_output1[356]=23;
  p_output1[357]=24;
  p_output1[358]=25;
  p_output1[359]=26;
  p_output1[360]=27;
  p_output1[361]=32;
  p_output1[362]=33;
  p_output1[363]=34;
  p_output1[364]=35;
  p_output1[365]=36;
  p_output1[366]=5;
  p_output1[367]=6;
  p_output1[368]=11;
  p_output1[369]=12;
  p_output1[370]=13;
  p_output1[371]=14;
  p_output1[372]=15;
  p_output1[373]=25;
  p_output1[374]=26;
  p_output1[375]=27;
  p_output1[376]=31;
  p_output1[377]=33;
  p_output1[378]=35;
  p_output1[379]=5;
  p_output1[380]=6;
  p_output1[381]=10;
  p_output1[382]=11;
  p_output1[383]=12;
  p_output1[384]=13;
  p_output1[385]=14;
  p_output1[386]=15;
  p_output1[387]=25;
  p_output1[388]=26;
  p_output1[389]=27;
  p_output1[390]=32;
  p_output1[391]=33;
  p_output1[392]=34;
  p_output1[393]=35;
  p_output1[394]=36;
  p_output1[395]=28;
  p_output1[396]=29;
  p_output1[397]=30;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 199, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_holVel_RightTS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_holVel_RightTS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
