// 函数: sub_5efe10
// 地址: 0x5efe10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = data_1c45568
char* edi = data_1c4556c
int32_t ebx = data_1ccce68
int32_t edx = data_1c4599c
int32_t i_1 = data_1c4ce28 + 1
int32_t i

do
    i = i_1
    int32_t temp0_1 = edx
    edx += data_1c05510
    
    if (temp0_1 + data_1c05510 s>= 0)
        int32_t temp3_1
        
        do
            if (edi s>= data_1c45544)
                if (edi s> data_1c05508)
                    return 
                
                int32_t ebx_2
                ebx_2.b = *esi
                int32_t eax_1
                eax_1.b = *edi
                int32_t ecx_7 = *(*((ebx_2 << 2) + &data_1c4ca20) + (eax_1 << 2))
                
                if (ecx_7 != 0)
                    *edi = ecx_7.b
            
            edi = &edi[1]
            temp3_1 = edx
            edx -= data_1ccd294
        while (temp3_1 - data_1ccd294 s>= 0)
    
    esi = &esi[ebx]
    i_1 = i - 1
while (i != 1)
