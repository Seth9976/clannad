// 函数: sub_672f30
// 地址: 0x672f30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(data_bac458 + 0x80)
void* eax_1 = sub_54b180(1)

if (eax_1 == 0 || *(eax_1 + 0xa0) == 0xffffffff)
    int32_t* ecx_1 = data_bac458
    sub_62f9b0(ecx_1, ecx_1[0x57] - 0x158)
    void* esi_1 = data_bac458
    sub_54ae40(*(esi_1 + 0x15c) - 0xcc)
    *(esi_1 + 0x15c) -= 0x158
    int32_t eax_4
    eax_4.b = 1
    return 1

char* result = sub_620a70()
void* edx_1 = data_bac458

if (result.b != 0 && *(edx_1 + 0x141) == 0)
label_67305e:
    *(eax_1 + 0xb4) = 1
    *(eax_1 + 0xb8) = 0
    *(eax_1 + 0xbc) = 0
    sub_5fb9f0(eax_1)
    sub_676760()
    int32_t eax_5
    eax_5.b = 1
    return 1

if (*(edx_1 + 0x140) != 0)
    if (data_bac4a0[0xcc] != 0)
        result.b = 0
    else if (data_bac484[0x138] == 0)
        result.b = data_bac498[2] == 0
    else
        result.b = 0
    
    void* ecx_4 = data_bac4c8
    void* ecx_5
    
    if (*(ecx_4 + 0x14) == 2)
        if (result.b == 0)
            goto label_673009
        
        if (sub_634fe0().b == 0)
            ecx_4 = data_bac4c8
        label_673009:
            ecx_5 = ecx_4 + 8
        label_67300c:
            
            if (sub_6b1fd0(ecx_5).b != 0)
                goto label_67305e
    else if (*(ecx_4 + 0x51c) != 2)
        if (*(ecx_4 + 0x1c8c) == 2 && (result.b == 0 || *(edx_1 + 0x3e6) == 0)
                && sub_6b1fd0(ecx_4 + 0x1c80).b != 0)
            goto label_67305e
    else if (result.b == 0 || *(edx_1 + 0x39b) == 0)
        ecx_5 = ecx_4 + 0x510
        goto label_67300c

result.b = 0
return result
