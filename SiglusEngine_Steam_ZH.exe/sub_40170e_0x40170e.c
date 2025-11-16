// 函数: sub_40170e
// 地址: 0x40170e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = fconvert.s((fconvert.t(*arg3) - fconvert.t(*arg2)) * fconvert.t(arg5)
    + (fconvert.t(*arg4) - fconvert.t(*arg2)) * fconvert.t(arg6) + fconvert.t(*arg2))
arg1[1] = fconvert.s((fconvert.t(arg3[1]) - fconvert.t(arg2[1])) * fconvert.t(arg5)
    + (fconvert.t(arg4[1]) - fconvert.t(arg2[1])) * fconvert.t(arg6) + fconvert.t(arg2[1]))
arg1[2] = fconvert.s((fconvert.t(arg3[2]) - fconvert.t(arg2[2])) * fconvert.t(arg5)
    + (fconvert.t(arg4[2]) - fconvert.t(arg2[2])) * fconvert.t(arg6) + fconvert.t(arg2[2]))
return arg1
