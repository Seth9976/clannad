// 函数: sub_5ef670
// 地址: 0x5ef670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t esi
int32_t edi

if (data_1c4ce48 == 0)
    if (data_1c4ce28 == 0)
        int32_t var_4 = ebx
        int32_t var_8 = esi
        int32_t var_c = edi
        char* esi_1 = data_1c45568
        char* edi_1 = data_1c4556c
        int32_t edx_2 = data_1c4599c
        int32_t var_14_1 = ebx
        int32_t edx_3 = edx_2 + data_1c05510
        
        if (edx_2 + data_1c05510 s>= 0)
            int32_t temp5_1
            
            do
                if (edi_1 s>= data_1c45544)
                    if (edi_1 s> data_1c05508)
                        break
                    
                    *edi_1 = *esi_1
                
                edi_1 = &edi_1[1]
                temp5_1 = edx_3
                edx_3 -= data_1ccd294
            while (temp5_1 - data_1ccd294 s>= 0)
        
        return 
    
    return sub_5ef510() __tailcall

if (data_1c4ce28 != 0)
    return sub_5ef5f0() __tailcall

int32_t var_4_1 = ebx
int32_t var_8_1 = esi
int32_t var_c_1 = edi
char* esi_3 = data_1c45568
char* edi_3 = data_1c4556c
int32_t ebx_5 = data_1ccce74
int32_t edx_4 = data_1c4599c
int32_t i_1 = data_1c4ce48 + 1
int32_t i

do
    int32_t temp2_1 = edx_4
    edx_4 += data_1c05510
    
    if (temp2_1 + data_1c05510 s>= 0)
        int32_t temp7_1
        
        do
            if (edi_3 s>= data_1c45544)
                if (edi_3 s> data_1c05508)
                    return 
                
                *edi_3 = *esi_3
            
            edi_3 = &edi_3[1]
            temp7_1 = edx_4
            edx_4 -= data_1ccd294
        while (temp7_1 - data_1ccd294 s>= 0)
    
    esi_3 = &esi_3[ebx_5]
    i = i_1
    i_1 -= 1
while (i != 1)
