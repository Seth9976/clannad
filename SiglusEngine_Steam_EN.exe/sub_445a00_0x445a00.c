// 函数: sub_445a00
// 地址: 0x445a00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f || data_13740b0 == 0)
    return 

int32_t edi_1 = data_13740f0

if (edi_1 s<= 0)
    return 

void* var_8_1 = nullptr
int32_t eax = *(arg1 * 0x1d4 + &data_1090b6c)

if (eax != 0xffffffff)
    var_8_1 = (sub_576c30(arg1) + (eax << 3)) * 0xff8 + &data_109a7e4

int32_t esi_1 = data_1374350
int32_t var_c_2 = 0

if (edi_1 s> 0)
    eax = data_13740f0
    void* edi_2 = &data_13740fc
    int32_t ecx_7
    
    do
        if (arg1 == *(edi_2 - 8))
            int32_t eax_17
            
            if (var_8_1 == 0)
            label_445b21:
                *((esi_1 << 2) + &data_1374354) = *(edi_2 - 4) + *(arg1 * 0x3920 + 0xf8c75c)
                    + data_12a291c + *(arg1 * 0x3920 + 0xf89b14)
                eax_17 = *edi_2 + *(arg1 * 0x3920 + 0xf8c760) + data_12a2920
                    + *(arg1 * 0x3920 + 0xf89b18)
            else
                int32_t eax_4 = *(var_8_1 + 0xfec)
                
                if (eax_4 != 1)
                    if (eax_4 != 2)
                        goto label_445b21
                    
                    *((esi_1 << 2) + &data_1374354) = *(var_8_1 + 0xff0)
                        + *(arg1 * 0x3920 + 0xf89d90) + *(arg1 * 0x3920 + 0xf8c754)
                    eax_17 = *(arg1 * 0x3920 + 0xf89d94) + *(arg1 * 0x3920 + 0xf8c758)
                        + *(var_8_1 + 0xff4)
                else
                    *((esi_1 << 2) + &data_1374354) = *(edi_2 - 4) + *(var_8_1 + 0xff0)
                        + *(arg1 * 0x3920 + 0xf8c75c) + *(arg1 * 0x3920 + 0xf89b14)
                    eax_17 = *edi_2 + *(arg1 * 0x3920 + 0xf8c760) + *(var_8_1 + 0xff4)
                        + *(arg1 * 0x3920 + 0xf89b18)
            
            *((esi_1 << 2) + &data_13743d4) = eax_17
            *((esi_1 << 2) + &data_1374454) = data_13740e0 - 1 + *((esi_1 << 2) + &data_1374354)
            *((esi_1 << 2) + &data_13744d4) = data_13740e4 - 1 + *((esi_1 << 2) + &data_13743d4)
            esi_1 += 1
            eax = data_13740f0
        
        edi_2 += 0x14
        ecx_7 = var_c_2 + 1
        var_c_2 = ecx_7
    while (ecx_7 s< eax)

data_1374350 = esi_1
