// 函数: sub_4333e0
// 地址: 0x4333e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t eax = sub_4312fc(arg1, arg2)

if (eax == 0)
    return 0x8876086c

void* ecx_2 = *(*(eax + 4) + 0x2c)

if (arg3 == 0)
    if ((*(ecx_2 + 0x1c) & 8) != 0)
        int32_t* ecx_11 = *(*(eax + 4) + 0x44) + *(arg1 + 0x33c)
        *ecx_11 |= 1
    
    void* ecx_13 = *(*(eax + 4) + 0x2c)
    *(ecx_13 + 0x1c) &= 0x7f
    int32_t* eax_6 = *(*(eax + 4) + 0x44) + *(arg1 + 0x33c)
    *eax_6 &= 0xfffffffd
else
    if ((*(ecx_2 + 0x1c) & 8) != 0)
        int32_t* ecx_5 = *(*(eax + 4) + 0x44) + *(arg1 + 0x33c)
        *ecx_5 &= 0xfffffffe
    
    void* ecx_7 = *(*(eax + 4) + 0x2c)
    *(ecx_7 + 0x1c) |= 0x80
    int32_t* eax_3 = *(*(eax + 4) + 0x44) + *(arg1 + 0x33c)
    *eax_3 |= 2

return 0
