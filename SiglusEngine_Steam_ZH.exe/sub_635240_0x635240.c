// 函数: sub_635240
// 地址: 0x635240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg3
int32_t result

if (arg4 == 0 || arg4 == 1)
    result = sub_6351a0(arg1, arg2, data_bac4c8 + 8, arg4)
    
    if (result.b == 0)
        if (sub_6351a0(result, arg2, data_bac4c8 + 0x510, arg4).b == 0)
            void* eax_3 = data_bac4c8
            
            if (sub_6351a0(eax_3, arg2, eax_3 + 0x1c80, arg4).b != 0
                    && (ebx.b == 0 || *(data_bac458 + 0x3e6) == 0))
                result.b = 1
                return result
        else
            if (ebx.b == 0)
                result.b = 1
                return result
            
            if (*(data_bac458 + 0x39b) == 0)
                result.b = 1
                return result
    else
        if (ebx.b == 0)
            result.b = 1
            return result
        
        if (sub_634fe0().b == 0)
            result.b = 1
            return result
else
    void* edx = data_bac4c8
    bool cond:0_1
    
    if (arg2 != 0)
        if (arg2 == 1)
            cond:0_1 = *(edx + 0x10) == 1
            goto label_635285
        
        if (arg2 != 2)
            goto label_6352ff
        
        cond:0_1 = *(edx + 0x14) == 2
        goto label_635285
    
    cond:0_1 = *(edx + 0xc) == 1
label_635285:
    result.b = cond:0_1
    void* ecx
    
    if (result.b == 0)
    label_6352ff:
        ecx = edx + 0x510
        bool cond:1_1
        
        if (arg2 != 0)
            if (arg2 == 1)
                cond:1_1 = *(ecx + 8) == 1
                goto label_635320
            
            if (arg2 != 2)
                goto label_635348
            
            cond:1_1 = *(ecx + 0xc) == 2
            goto label_635320
        
        cond:1_1 = *(ecx + 4) == 1
    label_635320:
        result.b = cond:1_1
        
        if (result.b == 0)
        label_635348:
            ecx = edx + 0x1c80
            bool cond:2_1
            
            if (arg2 == 0)
                cond:2_1 = *(ecx + 4) == 1
            label_63536d:
                result.b = cond:2_1
                
                if (result.b != 0 && (ebx.b == 0 || *(data_bac458 + 0x3e6) == 0))
                    goto label_6352a6
            else
                if (arg2 == 1)
                    cond:2_1 = *(ecx + 8) == 1
                    goto label_63536d
                
                if (arg2 == 2)
                    cond:2_1 = *(ecx + 0xc) == 2
                    goto label_63536d
        else if (ebx.b == 0 || *(data_bac458 + 0x39b) == 0)
            goto label_6352a6
    else
        if (ebx.b == 0)
            goto label_6352a3
        
        if (sub_634fe0().b == 0)
            edx = data_bac4c8
        label_6352a3:
            ecx = edx + 8
        label_6352a6:
            
            if (arg2 == 0)
                if (*(ecx + 4) != 1)
                label_6352ec:
                    result.b = 0
                    goto label_6352ee
                
                *(ecx + 4) = 0
                result.b = 1
                *(ecx + 0xc) = 0
            label_6352ee:
                
                if (result.b != 0)
                    result.b = 1
                    return result
            else
                if (arg2 == 1)
                    if (*(ecx + 8) != 1)
                        goto label_6352ec
                    
                    *(ecx + 8) = 0
                    result.b = 1
                    *(ecx + 0xc) = 0
                    goto label_6352ee
                
                if (arg2 == 2)
                    result = sub_6b1fd0(ecx)
                    goto label_6352ee

result.b = 0
return result
