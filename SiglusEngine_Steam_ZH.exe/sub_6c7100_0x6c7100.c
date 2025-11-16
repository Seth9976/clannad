// 函数: sub_6c7100
// 地址: 0x6c7100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t nNumerator = *(arg1 + 0x1c)

if (nNumerator == 0)
    int32_t eax = *(arg1 + 0xc)
    *(arg1 + 8) = eax
    return eax

if (nNumerator == 0x186a0)
    int32_t eax_1 = *(arg1 + 0x10)
    *(arg1 + 8) = eax_1
    return eax_1

int32_t edi = *(arg1 + 0x10)
int32_t eax_4 = MulDiv(*(arg1 + 0x18) - *(arg1 + 0x14), nNumerator, 0x186a0)
int32_t ecx = *(arg1 + 0xc)

if (eax_4 s>= ecx)
    ecx = eax_4
    
    if (eax_4 s> edi)
        ecx = edi

*(arg1 + 8) = ecx
return eax_4
