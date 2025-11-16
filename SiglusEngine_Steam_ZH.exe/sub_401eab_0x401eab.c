// 函数: sub_401eab
// 地址: 0x401eab
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = fconvert.s((fconvert.t(*arg3) - fconvert.t(*arg2)) * fconvert.t(arg5)
    + (fconvert.t(*arg4) - fconvert.t(*arg2)) * fconvert.t(arg6) + fconvert.t(*arg2))
arg1[1] = fconvert.s((fconvert.t(arg3[1]) - fconvert.t(arg2[1])) * fconvert.t(arg5)
    + (fconvert.t(arg4[1]) - fconvert.t(arg2[1])) * fconvert.t(arg6) + fconvert.t(arg2[1]))
arg1[2] = fconvert.s((fconvert.t(arg3[2]) - fconvert.t(arg2[2])) * fconvert.t(arg5)
    + (fconvert.t(arg4[2]) - fconvert.t(arg2[2])) * fconvert.t(arg6) + fconvert.t(arg2[2]))
arg1[3] = fconvert.s((fconvert.t(arg3[3]) - fconvert.t(arg2[3])) * fconvert.t(arg5)
    + (fconvert.t(arg4[3]) - fconvert.t(arg2[3])) * fconvert.t(arg6) + fconvert.t(arg2[3]))
return arg1
