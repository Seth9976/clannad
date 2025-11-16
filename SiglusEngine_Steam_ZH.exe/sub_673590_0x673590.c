// 函数: sub_673590
// 地址: 0x673590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(data_bac458 + 0x80)
int32_t esi = sub_54b180(1)

if (esi == 0)
    int32_t* ecx_1 = data_bac458
    sub_62f9b0(ecx_1, ecx_1[0x57] - 0x158)
    void* esi_1 = data_bac458
    sub_54ae40(*(esi_1 + 0x15c) - 0xcc)
    *(esi_1 + 0x15c) -= 0x158
    int32_t eax_3
    eax_3.b = 1
    return 1

int32_t result

if (*(esi + 0x143) != 0)
    if (*(data_bac4a0 + 0xcc) != 0)
        result.b = 0
    else if (*(data_bac484 + 0x138) == 0)
        result.b = *(data_bac498 + 2) == 0
    else
        result.b = 0
    
    void* ecx_4 = data_bac4c8
    void* ecx_5
    
    if (*(ecx_4 + 0x64) == 2)
        if (result.b == 0)
            goto label_673644
        
        if (sub_634fe0().b == 0)
            ecx_4 = data_bac4c8
        label_673644:
            ecx_5 = ecx_4 + 0x58
        label_673647:
            
            if (sub_6b1fd0(ecx_5).b != 0)
            label_6736a6:
                void* var_8_2 = ecx_5
                sub_6018e0(data_bac468 + 0x304, *(esi + 0x130))
                
                if (*(esi + 0x142) != 0)
                    *(esi + 0x140) = 0
                    *(esi + 0x134) = 0xfffffffe
                    sub_677bb0(0xffffffff)
                    sub_676760()
                    int32_t eax_5
                    eax_5.b = 1
                    return 1
    else if (*(ecx_4 + 0x97c) != 2)
        if (*(ecx_4 + 0x1d2c) == 2 && (result.b == 0 || *(data_bac458 + 0x3e8) == 0))
            ecx_5 = ecx_4 + 0x1d20
            
            if (sub_6b1fd0(ecx_5).b != 0)
                goto label_6736a6
    else if (result.b == 0 || *(data_bac458 + 0x3a9) == 0)
        ecx_5 = ecx_4 + 0x970
        goto label_673647

result.b = 0
return result
