// 函数: sub_458f6c
// 地址: 0x458f6c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
int32_t edi
int32_t var_c = edi
int32_t i = 4
void* const edi_1 = &data_ac3924
bool cond:1 = true

while (i != 0)
    int32_t temp1_1 = *esi
    int32_t temp2_1 = *edi_1
    cond:1 = temp1_1 == temp2_1
    esi = &esi[1]
    edi_1 += 4
    i -= 1
    
    if (temp1_1 != temp2_1)
        break

if (not(cond:1))
    int32_t* esi_1 = arg2
    int32_t i_1 = 4
    void* const edi_2 = &data_ad016c
    bool cond:3_1 = false
    
    while (i_1 != 0)
        int32_t temp3_1 = *esi_1
        int32_t temp4_1 = *edi_2
        cond:3_1 = temp3_1 != temp4_1
        esi_1 = &esi_1[1]
        edi_2 += 4
        i_1 -= 1
        
        if (temp3_1 != temp4_1)
            break
    
    if (cond:3_1)
        *arg3 = 0
        return 0x80004002

*arg3 = arg1
(*(*arg1 + 4))(arg1)
return 0
