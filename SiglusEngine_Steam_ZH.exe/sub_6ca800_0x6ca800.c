// 函数: sub_6ca800
// 地址: 0x6ca800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((*(arg1 + 0x78) & 2) != 0)
    sub_7233d0(arg1 + 0x84)

sub_6d50b0(arg1, arg1 + 0xbc)
int32_t eax = *(arg1 + 0x124)

if (eax != 0)
    int32_t ecx_2 = *(arg1 + 0x258)
    
    if (ecx_2 == 0)
        _free(eax)
    else
        ecx_2(arg1, eax)

int32_t eax_1 = *(arg1 + 0x120)
*(arg1 + 0x124) = 0

if (eax_1 != 0)
    int32_t ecx_3 = *(arg1 + 0x258)
    
    if (ecx_3 == 0)
        _free(eax_1)
    else
        ecx_3(arg1, eax_1)

int32_t eax_2 = *(arg1 + 0x128)

if (eax_2 != 0)
    int32_t ecx_4 = *(arg1 + 0x258)
    
    if (ecx_4 == 0)
        _free(eax_2)
    else
        ecx_4(arg1, eax_2)

int32_t eax_3 = *(arg1 + 0x12c)

if (eax_3 != 0)
    int32_t ecx_5 = *(arg1 + 0x258)
    
    if (ecx_5 == 0)
        _free(eax_3)
    else
        ecx_5(arg1, eax_3)

int32_t eax_5 = *(arg1 + 0x23c)
*(arg1 + 0x120) = 0
*(arg1 + 0x128) = 0
*(arg1 + 0x12c) = 0

if (eax_5 != 0)
    int32_t ecx_6 = *(arg1 + 0x258)
    
    if (ecx_6 != 0)
        int32_t eax_4 = ecx_6(arg1, eax_5)
        *(arg1 + 0x23c) = 0
        return eax_4
    
    eax_5 = _free(eax_5)

*(arg1 + 0x23c) = 0
return eax_5
