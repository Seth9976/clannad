// 函数: sub_4dff30
// 地址: 0x4dff30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg2
int32_t esi = *(arg1 + 0x10)
int32_t eax_2 = (*(arg1 + 0xc) - esi) s>> 2

if (arg2 u> eax_2)
    ecx = eax_2

*(arg1 + 0x10) = esi + (ecx << 2)
int32_t result
result.b = arg2 != ecx
return result
