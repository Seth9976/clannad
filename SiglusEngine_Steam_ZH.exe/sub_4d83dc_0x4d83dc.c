// 函数: sub_4d83dc
// 地址: 0x4d83dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0xd] == 0)
    return 0x80004001

void* eax = arg1[0x40]

if (*(eax + 0xc) == 0)
    return 0

void* eax_3 = *(arg1[5] + (**(eax + 0x10) << 2))
void* var_20_1 = eax_3
int32_t var_8_1 = 0
int32_t edi
int32_t var_2c_1 = edi
int32_t result

while (true)
    void* ecx = arg1[0x40]
    void* edi_1 = *(arg1[5] + (*(*(ecx + 8) + ((*(ecx + 0xc) * var_8_1) << 2)) << 2))
    
    if (*(edi_1 + 4) != *(eax_3 + 4) || *(edi_1 + 8) != *(eax_3 + 8)
            || *(edi_1 + 0xc) != *(eax_3 + 0xc) || *(edi_1 + 0x10) != *(eax_3 + 0x10))
        result = sub_4d7429(arg1, 1)
        
        if (result s< 0)
            break
        
        void* eax_5 = *(arg1[5] + (*(edi_1 + 0x14) << 2))
        int32_t eax_6 = *(eax_5 + 0x10)
        int32_t ebx_3 = (*(eax_5 + 0xc) & 0x7ff) | 0xb0001000
        
        if (eax_6 != 0)
            if (eax_6 == 1)
                ebx_3 |= 0x550000
            else if (eax_6 == 2)
                ebx_3 |= 0xaa0000
            else if (eax_6 == 3)
                ebx_3 |= 0xff0000
        
        if (*(edi_1 + 0x18) == 0)
            ebx_3 |= 0xd000000
        
        int32_t var_14
        int32_t var_c
        result = (*(*arg1 + 0x6c))(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)), &var_c, 0, &var_14)
        
        if (result s< 0)
            break
        
        void* eax_12 = arg1[0x40]
        int32_t var_10
        result = (*(*arg1 + 0x70))(*(eax_12 + 0x10), *(eax_12 + 0xc), &var_10, var_14)
        
        if (result s< 0)
            break
        
        result = (*(*arg1 + 0x64))(var_c, var_10, ebx_3)
        
        if (result s< 0)
            break
        
        void* eax_14 = arg1[0x40]
        int32_t var_18
        result = (*(*arg1 + 0x74))(
            *(arg1[5] + (*(*(eax_14 + 8) + ((*(eax_14 + 0xc) * var_8_1) << 2)) << 2)), &var_c, 
            &var_18)
        
        if (result s< 0)
            break
        
        void* ecx_19 = arg1[0x40]
        int32_t eax_17 = *(ecx_19 + 0xc)
        int32_t var_1c
        result =
            (*(*arg1 + 0x78))(*(ecx_19 + 8) + ((eax_17 * var_8_1) << 2), eax_17, var_10, &var_1c)
        
        if (result s< 0)
            break
        
        result = (*(*arg1 + 0x68))(var_c, var_1c, var_18)
        
        if (result s< 0)
            break
        
        result = (*(*arg1 + 0x60))()
        
        if (result s< 0)
            break
        
        result = sub_4d25aa(arg1)
        
        if (result s< 0)
            break
        
        eax_3 = var_20_1
    
    var_8_1 += 1
    
    if (var_8_1 u>= 2)
        result = 0
        break

return result
