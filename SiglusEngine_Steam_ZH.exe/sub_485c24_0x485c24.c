// 函数: sub_485c24
// 地址: 0x485c24
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1

if ((*(ebx[3] + 0x48) & 0x80) != 0)
    return 0x88760384

int32_t* esi_1 = arg3

if (arg2 != 0 && *arg2 != 0)
label_485c65:
    char eax_2
    
    if (arg3 == 0)
        eax_2 = sub_485bb6(ebx[3], arg2, &arg3)
    else
        eax_2 = sub_485bed(ebx[3], arg3, &arg3)
    
    if (eax_2 != 0)
        int32_t result = sub_485a2f(ebx[3], arg3, &arg1)
        
        if (result s< 0)
            return result
        
        int32_t* esi_2 = arg1
        arg1 = esi_2
        
        if (sub_48647e(&ebx[0xe], &arg1) != 0)
            return 0
        
        if (esi_2 != 0)
            (**esi_2)(1)
        
        return 0x8007000e
else if (esi_1 != 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t i = 4
    int128_t* const edi_1 = &data_aac190
    bool cond:2_1 = true
    
    while (i != 0)
        int32_t temp1_1 = *esi_1
        int32_t temp2_1 = *edi_1
        cond:2_1 = temp1_1 == temp2_1
        esi_1 = &esi_1[1]
        edi_1 += 4
        i -= 1
        
        if (temp1_1 != temp2_1)
            break
    
    if (not(cond:2_1))
        goto label_485c65

return 0x88760385
