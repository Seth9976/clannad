// 函数: sub_4b4ba2
// 地址: 0x4b4ba2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x14)
int32_t edx_4 = *(*(eax + (*(*(*(arg1 + 0x100) + 8) + 0x1c) << 2)) + 0x48)

if (edx_4 == 0xffffffff)
    return 1

int32_t ebx = *(arg1 + 0x18)
int32_t* esi = *(ebx + (edx_4 << 2))
int32_t edi
int32_t var_24 = edi
int32_t edx_6 = *esi & 0xfff00000

if (edx_6 != 0x10000000 && edx_6 != 0x50000000)
    return 1

void* edx_8 = *(*(arg1 + 0x100) + 8)
int32_t var_c_1 = 0xffffffff
int32_t edx_9 = *(edx_8 + 0x18)
void* eax_3 = *(eax + (edx_9 << 2))
int32_t edx_10 = *(eax_3 + 0x48)

if (edx_10 != 0xffffffff && *(eax_3 + 0x3c) == 0)
    int32_t* eax_4 = *(ebx + (edx_10 << 2))
    
    if ((*eax_4 & 0xfff00000) == 0x10000000)
        int32_t i = 0
        
        if (eax_4[1] u> 0)
            do
                if (eax_4[4][i] == edx_9)
                    var_c_1 = *((i << 2) + eax_4[2])
                
                i += 1
            while (i u< eax_4[1])

int32_t var_8_1 = 0

if (edx_6 != 0x10000000)
    int32_t i_3 = esi[1]
    
    if (i_3 u> 0)
        int32_t* esi_1 = esi[4]
        int32_t i_1
        
        do
            if (var_c_1 == *esi_1)
                var_8_1 = 1
            
            esi_1 = &esi_1[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    label_4b4ccf:
        
        if (var_8_1 != 0)
            **(arg1 + 0x100) = 0x72e00003
            *(*(arg1 + 0x100) + 4) = 6
            void* eax_14 = *(*(arg1 + 0x100) + 8)
            *(eax_14 + 0xc) = *(eax_14 + 0x10)
            void* eax_16 = *(*(arg1 + 0x100) + 8)
            *(eax_16 + 0x10) = *(eax_16 + 0x14)
            void* eax_18 = *(*(arg1 + 0x100) + 8)
            *(eax_18 + 0x14) = *(eax_18 + 0x18)
            return 0
else
    int32_t i_2 = 0
    
    if (esi[1] u> 0)
        do
            int32_t edx_17 = *(esi[2] + (i_2 << 2))
            
            if (edx_17 == edx_9 && *(esi[4] + (i_2 << 2)) == *(edx_8 + 0x1c))
                var_8_1 = 1
            
            if (edx_17 == var_c_1 && *(esi[4] + (i_2 << 2)) == *(edx_8 + 0x1c))
                var_8_1 = 1
            
            i_2 += 1
        while (i_2 u< esi[1])
        
        goto label_4b4ccf

return 1
