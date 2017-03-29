/*
 * Automatically Generated from Mathematica.
 * Wed 29 Mar 2017 13:59:48 GMT-05:00
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
  p_output1[61]=3;
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
  p_output1[74]=4;
  p_output1[75]=4;
  p_output1[76]=4;
  p_output1[77]=4;
  p_output1[78]=4;
  p_output1[79]=4;
  p_output1[80]=4;
  p_output1[81]=4;
  p_output1[82]=4;
  p_output1[83]=4;
  p_output1[84]=4;
  p_output1[85]=4;
  p_output1[86]=5;
  p_output1[87]=5;
  p_output1[88]=5;
  p_output1[89]=5;
  p_output1[90]=5;
  p_output1[91]=5;
  p_output1[92]=5;
  p_output1[93]=5;
  p_output1[94]=5;
  p_output1[95]=5;
  p_output1[96]=5;
  p_output1[97]=5;
  p_output1[98]=5;
  p_output1[99]=5;
  p_output1[100]=5;
  p_output1[101]=5;
  p_output1[102]=5;
  p_output1[103]=5;
  p_output1[104]=5;
  p_output1[105]=5;
  p_output1[106]=5;
  p_output1[107]=5;
  p_output1[108]=5;
  p_output1[109]=6;
  p_output1[110]=6;
  p_output1[111]=6;
  p_output1[112]=6;
  p_output1[113]=6;
  p_output1[114]=6;
  p_output1[115]=6;
  p_output1[116]=6;
  p_output1[117]=6;
  p_output1[118]=6;
  p_output1[119]=6;
  p_output1[120]=6;
  p_output1[121]=6;
  p_output1[122]=6;
  p_output1[123]=6;
  p_output1[124]=6;
  p_output1[125]=6;
  p_output1[126]=6;
  p_output1[127]=6;
  p_output1[128]=6;
  p_output1[129]=6;
  p_output1[130]=6;
  p_output1[131]=7;
  p_output1[132]=8;
  p_output1[133]=9;
  p_output1[134]=10;
  p_output1[135]=10;
  p_output1[136]=11;
  p_output1[137]=11;
  p_output1[138]=11;
  p_output1[139]=11;
  p_output1[140]=11;
  p_output1[141]=12;
  p_output1[142]=12;
  p_output1[143]=12;
  p_output1[144]=12;
  p_output1[145]=12;
  p_output1[146]=12;
  p_output1[147]=12;
  p_output1[148]=12;
  p_output1[149]=12;
  p_output1[150]=13;
  p_output1[151]=13;
  p_output1[152]=13;
  p_output1[153]=13;
  p_output1[154]=13;
  p_output1[155]=13;
  p_output1[156]=13;
  p_output1[157]=13;
  p_output1[158]=14;
  p_output1[159]=14;
  p_output1[160]=14;
  p_output1[161]=14;
  p_output1[162]=14;
  p_output1[163]=14;
  p_output1[164]=14;
  p_output1[165]=14;
  p_output1[166]=14;
  p_output1[167]=14;
  p_output1[168]=15;
  p_output1[169]=15;
  p_output1[170]=15;
  p_output1[171]=15;
  p_output1[172]=15;
  p_output1[173]=15;
  p_output1[174]=15;
  p_output1[175]=16;
  p_output1[176]=16;
  p_output1[177]=16;
  p_output1[178]=17;
  p_output1[179]=17;
  p_output1[180]=17;
  p_output1[181]=17;
  p_output1[182]=17;
  p_output1[183]=17;
  p_output1[184]=18;
  p_output1[185]=18;
  p_output1[186]=18;
  p_output1[187]=18;
  p_output1[188]=18;
  p_output1[189]=18;
  p_output1[190]=18;
  p_output1[191]=18;
  p_output1[192]=18;
  p_output1[193]=18;
  p_output1[194]=19;
  p_output1[195]=19;
  p_output1[196]=19;
  p_output1[197]=19;
  p_output1[198]=19;
  p_output1[199]=19;
  p_output1[200]=19;
  p_output1[201]=19;
  p_output1[202]=20;
  p_output1[203]=20;
  p_output1[204]=20;
  p_output1[205]=20;
  p_output1[206]=20;
  p_output1[207]=20;
  p_output1[208]=20;
  p_output1[209]=20;
  p_output1[210]=20;
  p_output1[211]=20;
  p_output1[212]=20;
  p_output1[213]=21;
  p_output1[214]=21;
  p_output1[215]=21;
  p_output1[216]=21;
  p_output1[217]=21;
  p_output1[218]=21;
  p_output1[219]=21;
  p_output1[220]=5;
  p_output1[221]=6;
  p_output1[222]=10;
  p_output1[223]=11;
  p_output1[224]=12;
  p_output1[225]=13;
  p_output1[226]=14;
  p_output1[227]=15;
  p_output1[228]=16;
  p_output1[229]=17;
  p_output1[230]=18;
  p_output1[231]=19;
  p_output1[232]=20;
  p_output1[233]=21;
  p_output1[234]=30;
  p_output1[235]=31;
  p_output1[236]=32;
  p_output1[237]=35;
  p_output1[238]=36;
  p_output1[239]=37;
  p_output1[240]=4;
  p_output1[241]=5;
  p_output1[242]=6;
  p_output1[243]=10;
  p_output1[244]=11;
  p_output1[245]=12;
  p_output1[246]=13;
  p_output1[247]=14;
  p_output1[248]=15;
  p_output1[249]=16;
  p_output1[250]=17;
  p_output1[251]=18;
  p_output1[252]=19;
  p_output1[253]=20;
  p_output1[254]=21;
  p_output1[255]=30;
  p_output1[256]=31;
  p_output1[257]=32;
  p_output1[258]=35;
  p_output1[259]=36;
  p_output1[260]=37;
  p_output1[261]=4;
  p_output1[262]=5;
  p_output1[263]=6;
  p_output1[264]=10;
  p_output1[265]=11;
  p_output1[266]=12;
  p_output1[267]=13;
  p_output1[268]=14;
  p_output1[269]=15;
  p_output1[270]=16;
  p_output1[271]=17;
  p_output1[272]=18;
  p_output1[273]=19;
  p_output1[274]=20;
  p_output1[275]=21;
  p_output1[276]=30;
  p_output1[277]=31;
  p_output1[278]=32;
  p_output1[279]=35;
  p_output1[280]=36;
  p_output1[281]=37;
  p_output1[282]=5;
  p_output1[283]=6;
  p_output1[284]=10;
  p_output1[285]=11;
  p_output1[286]=12;
  p_output1[287]=13;
  p_output1[288]=14;
  p_output1[289]=15;
  p_output1[290]=16;
  p_output1[291]=17;
  p_output1[292]=18;
  p_output1[293]=19;
  p_output1[294]=20;
  p_output1[295]=21;
  p_output1[296]=30;
  p_output1[297]=31;
  p_output1[298]=32;
  p_output1[299]=33;
  p_output1[300]=34;
  p_output1[301]=35;
  p_output1[302]=36;
  p_output1[303]=37;
  p_output1[304]=38;
  p_output1[305]=39;
  p_output1[306]=6;
  p_output1[307]=10;
  p_output1[308]=11;
  p_output1[309]=12;
  p_output1[310]=13;
  p_output1[311]=14;
  p_output1[312]=15;
  p_output1[313]=16;
  p_output1[314]=17;
  p_output1[315]=18;
  p_output1[316]=19;
  p_output1[317]=20;
  p_output1[318]=21;
  p_output1[319]=30;
  p_output1[320]=31;
  p_output1[321]=32;
  p_output1[322]=33;
  p_output1[323]=34;
  p_output1[324]=35;
  p_output1[325]=36;
  p_output1[326]=37;
  p_output1[327]=38;
  p_output1[328]=39;
  p_output1[329]=10;
  p_output1[330]=11;
  p_output1[331]=12;
  p_output1[332]=13;
  p_output1[333]=14;
  p_output1[334]=15;
  p_output1[335]=16;
  p_output1[336]=17;
  p_output1[337]=18;
  p_output1[338]=19;
  p_output1[339]=20;
  p_output1[340]=21;
  p_output1[341]=30;
  p_output1[342]=31;
  p_output1[343]=32;
  p_output1[344]=33;
  p_output1[345]=34;
  p_output1[346]=35;
  p_output1[347]=36;
  p_output1[348]=37;
  p_output1[349]=38;
  p_output1[350]=39;
  p_output1[351]=40;
  p_output1[352]=41;
  p_output1[353]=42;
  p_output1[354]=36;
  p_output1[355]=38;
  p_output1[356]=10;
  p_output1[357]=35;
  p_output1[358]=36;
  p_output1[359]=37;
  p_output1[360]=39;
  p_output1[361]=10;
  p_output1[362]=11;
  p_output1[363]=13;
  p_output1[364]=15;
  p_output1[365]=35;
  p_output1[366]=36;
  p_output1[367]=37;
  p_output1[368]=38;
  p_output1[369]=39;
  p_output1[370]=10;
  p_output1[371]=11;
  p_output1[372]=15;
  p_output1[373]=23;
  p_output1[374]=35;
  p_output1[375]=36;
  p_output1[376]=37;
  p_output1[377]=39;
  p_output1[378]=10;
  p_output1[379]=11;
  p_output1[380]=12;
  p_output1[381]=13;
  p_output1[382]=15;
  p_output1[383]=35;
  p_output1[384]=36;
  p_output1[385]=37;
  p_output1[386]=38;
  p_output1[387]=39;
  p_output1[388]=10;
  p_output1[389]=11;
  p_output1[390]=22;
  p_output1[391]=35;
  p_output1[392]=36;
  p_output1[393]=37;
  p_output1[394]=39;
  p_output1[395]=24;
  p_output1[396]=31;
  p_output1[397]=33;
  p_output1[398]=16;
  p_output1[399]=25;
  p_output1[400]=30;
  p_output1[401]=31;
  p_output1[402]=32;
  p_output1[403]=34;
  p_output1[404]=16;
  p_output1[405]=17;
  p_output1[406]=19;
  p_output1[407]=21;
  p_output1[408]=27;
  p_output1[409]=30;
  p_output1[410]=31;
  p_output1[411]=32;
  p_output1[412]=33;
  p_output1[413]=34;
  p_output1[414]=16;
  p_output1[415]=17;
  p_output1[416]=21;
  p_output1[417]=28;
  p_output1[418]=30;
  p_output1[419]=31;
  p_output1[420]=32;
  p_output1[421]=34;
  p_output1[422]=16;
  p_output1[423]=17;
  p_output1[424]=18;
  p_output1[425]=19;
  p_output1[426]=21;
  p_output1[427]=29;
  p_output1[428]=30;
  p_output1[429]=31;
  p_output1[430]=32;
  p_output1[431]=33;
  p_output1[432]=34;
  p_output1[433]=16;
  p_output1[434]=17;
  p_output1[435]=26;
  p_output1[436]=30;
  p_output1[437]=31;
  p_output1[438]=32;
  p_output1[439]=34;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 220, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var);


}

#else // MATLAB_MEX_FILE

#include "Js_controlDynamics_RightHS3DMultiWalking.hh"

namespace symbolic
{
namespace basic
{

void Js_controlDynamics_RightHS3DMultiWalking_raw(double *p_output1, const double *var)
{
  // Call Subroutines
  output1(p_output1, var);

}

}
}

#endif // MATLAB_MEX_FILE
