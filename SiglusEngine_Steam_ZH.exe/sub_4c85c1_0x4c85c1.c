// 函数: sub_4c85c1
// 地址: 0x4c85c1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t eax_1 = **(arg1 + 0x100)
int32_t edi
int32_t var_18 = edi

if ((eax_1 & 0xfff00000) != 0x11400000 || (eax_1 & 0xfffff) != 1)
    return 1

if ((*(arg1 + 0x70) & 4) == 0)
    sub_4a4100(arg1, *(*(arg1 + 0x100) + 0x3c), 0x11c8, 
        "cannot map general loop to this instruction set")
    return 0x80004005

void* eax_5 = sub_49ec23(0x74)
int32_t* edi_1

if (eax_5 == 0)
    edi_1 = nullptr
else
    edi_1 = sub_49e789(eax_5)

if (edi_1 == 0)
    return 0x8007000e

int32_t eax_7 = sub_49ec6e(edi_1, 0x74500001, 2, 1, 0)
int32_t var_8_1 = eax_7
int32_t* ecx_4 = edi_1

if (eax_7 s>= 0)
    int32_t eax_8 = sub_49e7bf(ecx_4, *(arg1 + 0x100))
    var_8_1 = eax_8
    
    if (eax_8 s>= 0)
        int32_t* var_1c_2 = ecx_4
        int32_t* var_20_1 = ecx_4
        var_20_1.q = fconvert.d(float.t(0))
        int32_t eax_9 = sub_49f544(arg1, 0, 0, 0, var_20_1)
        
        if (eax_9 != 0xffffffff)
            int32_t ecx_6 = *(arg1 + 0x14)
            int32_t* ebx_1 = *(ecx_6 + (eax_9 << 2))
            sub_49f070(ebx_1, *(ecx_6 + (**(*(arg1 + 0x100) + 8) << 2)))
            *edi_1[4] = **(*(arg1 + 0x100) + 0x10)
            *edi_1[2] = **(*(arg1 + 0x100) + 8)
            *(edi_1[2] + 4) = eax_9
            
            if (ebx_1[0xe] != 0xffffffff)
                ebx_1[0xf] ^= 0x80000
            else
                int32_t eax_22 = **(*(arg1 + 0x100) + 8)
                *(ebx_1 + 0x3e) |= 8
                ebx_1[0xe] = eax_22
            
            int32_t eax_23 = sub_49eecd(*(arg1 + 0x100), edi_1)
            sub_46cb59(edi_1, 1)
            return eax_23
    
    ecx_4 = edi_1

sub_46cb59(ecx_4, 1)
return var_8_1
