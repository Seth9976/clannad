// 函数: sub_6712a0
// 地址: 0x6712a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = sub_620a70()
void* edx = data_bac458

if (eax != 0 && *(edx + 0x141) == 0)
    if (*(edx + 0x140) != 0)
        sub_677bb0(0)
    
    sub_676760()
    int32_t eax_1
    eax_1.b = 1
    return 1

*(edx + 0x144)

if (*(data_bac47c + 0x1c) - *(edx + 0x144) s>= 0)
    if (*(edx + 0x140) != 0)
        sub_677bb0(0)
    
    sub_676760()
    int32_t eax_4
    eax_4.b = 1
    return 1

int32_t result

if (*(edx + 0x140) != 0)
    if (*(data_bac4a0 + 0xcc) != 0)
        result.b = 0
    else if (*(data_bac484 + 0x138) == 0)
        result.b = *(data_bac498 + 2) == 0
    else
        result.b = 0
    
    void* ecx_1 = data_bac4c8
    
    if (*(ecx_1 + 0x14) == 2)
        if (result.b == 0)
            goto label_67135d
        
        result, ecx_1 = sub_634fe0()
        edx = data_bac458
        
        if (result.b == 0)
            ecx_1 = data_bac4c8
        label_67135d:
            ecx_1 += 8
        label_671360:
            
            if (sub_6b1fd0(ecx_1).b != 0)
            label_6713d2:
                
                if (*(edx + 0x140) != 0)
                    sub_677bb0(1)
                
                sub_676760()
                int32_t eax_6
                eax_6.b = 1
                return 1
    else if (*(ecx_1 + 0x51c) != 2)
        if (*(ecx_1 + 0x1c8c) == 2 && (result.b == 0 || *(edx + 0x3e6) == 0)
                && sub_6b1fd0(ecx_1 + 0x1c80).b != 0)
            goto label_6713d2
    else if (result.b == 0 || *(edx + 0x39b) == 0)
        ecx_1 += 0x510
        goto label_671360
    
    if (*(edx + 0x140) != 0)
        void* eax_5 = data_bac4a0
        
        if (*(eax_5 + 0xcc) == 0)
            eax_5 = data_bac484
            
            if (*(eax_5 + 0x138) == 0)
                eax_5 = data_bac498
                ecx_1.b = *(eax_5 + 2) == 0
            else
                ecx_1.b = 0
        else
            ecx_1.b = 0
        
        if (sub_6355a0(eax_5, 2, ecx_1.b, 2).b != 0)
            if (*(data_bac458 + 0x140) != 0)
                sub_677bb0(0xffffffff)
            
            sub_676760()
            int32_t eax_8
            eax_8.b = 1
            return 1

result.b = 0
return result
