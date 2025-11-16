// 函数: sub_48600f
// 地址: 0x48600f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t var_8_1 = 0
int32_t edx = *(arg1 + 0x10)
int32_t edi
int32_t var_18 = edi

if (edx u> 0)
    int32_t* eax_1 = *(arg1 + 0x1c)
    
    do
        int32_t* edi_2 = *eax_1 + 8
        void* esi_2 = arg2 + 8
        int32_t i = 4
        bool cond:2_1 = true
        
        while (i != 0)
            int32_t temp1_1 = *esi_2
            int32_t temp2_1 = *edi_2
            cond:2_1 = temp1_1 == temp2_1
            esi_2 += 4
            edi_2 = &edi_2[1]
            i -= 1
            
            if (temp1_1 != temp2_1)
                break
        
        if (cond:2_1)
            return 0
        
        var_8_1 += 1
        eax_1 = &eax_1[1]
    while (var_8_1 u< edx)

int32_t* esi_3 = *(arg2 + 0x1c)
int32_t i_1 = 0

if (esi_3 != 0 && *esi_3 u> 0)
    do
        int32_t eax_5 = *(*(esi_3[3] + (i_1 << 2)) + 8)
        
        if (eax_5 != 0)
            int32_t result = sub_48600f(eax_5)
            
            if (result s< 0)
                return result
        
        i_1 += 1
    while (i_1 u< *esi_3)

if (sub_482843(arg1 + 0x10, arg2) != 0)
    return sub_485ddd(arg1, arg2)

return 0x8007000e
