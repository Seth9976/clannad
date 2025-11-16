// 函数: sub_6de960
// 地址: 0x6de960
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* ecx = *(arg1 + 4)

if (ecx == 0 || *(arg1 + 8) == 0)
    int32_t eax
    eax.b = 0
    return eax

(*(*ecx + 0x10))(ecx, &var_8, 0)
int32_t ecx_1 = *(arg1 + 0x14)
uint32_t temp0 = divu.dp.d(0:(var_8 * 0x64), *(arg1 + 8))

if (ecx_1 == 0)
    sub_6de9d0(arg1, 0)
else if (ecx_1 != 1)
    if (ecx_1 == 2 && temp0 - 0x32 u<= 0x31)
        sub_6de9d0(arg1, 0)
else if (temp0 u< 0x32)
    sub_6de9d0(arg1, ecx_1)
    void* eax_4
    eax_4.b = 1
    return eax_4

uint32_t eax_3
eax_3.b = 1
return eax_3
