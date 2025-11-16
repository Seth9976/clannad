// 函数: sub_40bc40
// 地址: 0x40bc40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x9c] != 0)
    int32_t* eax_1 = arg1[0x9c]
    return (**eax_1)(eax_1, arg2, arg3)

*arg3 = nullptr
int32_t* esi_1 = arg2
int32_t edi
int32_t var_10_1 = edi
int32_t i = 4
void* const edi_1 = &data_ad016c
bool cond:1_1 = true

while (i != 0)
    int32_t temp1_1 = *esi_1
    int32_t temp2_1 = *edi_1
    cond:1_1 = temp1_1 == temp2_1
    esi_1 = &esi_1[1]
    edi_1 += 4
    i -= 1
    
    if (temp1_1 != temp2_1)
        break

int32_t result

if (cond:1_1)
label_40bc9e:
    *arg3 = arg1
    (*(*arg1 + 4))(arg1)
    result = 0
else
    int32_t* esi_2 = arg2
    int32_t i_1 = 4
    void* const edi_2 = &data_ac3894
    bool cond:3_1 = true
    
    while (i_1 != 0)
        int32_t temp3_1 = *esi_2
        int32_t temp4_1 = *edi_2
        cond:3_1 = temp3_1 == temp4_1
        esi_2 = &esi_2[1]
        edi_2 += 4
        i_1 -= 1
        
        if (temp3_1 != temp4_1)
            break
    
    if (cond:3_1)
        goto label_40bc9e
    
    int32_t* esi_3 = arg2
    int32_t i_2 = 4
    void* const edi_3 = &data_ac3884
    bool cond:5_1 = false
    
    while (i_2 != 0)
        int32_t temp5_1 = *esi_3
        int32_t temp6_1 = *edi_3
        cond:5_1 = temp5_1 != temp6_1
        esi_3 = &esi_3[1]
        edi_3 += 4
        i_2 -= 1
        
        if (temp5_1 != temp6_1)
            break
    
    if (not(cond:5_1))
        goto label_40bc9e
    
    result = 0x80004002

return result
