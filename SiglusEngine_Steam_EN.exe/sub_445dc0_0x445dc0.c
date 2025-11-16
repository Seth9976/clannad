// 函数: sub_445dc0
// 地址: 0x445dc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = arg1

if (arg1 u> 0x3f || data_13740f0 s<= 0)
    return 0xffffffff

void* edi = nullptr
void* esi_1 = arg1 * 0x3920 + &data_f89afc
void* var_10 = esi_1
int32_t edx = *(arg1 * 0x1d4 + &data_1090b6c)

if (edx != 0xffffffff)
    edi = (sub_576c30(arg1) + (edx << 3)) * 0xff8 + &data_109a7e4

int32_t result = 0

if (data_13740f0 s> 0)
    void* edx_1 = &data_13740fc
    int32_t i = 0
    
    do
        if (arg1 == *(edx_1 - 8))
            int32_t eax_8
            int32_t ecx_2
            
            if (edi == 0)
                eax_8 = *(edx_1 - 4) + *(esi_1 + 0x18) + data_12a291c
                ecx_2 = *edx_1 + *(esi_1 + 0x1c) + data_12a2920
            else
                int32_t eax_5 = *(edi + 0xfec)
                
                if (eax_5 == 1)
                    eax_8 = *(edx_1 - 4) + *(edi + 0xff0) + *(esi_1 + 0x18)
                    ecx_2 = *(edi + 0xff4) + *edx_1 + *(esi_1 + 0x1c)
                else if (eax_5 != 2)
                    eax_8 = *(edx_1 - 4) + *(esi_1 + 0x18) + data_12a291c
                    ecx_2 = *edx_1 + *(esi_1 + 0x1c) + data_12a2920
                else
                    eax_8 = *(edi + 0xff0) + *(esi_1 + 0x294)
                    ecx_2 = *(edi + 0xff4) + *(esi_1 + 0x298)
            
            if (data_131d2cc s>= eax_8)
                esi_1 = var_10
                
                if (data_131d2cc s<= eax_8 + data_13740e0 - 1 && data_1320e58 s>= ecx_2
                        && data_1320e58 s<= data_13740e4 - 1 + ecx_2)
                    return result
            
            arg1 = var_c
            i = result
        
        i += 1
        edx_1 += 0x14
        result = i
    while (i s< data_13740f0)

return 0xffffffff
