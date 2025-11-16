// 函数: sub_605e10
// 地址: 0x605e10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
int32_t ecx = *arg2

if (ecx != 0)
    *arg1 = ecx
    
    if ((ecx.b & 1) == 0)
        (*(ecx & 0xfffffffe))(&arg2[2], &arg1[2], 0)
    else
        *(arg1 + 8) = *(arg2 + 8)
        *(arg1 + 0x18) = *(arg2 + 0x18)

arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
int32_t eax_7
eax_7.b = arg2[0xc].b
arg1[0xc].b = eax_7.b
return arg1
