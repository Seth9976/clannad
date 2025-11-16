// 函数: sub_673320
// 地址: 0x673320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(data_bac458 + 0x80)
void* eax_1 = sub_54b180(1)

if (eax_1 != 0)
    int32_t* eax_2 = *(eax_1 + 0x15e0)
    
    if (eax_2 != 0)
        int32_t result = *eax_2
        
        if (*(result + 0xc0) != 0 && *(result + 0x111) == 0)
            void* edx_1 = data_bac458
            
            if (*(edx_1 + 0x140) != 0)
                if (*(data_bac4a0 + 0xcc) != 0)
                    result.b = 0
                else if (*(data_bac484 + 0x138) == 0)
                    result.b = *(data_bac498 + 2) == 0
                else
                    result.b = 0
                
                void* ecx_1 = data_bac4c8
                void* ecx_2
                
                if (*(ecx_1 + 0x14) == 2)
                    if (result.b == 0)
                        goto label_6733d2
                    
                    if (sub_634fe0().b == 0)
                        edx_1 = data_bac458
                        ecx_1 = data_bac4c8
                    label_6733d2:
                        ecx_2 = ecx_1 + 8
                    label_6733d5:
                        
                        if (sub_6b1fd0(ecx_2).b != 0)
                        label_67342c:
                            
                            if (*(edx_1 + 0x142) != 0)
                                sub_677bb0(1)
                            
                            sub_5e5060(eax_1, 1)
                            sub_676760()
                            int32_t eax_3
                            eax_3.b = 1
                            return 1
                else if (*(ecx_1 + 0x51c) != 2)
                    if (*(ecx_1 + 0x1c8c) == 2 && (result.b == 0 || *(edx_1 + 0x3e6) == 0)
                            && sub_6b1fd0(ecx_1 + 0x1c80).b != 0)
                        goto label_67342c
                else if (result.b == 0 || *(edx_1 + 0x39b) == 0)
                    ecx_2 = ecx_1 + 0x510
                    goto label_6733d5
            
            result.b = 0
            return result

int32_t* ecx_5 = data_bac458

if (*(ecx_5 + 0x142) != 0)
    sub_677bb0(0)
    ecx_5 = data_bac458

sub_62f9b0(ecx_5, ecx_5[0x57] - 0x158)
void* esi_1 = data_bac458
sub_54ae40(*(esi_1 + 0x15c) - 0xcc)
*(esi_1 + 0x15c) -= 0x158
int32_t eax_6
eax_6.b = 1
return 1
