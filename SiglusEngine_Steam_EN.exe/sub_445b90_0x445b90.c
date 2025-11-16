// 函数: sub_445b90
// 地址: 0x445b90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f || data_13740b0 == 0 || data_13740f0 s<= 0)
    return 

void* var_10_1 = nullptr
void* eax_2 = &(&data_1090ae4)[arg1 * 0x75]
int32_t edi_1 = *(eax_2 + 0x88)

if (edi_1 != 0xffffffff)
    eax_2 = sub_576c30(arg1) + (edi_1 << 3)
    var_10_1 = eax_2 * 0xff8 + &data_109a7e4

void var_9c
sub_4d1c30(eax_2, 0x1374238, &var_9c, 0x8c)
int32_t eax = data_13740f0
int32_t ecx_4 = 0
int32_t var_c_1 = 0

if (eax s<= 0)
    return 

int32_t edx_1 = arg1
void* edi_2 = &data_13740fc

do
    if (edx_1 == *(edi_2 - 8))
        void* eax_12
        int32_t var_98_3
        
        if (var_10_1 == 0)
            var_98_3 = *(edi_2 - 4) + *(arg1 * 0x3920 + 0xf8c75c) + *(arg1 * 0x3920 + 0xf89b14)
                + data_12a291c
            eax_12 =
                *(arg1 * 0x3920 + 0xf8c760) + *(arg1 * 0x3920 + 0xf89b18) + *edi_2 + data_12a2920
        else
            int32_t eax_4 = *(var_10_1 + 0xfec)
            
            if (eax_4 == 1)
                int32_t var_98_1 = *(edi_2 - 4) + *(arg1 * 0x3920 + 0xf8c75c) + *(var_10_1 + 0xff0)
                    + *(arg1 * 0x3920 + 0xf89b14)
                eax_12 = *(arg1 * 0x3920 + 0xf8c760) + *(var_10_1 + 0xff4)
                    + *(arg1 * 0x3920 + 0xf89b18) + *edi_2
            else if (eax_4 != 2)
                var_98_3 = *(edi_2 - 4) + *(arg1 * 0x3920 + 0xf8c75c) + *(arg1 * 0x3920 + 0xf89b14)
                    + data_12a291c
                eax_12 = *(arg1 * 0x3920 + 0xf8c760) + *(arg1 * 0x3920 + 0xf89b18) + *edi_2
                    + data_12a2920
            else
                int32_t var_98_2 =
                    *(arg1 * 0x3920 + 0xf8c754) + *(var_10_1 + 0xff0) + *(arg1 * 0x3920 + 0xf89d90)
                eax_12 =
                    *(arg1 * 0x3920 + 0xf8c758) + *(var_10_1 + 0xff4) + *(arg1 * 0x3920 + 0xf89d94)
        void* var_94_1 = eax_12
        sub_424660(eax_12, &var_9c, &data_13740b0, 1, 0, 0, 0)
        eax = data_13740f0
        ecx_4 = var_c_1
        edx_1 = arg1
    
    ecx_4 += 1
    edi_2 += 0x14
    var_c_1 = ecx_4
while (ecx_4 s< eax)
