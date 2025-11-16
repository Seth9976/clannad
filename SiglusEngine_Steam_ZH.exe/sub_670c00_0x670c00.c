// 函数: sub_670c00
// 地址: 0x670c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t eax = *arg1
int32_t result = eax - 4

if (eax == 4)
    int32_t* esi_3 = arg1[2]
    
    if (esi_3 != 0)
        if (esi_3[5] u>= 0x10)
            j__free(*esi_3)
        
        esi_3[5] = 0xf
        esi_3[4] = 0
        *esi_3 = 0
        return j__free(esi_3)
else
    int32_t result_1 = result
    result -= 1
    
    if (result_1 == 1)
        int32_t* esi_2 = arg1[2]
        
        if (esi_2 != 0)
            sub_6707a0(esi_2)
            return j__free(esi_2)
    else
        int32_t result_2 = result
        result -= 1
        
        if (result_2 == 1)
            int32_t*** esi_1 = arg1[2]
            
            if (esi_1 != 0)
                int32_t** eax_1 = *esi_1
                sub_670b10(esi_1, &var_8, *eax_1, eax_1)
                j__free(*esi_1)
                return j__free(esi_1)

return result
