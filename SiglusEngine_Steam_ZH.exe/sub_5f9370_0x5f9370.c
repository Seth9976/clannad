// 函数: sub_5f9370
// 地址: 0x5f9370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = arg2
void* ebx = arg1
void* var_8_1 = ebx

if (result s< arg3)
    int32_t edx_1 = result * 0xd4
    int32_t i_1 = arg3 - result
    arg3 = i_1
    arg2 = edx_1
    int32_t i
    
    do
        void* edi_2 = *(ebx + 0xa4) + edx_1
        *(edi_2 + 0xa0) = 0xffffffff
        *(edi_2 + 0xa4) = 0xffffffff
        *(edi_2 + 0xa8) = 2
        *(edi_2 + 0xac) = 0xffffffff
        *(edi_2 + 0xb0) = 0
        *(edi_2 + 0xb3) = 0
        int32_t ebx_1 = *(edi_2 + 0xbc)
        int32_t* esi_1 = *(edi_2 + 0xb8)
        
        if (esi_1 != ebx_1)
            do
                if (esi_1[5] u>= 8)
                    j__free(*esi_1)
                
                esi_1[5] = 7
                esi_1[4] = 0
                *esi_1 = 0
                esi_1 = &esi_1[9]
            while (esi_1 != ebx_1)
            
            i_1 = arg3
            edx_1 = arg2
        
        result = *(edi_2 + 0xb8)
        edx_1 += 0xd4
        ebx = var_8_1
        i = i_1
        i_1 -= 1
        *(edi_2 + 0xbc) = result
        *(edi_2 + 0xc4) = 0
        *(edi_2 + 0xc8) = 0xffffffff
        *(edi_2 + 0xcc) = 0
        *(edi_2 + 0xd0) = 0xffffffff
        arg2 = edx_1
        arg3 = i_1
    while (i != 1)

return result
