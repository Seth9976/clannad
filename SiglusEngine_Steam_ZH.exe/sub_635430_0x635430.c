// 函数: sub_635430
// 地址: 0x635430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.b = arg3
void* result

if (arg4 == 0 || arg4 == 1)
    if (sub_6351a0(arg1, arg2, data_bac4c8 + 0x510, arg4).b == 0)
        void* eax_2 = data_bac4c8
        
        if (sub_6351a0(eax_2, arg2, eax_2 + 0x1c80, arg4).b != 0
                && (ebx.b == 0 || *(data_bac458 + 0x3e6) == 0))
            result.b = 1
            return result
    else if (ebx.b == 0 || *(data_bac458 + 0x39b) == 0)
        result.b = 1
        return result
else
    void* edx = data_bac4c8
    void* ecx = edx + 0x510
    bool cond:0_1
    
    if (arg2 != 0)
        if (arg2 == 1)
            cond:0_1 = *(ecx + 8) == 1
            goto label_63547b
        
        if (arg2 != 2)
            goto label_6354f1
        
        cond:0_1 = *(ecx + 0xc) == 2
        goto label_63547b
    
    cond:0_1 = *(ecx + 4) == 1
label_63547b:
    result.b = cond:0_1
    bool cond:2_1
    
    if (result.b == 0)
    label_6354f1:
        ecx = edx + 0x1c80
        bool cond:1_1
        
        if (arg2 == 0)
            cond:1_1 = *(ecx + 4) == 1
        label_635516:
            result.b = cond:1_1
            
            if (result.b != 0)
                if (ebx.b == 0)
                    goto label_635498
                
                cond:2_1 = *(data_bac458 + 0x3e6) != 0
                goto label_635492
        else
            if (arg2 == 1)
                cond:1_1 = *(ecx + 8) == 1
                goto label_635516
            
            if (arg2 == 2)
                cond:1_1 = *(ecx + 0xc) == 2
                goto label_635516
    else if (ebx.b == 0)
    label_635498:
        
        if (arg2 == 0)
            if (*(ecx + 4) != 1)
            label_6354de:
                result.b = 0
                goto label_6354e0
            
            *(ecx + 4) = 0
            result.b = 1
            *(ecx + 0xc) = 0
        label_6354e0:
            
            if (result.b != 0)
                result.b = 1
                return result
        else
            if (arg2 == 1)
                if (*(ecx + 8) != 1)
                    goto label_6354de
                
                *(ecx + 8) = 0
                result.b = 1
                *(ecx + 0xc) = 0
                goto label_6354e0
            
            if (arg2 == 2)
                result = sub_6b1fd0(ecx)
                goto label_6354e0
    else
        cond:2_1 = *(data_bac458 + 0x39b) != 0
    label_635492:
        
        if (not(cond:2_1))
            goto label_635498

result.b = 0
return result
