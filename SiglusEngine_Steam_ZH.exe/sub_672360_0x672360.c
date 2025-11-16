// 函数: sub_672360
// 地址: 0x672360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx_7 = data_bac468

if (ecx_7 != 0xffffff28 && sub_600e10(ecx_7 + 0xd8) == 1)
    char* result = sub_620a70()
    void* edx = data_bac458
    
    if (result.b != 0 && *(edx + 0x141) == 0)
        if (*(edx + 0x142) != 0)
            sub_677bb0(0)
        
        sub_676760()
        int32_t eax_5
        eax_5.b = 1
        return 1
    
    if (*(edx + 0x140) != 0)
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
                goto label_67245a
            
            if (sub_634fe0().b == 0)
                edx = data_bac458
                ecx_4 = data_bac4c8
            label_67245a:
                ecx_5 = ecx_4 + 8
            label_67245d:
                
                if (sub_6b1fd0(ecx_5).b != 0)
                label_6724b4:
                    
                    if (*(edx + 0x142) != 0)
                        sub_677bb0(1)
                    
                    sub_676760()
                    int32_t eax_6
                    eax_6.b = 1
                    return 1
        else if (*(ecx_4 + 0x51c) != 2)
            if (*(ecx_4 + 0x1c8c) == 2 && (result.b == 0 || *(edx + 0x3e6) == 0)
                    && sub_6b1fd0(ecx_4 + 0x1c80).b != 0)
                goto label_6724b4
        else if (result.b == 0 || *(edx + 0x39b) == 0)
            ecx_5 = ecx_4 + 0x510
            goto label_67245d
    
    result.b = 0
    return result

int32_t* ecx_1 = data_bac458

if (*(ecx_1 + 0x142) != 0)
    sub_677bb0(0)
    ecx_1 = data_bac458

sub_62f9b0(ecx_1, ecx_1[0x57] - 0x158)
void* esi = data_bac458
sub_54ae40(*(esi + 0x15c) - 0xcc)
*(esi + 0x15c) -= 0x158
int32_t eax_3
eax_3.b = 1
return 1
