// 函数: sub_4cb180
// 地址: 0x4cb180
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 4) == 0)
    return 

int32_t edx_1 = *(arg1 + 0x1a4)

if (edx_1 == 0)
    return 

int32_t* ecx = *(arg1 + 8)

if (ecx == 0 || *(arg1 + 0xc) == 0)
    return 

(*(*ecx + 0x74))(ecx, edx_1)
int32_t* eax_1 = *(arg1 + 8)
(*(*eax_1 + 0x24))(eax_1, 0x40000000)
int32_t* eax_2 = *(arg1 + 0xc)
(*(*eax_2 + 0x34))(eax_2, *(arg1 + 0x1a4), 0x40d, 0)
return sub_4cb0b0(arg1) __tailcall
