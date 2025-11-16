// 函数: sub_6355a0
// 地址: 0x6355a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg3
int32_t result

if (arg4 == 0 || arg4 == 1)
    result = sub_6351a0(arg1, arg2, data_bac4c8 + 0x58, arg4)
    
    if (result.b == 0)
        if (sub_6351a0(result, arg2, data_bac4c8 + 0x970, arg4).b == 0)
            void* eax_3 = data_bac4c8
            
            if (sub_6351a0(eax_3, arg2, eax_3 + 0x1d20, arg4).b != 0
                    && (ebx.b == 0 || *(data_bac458 + 0x3e8) == 0))
                result.b = 1
                return result
        else
            if (ebx.b == 0)
                result.b = 1
                return result
            
            if (*(data_bac458 + 0x3a9) == 0)
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
            cond:0_1 = *(edx + 0x60) == 1
            goto label_6355e5
        
        if (arg2 != 2)
            goto label_63565f
        
        cond:0_1 = *(edx + 0x64) == 2
        goto label_6355e5
    
    cond:0_1 = *(edx + 0x5c) == 1
label_6355e5:
    result.b = cond:0_1
    void* ecx
    
    if (result.b == 0)
    label_63565f:
        ecx = edx + 0x970
        bool cond:1_1
        
        if (arg2 != 0)
            if (arg2 == 1)
                cond:1_1 = *(ecx + 8) == 1
                goto label_635680
            
            if (arg2 != 2)
                goto label_6356a8
            
            cond:1_1 = *(ecx + 0xc) == 2
            goto label_635680
        
        cond:1_1 = *(ecx + 4) == 1
    label_635680:
        result.b = cond:1_1
        
        if (result.b == 0)
        label_6356a8:
            ecx = edx + 0x1d20
            bool cond:2_1
            
            if (arg2 == 0)
                cond:2_1 = *(ecx + 4) == 1
            label_6356cd:
                result.b = cond:2_1
                
                if (result.b != 0 && (ebx.b == 0 || *(data_bac458 + 0x3e8) == 0))
                    goto label_635606
            else
                if (arg2 == 1)
                    cond:2_1 = *(ecx + 8) == 1
                    goto label_6356cd
                
                if (arg2 == 2)
                    cond:2_1 = *(ecx + 0xc) == 2
                    goto label_6356cd
        else if (ebx.b == 0 || *(data_bac458 + 0x3a9) == 0)
            goto label_635606
    else
        if (ebx.b == 0)
            goto label_635603
        
        if (sub_634fe0().b == 0)
            edx = data_bac4c8
        label_635603:
            ecx = edx + 0x58
        label_635606:
            
            if (arg2 == 0)
                if (*(ecx + 4) != 1)
                label_63564c:
                    result.b = 0
                    goto label_63564e
                
                *(ecx + 4) = 0
                result.b = 1
                *(ecx + 0xc) = 0
            label_63564e:
                
                if (result.b != 0)
                    result.b = 1
                    return result
            else
                if (arg2 == 1)
                    if (*(ecx + 8) != 1)
                        goto label_63564c
                    
                    *(ecx + 8) = 0
                    result.b = 1
                    *(ecx + 0xc) = 0
                    goto label_63564e
                
                if (arg2 == 2)
                    result = sub_6b1fd0(ecx)
                    goto label_63564e

result.b = 0
return result
