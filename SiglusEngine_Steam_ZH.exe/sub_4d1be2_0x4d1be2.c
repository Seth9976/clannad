// 函数: sub_4d1be2
// 地址: 0x4d1be2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t* edx = arg2
int32_t edi
int32_t var_18 = edi
int16_t eax_2 = (*(*(*(arg1 + 0x14) + (*edx << 2)) + 0x3c)).w
int32_t ecx = 0
int32_t var_c_1 = 0
void* var_8_1 = nullptr

if ((eax_2:1.b & 4) != 0)
    var_8_1 = &data_1000000
else if ((eax_2:1.b & 8) != 0)
    var_8_1 = &data_2000000
else if ((eax_2:1.b & 0x10) != 0)
    var_8_1 = &data_3000000
else if ((eax_2:1.b & 0x20) != 0)
    var_8_1 = 0xf000000
else if ((eax_2:1.b & 0x40) != 0)
    var_8_1 = 0xe000000
else if (eax_2:1.b s< 0)
    var_8_1 = 0xd000000

if ((eax_2:1.b & 2) != 0)
    var_8_1:2.b |= 0x10

if (arg5 == 0)
    int32_t edi_2 = 0
    
    if (arg3 u> 0)
        do
            int32_t eax_5 = *(*(*(arg1 + 0x14) + (edx[edi_2] << 2)) + 0x10)
            ecx = 0
            int32_t ebx_1 = 0
            
            if (eax_5 == 0)
                ebx_1 = 0x10000
            else if (eax_5 == 1)
                ebx_1 = 0x20000
            else if (eax_5 == 2)
                ebx_1 = 0x40000
            else if (eax_5 == 3)
                ebx_1 = 0x80000
            
            if ((var_c_1 & ebx_1) != 0)
                sub_4a4100(arg1, *(*(arg1 + 0x100) + 0x3c), 0x12d5, 
                    "internal error: overlapping output writes")
                edx = arg2
                ecx = 0
            
            var_c_1 |= ebx_1
            edi_2 += 1
        while (edi_2 u< arg3)
else
    var_c_1 = 0xf0000

if ((*(arg1 + 0x6e) & 0x80) != 0)
    if ((var_c_1:2.b & 8) == 0)
        var_c_1 = 0x70000
    else if ((var_c_1:2.b & 7) != 0)
        var_c_1 = 0xf0000

if ((*(arg1 + 0xcc) & 1) != 0 && *(arg1 + 0x124) != 0 && arg3 u> 0)
    do
        int32_t ebx_2 = edx[ecx]
        int32_t eax_13 = ecx + *(arg1 + 0x128) * 6
        ecx += 1
        *(*(arg1 + 0x124) + (eax_13 << 2) - 0x10) = ebx_2
    while (ecx u< arg3)

*arg4 = var_8_1 | var_c_1
return 0
