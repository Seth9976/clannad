// 函数: sub_671510
// 地址: 0x671510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(data_bac458 + 0x80)
void* eax_1 = sub_54b180(1)

if (eax_1 == 0)
    int32_t* ecx_1 = data_bac458
    
    if (ecx_1[0x50].b != eax_1.b)
        sub_677bb0(0)
        ecx_1 = data_bac458
    
    sub_62f9b0(ecx_1, ecx_1[0x57] - 0x158)
    void* esi = data_bac458
    sub_54ae40(*(esi + 0x15c) - 0xcc)
    *(esi + 0x15c) -= 0x158
    int32_t eax_4
    eax_4.b = 1
    return 1

char eax_5 = sub_620a70()
void* esi_1 = data_bac458

if (eax_5 != 0 && *(esi_1 + 0x141) == 0)
    if (*(esi_1 + 0x140) != 0)
        sub_677bb0(0)
    
    sub_676760()
    int32_t eax_6
    eax_6.b = 1
    return 1

int32_t eax_7 = sub_5b8040(eax_1)
*(esi_1 + 0x144)

if (eax_7 - *(esi_1 + 0x144) s>= 0)
    if (*(esi_1 + 0x140) != 0)
        sub_677bb0(0)
    
    sub_676760()
    int32_t eax_8
    eax_8.b = 1
    return 1

int32_t result

if (*(esi_1 + 0x140) != 0)
    if (*(data_bac4a0 + 0xcc) != 0)
        result.b = 0
    else if (*(data_bac484 + 0x138) == 0)
        result.b = *(data_bac498 + 2) == 0
    else
        result.b = 0
    
    void* ecx_5 = data_bac4c8
    void* ecx_6
    
    if (*(ecx_5 + 0x14) == 2)
        if (result.b == 0)
            goto label_671638
        
        if (sub_634fe0().b == 0)
            esi_1 = data_bac458
            ecx_5 = data_bac4c8
        label_671638:
            ecx_6 = ecx_5 + 8
        label_67163b:
            
            if (sub_6b1fd0(ecx_6).b != 0)
            label_671692:
                
                if (*(esi_1 + 0x140) != 0)
                    sub_677bb0(1)
                
                sub_676760()
                int32_t eax_9
                eax_9.b = 1
                return 1
    else if (*(ecx_5 + 0x51c) != 2)
        if (*(ecx_5 + 0x1c8c) == 2 && (result.b == 0 || *(esi_1 + 0x3e6) == 0)
                && sub_6b1fd0(ecx_5 + 0x1c80).b != 0)
            goto label_671692
    else if (result.b == 0 || *(esi_1 + 0x39b) == 0)
        ecx_6 = ecx_5 + 0x510
        goto label_67163b

result.b = 0
return result
