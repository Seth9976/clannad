// 函数: sub_672040
// 地址: 0x672040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(data_bac458 + 0x80)
void* eax_1 = sub_54b180(1)

if (eax_1 != 0)
    int32_t eax_2 = *(eax_1 + 0xd4)
    
    if (eax_2 s>= 0 && sub_5fefc0(eax_2 * 0x15c + *(eax_1 + 0xc8)) != 0)
        char* result = sub_620a70()
        void* edx_2 = data_bac458
        
        if (result.b != 0 && *(edx_2 + 0x141) == 0)
            if (*(edx_2 + 0x142) != 0)
                sub_677bb0(0)
            
            sub_676760()
            int32_t eax_4
            eax_4.b = 1
            return 1
        
        if (*(edx_2 + 0x140) != 0)
            if (data_bac4a0[0xcc] != 0)
                result.b = 0
            else if (data_bac484[0x138] == 0)
                result.b = data_bac498[2] == 0
            else
                result.b = 0
            
            void* ecx_3 = data_bac4c8
            void* ecx_4
            
            if (*(ecx_3 + 0x14) == 2)
                if (result.b == 0)
                    goto label_67211a
                
                if (sub_634fe0().b == 0)
                    edx_2 = data_bac458
                    ecx_3 = data_bac4c8
                label_67211a:
                    ecx_4 = ecx_3 + 8
                label_67211d:
                    
                    if (sub_6b1fd0(ecx_4).b != 0)
                    label_672174:
                        
                        if (*(edx_2 + 0x142) != 0)
                            sub_677bb0(1)
                        
                        sub_676760()
                        int32_t eax_5
                        eax_5.b = 1
                        return 1
            else if (*(ecx_3 + 0x51c) != 2)
                if (*(ecx_3 + 0x1c8c) == 2 && (result.b == 0 || *(edx_2 + 0x3e6) == 0)
                        && sub_6b1fd0(ecx_3 + 0x1c80).b != 0)
                    goto label_672174
            else if (result.b == 0 || *(edx_2 + 0x39b) == 0)
                ecx_4 = ecx_3 + 0x510
                goto label_67211d
        
        result.b = 0
        return result

int32_t* ecx_6 = data_bac458

if (*(ecx_6 + 0x142) != 0)
    sub_677bb0(0)
    ecx_6 = data_bac458

sub_62f9b0(ecx_6, ecx_6[0x57] - 0x158)
void* esi = data_bac458
sub_54ae40(*(esi + 0x15c) - 0xcc)
*(esi + 0x15c) -= 0x158
int32_t eax_8
eax_8.b = 1
return 1
