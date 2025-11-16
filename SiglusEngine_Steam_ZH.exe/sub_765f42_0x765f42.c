// 函数: sub_765f42
// 地址: 0x765f42
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 - 0x90) = 0xff
long double x87_r0
long double x87_r1
long double x87_r2
long double st0 = fFEXPH(arg1, x87_r0, x87_r1, x87_r2)
char entry_ebx

if (entry_ebx == 0)
    return sub_764411(arg1) __tailcall

__fscale(ExpHypSum(st0), fneg(float.t(1)))
return sub_75cf78() __tailcall
