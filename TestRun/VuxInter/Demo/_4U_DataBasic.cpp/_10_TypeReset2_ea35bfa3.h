
//VuxInter/Demo/_4U_DataBasic.cpp/_10_TypeReset2_ea35bfa3.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_10_TypeReset2(void*,char**))
#ifdef _VUDEBUG
static char* _10_TypeReset2_vpls_(void* pData,char** strs){ VuxDbgBrkP()
{
    return strs[0];
}}
#else
static char* _10_TypeReset2_vpls_(void* pData,char** strs){__VUFNINFO__("_10_TypeReset2","char*",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {char* __vurtv__= strs[0];VUXFRTY();}
}}
#endif

static char* _10_TypeReset2_vpls(void* pData,char** strs)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _10_TypeReset2(pData,strs);}
	else if(VuxIsRepeatRun()) {return _10_TypeReset2_vpls_(pData,strs);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _10_TypeReset2_vpls_(pData,strs) : _10_TypeReset2(pData,strs);
#else
    {char* vuxRet = _10_TypeReset2_vpls_(pData,strs);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_10_TypeReset2(void*,char**))
