// 函数: sub_4a23b2
// 地址: 0x4a23b2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edx = *(arg1 + 0x6c)
int32_t esi = 0
int32_t edi
int32_t var_18 = edi
int32_t result = 0

if ((edx & &data_4000000) != 0)
    int32_t edx_1 = *(arg1 + 0xc)
    
    if (edx_1 == 0)
        return 0
    
    int32_t* esi_1 = *(arg1 + 0x18)
    
    if ((*(*esi_1 + 0x2c) & 1) == 0)
        result = 1
    
    int32_t i = 1
    
    if (edx_1 u> 1)
        do
            if ((*(esi_1[i] + 0x2c) & 1) != 0)
                int32_t* edx_4 = *(arg1 + 0x18) + (i << 2)
                
                if (*(*edx_4 + 0x2c) != *(edx_4[-1] + 0x2c))
                    result += 1
            
            i += 1
        while (i u< *(arg1 + 0xc))
else if ((edx & 0x8000000) != 0)
    int32_t ebx_2 = *(arg1 + 0xc)
    
    if (ebx_2 u> 0)
        int32_t var_c_1 = 1
        
        do
            if ((*(*(*(arg1 + 0x18) + (esi << 2)) + 0x2c) & 1) != 0)
                result += 1
                
                if (var_c_1 u< ebx_2)
                    int32_t* edx_7 = *(arg1 + 0x18) + (esi << 2)
                    
                    if (*(*edx_7 + 0x2c) == *(edx_7[1] + 0x2c))
                        esi += 1
                        var_c_1 += 1
            
            esi += 1
            var_c_1 += 1
        while (esi u< ebx_2)

return result
