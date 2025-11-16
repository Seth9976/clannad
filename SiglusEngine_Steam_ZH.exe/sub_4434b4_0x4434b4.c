// 函数: sub_4434b4
// 地址: 0x4434b4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg3 == 0)
    return 0x80004005

int32_t* esi_1 = arg2
int32_t edi
int32_t var_10_1 = edi
int32_t i = 4
void* const edi_1 = &data_ac3754
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

bool cond:3_1

if (not(cond:1_1))
    int32_t* esi_2 = arg2
    int32_t i_1 = 4
    void* const edi_2 = &data_ad016c
    cond:3_1 = false
    
    while (i_1 != 0)
        int32_t temp3_1 = *esi_2
        int32_t temp4_1 = *edi_2
        cond:3_1 = temp3_1 != temp4_1
        esi_2 = &esi_2[1]
        edi_2 += 4
        i_1 -= 1
        
        if (temp3_1 != temp4_1)
            break

if (not(cond:1_1) && cond:3_1)
    result = 0x80004002
else
    *arg3 = arg1
    (*(*arg1 + 4))(arg1)

return result
