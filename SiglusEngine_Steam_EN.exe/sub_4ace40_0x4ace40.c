// 函数: sub_4ace40
// 地址: 0x4ace40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1bfe300:8 == 0)
    return 

int32_t esi_1 = data_1bfe300:0xc

if (esi_1 s<= 0 || arg1 - 1 u> 2)
    return 

int32_t var_8 = 0
int32_t ebx_2 = esi_1 * 0x28
int32_t var_10 = 0
BOOL eax_1 = sub_4d6960(arg1 - 1, &var_8, &var_10, ebx_2, "WAIP_CELL_PAR_SUBMOD")
int32_t ebx_3 = var_8
sub_4d1c30(eax_1, data_1bfe300:8, ebx_3, ebx_2)

if (arg1 == 1)
    int32_t edi_7 = data_1bfe300:8
    int32_t eax_7 = 0
    int32_t edx_12 = ebx_3 - 0x28 + ebx_2
    
    do
        sub_4d1c30(eax_7, edx_12, edi_7, 0x28)
        eax_7 += 1
        edx_12 -= 0x28
        edi_7 += 0x28
    while (eax_7 s< esi_1)
else if (arg1 == 2)
    int32_t eax_4 = data_1bfe300:8
    int32_t edx_6 = var_8
    int32_t ebx_4 = ebx_3 + ebx_2 - 0x28
    sub_4d1c30(eax_4, edx_6, eax_4, 0x28)
    int32_t edi_5 = 1
    var_8 = edx_6 + 0x28
    int32_t eax_5 = eax_4 + 0x28
    
    if (esi_1 s> 1)
        while (true)
            sub_4d1c30(eax_5, ebx_4, eax_5, 0x28)
            ebx_4 -= 0x28
            
            if (edi_5 + 1 s>= esi_1)
                break
            
            int32_t edx_8 = var_8
            sub_4d1c30(eax_5, edx_8, eax_5 + 0x28, 0x28)
            edi_5 += 2
            var_8 = edx_8 + 0x28
            eax_5 += 0x50
            
            if (edi_5 s>= esi_1)
                sub_4d6c40(&var_10, &var_8)
                return 
else
    int32_t edi_3 = arg1 - 3
    
    if (arg1 == 3)
        int32_t eax_2 = data_1bfe300:8
        int32_t edx_3 = ebx_3
        
        do
            sub_4d1c30(eax_2, edx_3, eax_2, 0x28)
            edi_3 += 2
            edx_3 += 0x50
            eax_2 += 0x28
        while (edi_3 s< esi_1)
        
        int32_t edi_4 = 1
        int32_t edx_4 = ebx_3 + 0x28
        
        do
            sub_4d1c30(eax_2, edx_4, eax_2, 0x28)
            edi_4 += 2
            edx_4 += 0x50
            eax_2 += 0x28
        while (edi_4 s< esi_1)
        
        sub_4d6c40(&var_10, &var_8)
        return 

sub_4d6c40(&var_10, &var_8)
