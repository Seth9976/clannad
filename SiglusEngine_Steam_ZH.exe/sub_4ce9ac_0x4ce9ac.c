// 函数: sub_4ce9ac
// 地址: 0x4ce9ac
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*arg1[0x40] != 0x50000002)
    return 1

int32_t edi
int32_t var_8 = edi
void* eax_2 = sub_49ec23(0x74)
int32_t* edi_1

if (eax_2 == 0)
    edi_1 = nullptr
else
    edi_1 = sub_49e789(eax_2)

if (edi_1 == 0)
    return 0x8007000e

int32_t result = sub_49ec6e(edi_1, 0x70800002, 6, 1, 0)

if (result s>= 0)
    result = sub_49e7bf(edi_1, arg1[0x40])
    
    if (result s>= 0)
        *edi_1[4] = **(arg1[0x40] + 0x10)
        int32_t ecx_6
        
        for (int32_t* i = nullptr; i u< 0x10; i = &i[1])
            ecx_6 = *(i + *(arg1[0x40] + 8))
            *(i + edi_1[2]) = ecx_6
        
        int32_t var_10_2 = ecx_6
        int32_t var_14_1 = ecx_6
        var_14_1.q = fconvert.d(float.t(0))
        int32_t eax_9 = sub_49f544(arg1, arg1[0x1e], 0, 0, var_14_1)
        
        if (eax_9 == 0xffffffff)
            return 0x8007000e
        
        *(edi_1[2] + 0x10) = eax_9
        *(edi_1[2] + 0x14) = eax_9
        
        if ((*(*arg1 + 0x30))(edi_1) == 0)
            result = sub_49eecd(arg1[0x40], edi_1)
        else
            result = 1

sub_46cb59(edi_1, 1)
return result
