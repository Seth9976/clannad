// 函数: sub_5f0140
// 地址: 0x5f0140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
uint32_t result

if (*(arg1 + 0x1b8) != 0)
    int32_t var_1c_1 = 0
    
    if (sub_5effe0(arg1, esi, edi, arg3 - *(arg1 + 0x1594), arg4 - *(arg1 + 0x1598)) s> 0)
    label_5f0173:
        result.b = 1
        return result

if (arg2 != 0)
    int32_t esi_2 = 0
    result = (*(arg1 + 0x1438) - *(arg1 + 0x1434)) s/ 0x15fc
    uint32_t result_1 = result
    
    if (result s> 0)
        int32_t edi_2 = 0
        
        do
            *(arg1 + 0x1434)
            
            if (sub_5f0140(arg2.d, arg3, arg4).b != 0)
                goto label_5f0173
            
            esi_2 += 1
            edi_2 += 0x15fc
        while (esi_2 s< result_1)

result.b = 0
return result
