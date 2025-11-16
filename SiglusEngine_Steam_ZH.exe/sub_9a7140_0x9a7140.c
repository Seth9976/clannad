// 函数: sub_9a7140
// 地址: 0x9a7140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = arg1
int32_t i_3 = 0
sub_742d70(arg2, *esi, 0x18)
sub_742d70(arg2, esi[1], 0x18)
sub_742d70(arg2, esi[2] - 1, 0x18)
sub_742d70(arg2, esi[3] - 1, 6)
int32_t i = sub_742d70(arg2, esi[5], 8)
int32_t i_2 = 0

if (esi[3] s> 0)
    void* esi_1 = &esi[6]
    
    do
        uint32_t j_2 = *esi_1
        int32_t ecx_1 = 0
        uint32_t j = j_2
        
        if (j == 0)
            sub_742d70(arg2, j_2, 4)
        else
            do
                ecx_1 += 1
                j u>>= 1
            while (j != 0)
            
            if (ecx_1 s<= 3)
                sub_742d70(arg2, j_2, 4)
            else
                sub_742d70(arg2, j_2, 3)
                sub_742d70(arg2, 1, 1)
                sub_742d70(arg2, *esi_1 s>> 3, 5)
        
        uint32_t j_1 = *esi_1
        int32_t edx_1 = 0
        
        for (; j_1 != 0; j_1 u>>= 1)
            edx_1 += j_1 & 1
        
        i_3 += edx_1
        i = i_2 + 1
        esi_1 += 4
        i_2 = i
    while (i s< arg1[3])
    
    esi = arg1

if (i_3 s> 0)
    void* esi_2 = &esi[0x46]
    int32_t i_1
    
    do
        i = sub_742d70(arg2, *esi_2, 8)
        esi_2 += 4
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return i
