// 函数: sub_635790
// 地址: 0x635790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg3
int32_t result

if (arg5 == 0 || arg5 == 1)
    int32_t eax_4 = data_bac4c8
    
    if (sub_6351a0(eax_4, arg4, arg2 * 0x50 + 0x100 + eax_4, arg5).b != 0
            && (ebx.b == 0 || *(data_bac458 + arg2 + 0x38e) == 0))
        result.b = 1
        return result
else
    void* ecx_2 = arg2 * 0x50 + data_bac4c8 + 0x100
    bool cond:0_1
    
    if (arg4 == 0)
        cond:0_1 = *(ecx_2 + 4) == 1
    label_6357e3:
        result.b = cond:0_1
        
        if (result.b != 0 && (ebx.b == 0 || *(data_bac458 + arg2 + 0x38e) == 0))
            if (arg4 == 0)
                if (*(ecx_2 + 4) != 1)
                label_635847:
                    result.b = 0
                    goto label_635849
                
                *(ecx_2 + 4) = 0
                result.b = 1
                *(ecx_2 + 0xc) = 0
            label_635849:
                
                if (result.b != 0)
                    result.b = 1
                    return result
            else
                if (arg4 == 1)
                    if (*(ecx_2 + 8) != 1)
                        goto label_635847
                    
                    *(ecx_2 + 8) = 0
                    result.b = 1
                    *(ecx_2 + 0xc) = 0
                    goto label_635849
                
                if (arg4 == 2)
                    result = sub_6b1fd0(ecx_2)
                    goto label_635849
    else
        if (arg4 == 1)
            cond:0_1 = *(ecx_2 + 8) == 1
            goto label_6357e3
        
        if (arg4 == 2)
            cond:0_1 = *(ecx_2 + 0xc) == 2
            goto label_6357e3

result.b = 0
return result
