// 函数: sub_48243b
// 地址: 0x48243b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t* var_c = arg1
int32_t edx = *arg1
int32_t var_8_1 = 0
int32_t edi
int32_t var_18 = edi

if (edx u> 0)
    int32_t* eax_1 = arg1[3]
    int32_t* var_c_1 = eax_1
    
    do
        int32_t* edi_1 = arg2
        int32_t* esi_2 = *eax_1 + 8
        int32_t i = 4
        bool cond:2_1 = true
        
        while (i != 0)
            int32_t temp1_1 = *esi_2
            int32_t temp2_1 = *edi_1
            cond:2_1 = temp1_1 == temp2_1
            esi_2 = &esi_2[1]
            edi_1 = &edi_1[1]
            i -= 1
            
            if (temp1_1 != temp2_1)
                break
        
        if (cond:2_1)
            if (arg3 != 0)
                *arg3 = var_c_1[var_8_1]
            
            return 1
        
        var_8_1 += 1
        eax_1 = &eax_1[1]
    while (var_8_1 u< edx)

return 0
