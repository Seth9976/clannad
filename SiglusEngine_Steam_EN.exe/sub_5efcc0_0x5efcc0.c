// 函数: sub_5efcc0
// 地址: 0x5efcc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = data_1c45568
char* edi = data_1c4556c
int32_t ebx = data_1ccce5c
int32_t edx = data_1c4599c
int32_t i_1 = data_1c45978 + 1
int32_t i

do
    int32_t temp0_1 = edx
    edx += data_1c05510
    
    if (temp0_1 + data_1c05510 s>= 0)
        int32_t temp4_1
        
        do
            if (edi s>= data_1c45544)
                if (edi s> data_1c05508)
                    return 
                
                int32_t ebx_2
                ebx_2.b = *esi
                int32_t eax_1
                eax_1.b = *edi
                int32_t eax = eax_1 + *((ebx_2 << 2) + data_1cd43a4)
                
                if (eax s> 0xff)
                    eax = 0xff
                
                *edi = eax.b
            
            edi = &edi[1]
            temp4_1 = edx
            edx -= data_1ccd294
        while (temp4_1 - data_1ccd294 s>= 0)
    
    esi = &esi[data_1ccce80]
    int32_t temp2_1 = ebx
    ebx += data_1c4ce38
    
    if (temp2_1 + data_1c4ce38 s>= 0)
        esi = &esi[data_1c4ce3c]
        ebx -= data_1cd4324
    
    i = i_1
    i_1 -= 1
while (i != 1)
