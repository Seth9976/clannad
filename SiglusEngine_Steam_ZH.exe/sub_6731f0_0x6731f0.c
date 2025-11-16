// 函数: sub_6731f0
// 地址: 0x6731f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(data_bac458 + 0x80)
void* eax_1 = sub_54b180(1)

if (eax_1 != 0 && sub_5f0460(eax_1).b != 0)
    void* edx_1 = data_bac458
    int32_t result
    
    if (*(edx_1 + 0x140) != 0)
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
                goto label_6732b5
            
            if (sub_634fe0().b == 0)
                ecx_5 = data_bac4c8
            label_6732b5:
                ecx_6 = ecx_5 + 8
            label_6732b8:
                
                if (sub_6b1fd0(ecx_6).b != 0)
                label_67330a:
                    sub_5f01f0(eax_1)
                    sub_676760()
                    int32_t eax_5
                    eax_5.b = 1
                    return 1
        else if (*(ecx_5 + 0x51c) != 2)
            if (*(ecx_5 + 0x1c8c) == 2 && (result.b == 0 || *(edx_1 + 0x3e6) == 0)
                    && sub_6b1fd0(ecx_5 + 0x1c80).b != 0)
                goto label_67330a
        else if (result.b == 0 || *(edx_1 + 0x39b) == 0)
            ecx_6 = ecx_5 + 0x510
            goto label_6732b8
    
    result.b = 0
    return result

int32_t* ecx_1 = data_bac458
sub_62f9b0(ecx_1, ecx_1[0x57] - 0x158)
void* esi_1 = data_bac458
sub_54ae40(*(esi_1 + 0x15c) - 0xcc)
*(esi_1 + 0x15c) -= 0x158
int32_t eax_4
eax_4.b = 1
return 1
