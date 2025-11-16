// 函数: sub_5805d0
// 地址: 0x5805d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t i_2 = 0x40
void* edi = &data_1b142a4
int32_t i_4 = 0x40
int32_t i

do
    if (*edi != 0)
        for (int32_t j = 0; j s< 0x3e8; j += 1)
            int32_t eax = *edi
            
            if (eax != 0 && j u<= 0x3e7)
                int32_t* ecx_1 = eax + (j << 3)
                
                if (ecx_1[1] != 0)
                    if (*ecx_1 == 0)
                        char* eax_1 = data_1b144a0:0xc
                        
                        if (eax_1 != 0)
                            eax_1[j] = 0
                        
                        ecx_1[1] = 0
                    else
                        sub_4d6c40(ecx_1, &ecx_1[1])
        
        sub_4d6c40(edi - 4, edi)
        i_2 = i_4
    
    edi += 8
    i = i_2
    i_2 -= 1
    i_4 = i_2
while (i != 1)
sub_4d6c40(&data_1b144a0, &data_1b144a0:4)
sub_4d6c40(&data_1b144a0:8, &data_1b144a0:0xc)
void* result = &data_1b142a0
int32_t i_3 = 0x40
int32_t i_1

do
    *result = 0
    result += 8
    *(result - 4) = 0
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
data_1af4e90 = i_3
data_1af4e94 = i_3
data_1b144a0 = zx.o(0)
return result
