// 函数: sub_672cd0
// 地址: 0x672cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = sub_620a70()
void* edx = data_bac458
int32_t eax_2

if (eax == 0 || *(edx + 0x141) != 0)
    eax_2 = *data_bac450

int32_t ecx_1

if ((eax != 0 && *(edx + 0x141) == 0) || eax_2 == 0xffffffff)
    if (*(edx + 0x142) == 0)
        sub_6a6910(data_bac450)
        sub_676760()
    else
        ecx_1 = 0
    label_672ddf:
        sub_677bb0(ecx_1)
        sub_6a6910(data_bac450)
        sub_676760()
else if (eax_2 s>= 0 && *(edx + 0x140) != 0)
    if (*(data_bac4a0 + 0xcc) != 0)
        eax_2.b = 0
    else if (*(data_bac484 + 0x138) == 0)
        eax_2.b = *(data_bac498 + 2) == 0
    else
        eax_2.b = 0
    
    void* ecx_2 = data_bac4c8
    
    if (*(ecx_2 + 0x14) == 2)
        if (eax_2.b == 0)
            goto label_672d7a
        
        if (sub_634fe0().b == 0)
            edx = data_bac458
            ecx_2 = data_bac4c8
        label_672d7a:
            char eax_3 = sub_6b1fd0(ecx_2 + 8)
            
            if (eax_3 == 0)
                return eax_3
            
            goto label_672dd1
    else if (*(ecx_2 + 0x51c) != 2)
        if (*(ecx_2 + 0x1c8c) == 2 && (eax_2.b == 0 || *(edx + 0x3e6) == 0)
            && sub_6b1fd0(ecx_2 + 0x1c80).b != 0)
        label_672dd1:
            
            if (*(edx + 0x142) != 0)
                ecx_1 = 1
                goto label_672ddf
            
            sub_6a6910(data_bac450)
            sub_676760()
    else if (eax_2.b == 0 || *(edx + 0x39b) == 0)
        char eax_4 = sub_6b1fd0(ecx_2 + 0x510)
        
        if (eax_4 == 0)
            return eax_4
        
        goto label_672dd1
eax_2.b = 0
return eax_2
