// 函数: sub_56e400
// 地址: 0x56e400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t result

if (arg2 == 0x469)
    result = arg1 + 0x480
label_56e427:
    
    if (result != 0)
        int32_t* ecx = data_bac474
        int32_t esi_1 = *ecx
        int32_t edi_1 = ecx[1]
        
        if (esi_1 != edi_1)
            if (arg2 != 0x46a)
                if (arg2 == 0x469 && arg3 s>= 0)
                    result = (ecx[8] - ecx[7]) s>> 2
                    
                    if (arg3 s< result)
                        int32_t var_14_2 = arg4
                        return sub_67e790(ecx, *(*(ecx[7] + (arg3 << 2)) + 0x18))
            else if (arg3 s>= 0)
                result = (edi_1 - esi_1) s/ 0x4c
                
                if (arg3 s< result)
                    int32_t var_14_1 = arg4
                    return sub_67e790(arg3, *(arg3 * 0x4c + esi_1 + 0x18))
else
    result = arg2 - 0x46a
    
    if (arg2 == 0x46a)
        result = arg1 + 0x14c
        goto label_56e427

return result
