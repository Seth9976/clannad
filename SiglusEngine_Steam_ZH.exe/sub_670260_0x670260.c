// 函数: sub_670260
// 地址: 0x670260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
void** eax = sub_6700c0(arg1, arg3)

if (eax != *edi && sub_670200(arg3, &eax[4]) == 0)
    *arg2 = eax
    return arg2

*arg2 = *edi
return arg2
