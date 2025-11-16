// 函数: sub_5947a0
// 地址: 0x5947a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1 - 0x4ea
void* esi_2

if (arg1 == 0x4ea)
    esi_2 = data_bac418 + 0xa10
label_5947cd:
    
    if (esi_2 != 0 && arg2 s>= 0)
        int32_t eax_1
        int32_t edx_1
        edx_1:eax_1 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0xa8) - *(esi_2 + 0xa4))
        int32_t edx_2 = edx_1 s>> 2
        result = (edx_2 u>> 0x1f) + edx_2
        
        if (arg2 s< result)
            int32_t* ecx_4 = *(esi_2 + 0xa4) + arg2 * 0x18
            result = arg3
            
            if (ecx_4 != result)
                return sub_52e3c0(ecx_4, result, 0, 0xffffffff) __tailcall
else
    int32_t result_1 = result
    result -= 2
    
    if (result_1 == 2)
        esi_2 = data_bac418 + 0xac8
        goto label_5947cd
return result
