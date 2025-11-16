// 函数: sub_43360a
// 地址: 0x43360a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t result = 0
int32_t* eax = sub_745f3f(0x2c)
int32_t* eax_1

if (eax == 0)
    eax_1 = nullptr
else
    eax_1 = sub_4332f2(eax)

if (eax_1 == 0)
    return 0x8007000e

void* ecx_2 = *(arg2 + 0x18)

if (ecx_2 == 0 || *(ecx_2 + 4) != 0xa)
    result = 0x80004005
    sub_433346(eax_1, 1)
else
    void* ecx_3 = *(arg2 + 0x14)
    
    if (ecx_3 == 0 || *(ecx_3 + 4) != 3 || *(ecx_3 + 0x10) != 9)
        result = 0x80004005
        sub_433346(eax_1, 1)
    else
        int32_t ecx_4 = *(ecx_3 + 0x18)
        
        if (ecx_4 == 0)
            result = 0x80004005
            sub_433346(eax_1, 1)
        else
            eax_1[8] = ecx_4
            eax_1[9] = *(arg2 + 0x18)
            eax_1[0xa] = *(arg1 + 0x350)
            *(arg1 + 0x32c) += 1
            *(arg1 + 0x350) = eax_1

return result
