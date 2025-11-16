// 函数: sub_5c0ed0
// 地址: 0x5c0ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* result = arg2
void* var_8_1 = arg1

if (result s< arg3)
    int32_t edi_2 = result * 0xc0
    void* i_1 = arg3 - result
    void* i
    
    do
        void* ecx_1 = *(arg1 + 0xa4) + edi_2
        bool cond:1_1 = *(ecx_1 + 0xb4) u< 8
        result = ecx_1 + 0xa0
        result[4] = 0
        
        if (not(cond:1_1))
            result = *result
        
        *result = 0
        *(ecx_1 + 0xb8) = 0
        int32_t* esi_1 = *(ecx_1 + 0xbc)
        *(ecx_1 + 0xbc) = 0
        
        if (esi_1 != 0)
            result = &esi_1[1]
            bool cond:0_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:0_1))
                (*(*esi_1 + 4))()
                result = &esi_1[2]
                bool cond:2_1 = *result != 1
                *result
                *result -= 1
                
                if (not(cond:2_1))
                    result = (*(*esi_1 + 8))()
        
        arg1 = var_8_1
        edi_2 += 0xc0
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
