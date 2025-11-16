// 函数: sub_4c108d
// 地址: 0x4c108d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_44 = edi
int32_t* eax = arg1[0x40]
int32_t ecx = eax[3]
int32_t* ebx = eax[2]
int32_t* ecx_1 = eax[4]
int32_t esi_1 = *eax & 0xfffff
void* eax_1 = &ebx[esi_1]
int32_t eax_2 = arg1[5]
void* edx_1 = *(eax_2 + (*ebx << 2))
void* ecx_3 = *(eax_2 + (*ecx_1 << 2))
void* eax_3 = *(eax_2 + (*eax_1 << 2))
int32_t var_70_1
int32_t* var_6c_2
int32_t var_68_2
int32_t* var_64_2
int32_t* var_60_2
int32_t* var_5c_1
int32_t var_58_2

if ((*(ecx_3 + 4) != *(edx_1 + 4) || *(ecx_3 + 0xc) != *(edx_1 + 0xc))
        && (*(ecx_3 + 4) != *(eax_3 + 4) || *(ecx_3 + 0xc) != *(eax_3 + 0xc)))
    int32_t var_48_2 = 0
    int32_t var_4c_2 = 0
    int32_t var_50_2 = 0
    int32_t var_54_2 = 0
    var_58_2 = esi_1
    var_5c_1 = nullptr
    var_60_2 = eax_1
    var_64_2 = ebx
    var_68_2 = ecx
    var_6c_2 = ecx_1
    var_70_1 = 0xb
else
    int32_t var_38[0x4]
    int32_t result = (*(*arg1 + 0x80))(arg1[0x3f], &var_38, 4, 0, 0)
    
    if (result s< 0)
        return result
    
    int32_t var_c_1 = 0
    int32_t var_28[0x4]
    
    if (ecx u> 0)
        int32_t eax_9 = arg1[5]
        int32_t ecx_6 = ecx_1 - &var_28
        int32_t var_18_1 = ecx_6
        
        while (true)
            int32_t edx_7 = var_c_1 << 2
            var_c_1 += 1
            var_28[var_c_1] = var_38[*(*(eax_9 + (*(&var_28 + ecx_6 + edx_7) << 2)) + 0x10)]
            
            if (var_c_1 u>= ecx)
                break
            
            ecx_6 = var_18_1
    
    sub_4d75f7(arg1, 2, &var_28, ecx, ebx, eax_1, nullptr, esi_1, 0, &data_1000000, 0, 0)
    int32_t var_48_1 = 0
    int32_t var_4c_1 = 0
    int32_t var_50_1 = 0
    int32_t var_54_1 = 0
    var_58_2 = esi_1
    var_5c_1 = eax_1
    var_60_2 = ebx
    var_64_2 = &var_28
    var_68_2 = ecx
    var_6c_2 = ecx_1
    var_70_1 = 0x58

return sub_4d75f7(arg1, var_70_1, var_6c_2, var_68_2, var_64_2, var_60_2, var_5c_1, var_58_2, 0, 0, 
    0, 0)
