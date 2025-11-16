// 函数: sub_672b00
// 地址: 0x672b00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = data_bac468

if (edi != 0xfffffc44)
    int32_t eax_4
    void* ecx_5
    eax_4, ecx_5 = sub_5cb350(edi + 0x3bc)
    
    if (eax_4 == 2 || eax_4 == 3)
        void* esi_1 = data_bac458
        
        if (*(esi_1 + 0x140) == 0)
            goto label_672ca3
        
        void* eax_5
        
        if (*(data_bac4a0 + 0xcc) != 0)
            eax_5.b = 0
        else if (*(data_bac484 + 0x138) == 0)
            eax_5.b = *(data_bac498 + 2) == 0
        else
            eax_5.b = 0
        
        ecx_5 = data_bac4c8
        
        if (*(ecx_5 + 0x14) != 2)
            if (*(ecx_5 + 0x51c) == 2)
                if (eax_5.b != 0 && *(esi_1 + 0x39b) != 0)
                    goto label_672bf3
                
                ecx_5 += 0x510
                goto label_672bea
            
            if (*(ecx_5 + 0x1c8c) == 2 && (eax_5.b == 0 || *(esi_1 + 0x3e6) == 0)
                    && sub_6b1fd0(ecx_5 + 0x1c80) != 0)
                goto label_672c70
        else
            if (eax_5.b == 0)
                goto label_672be7
            
            char eax_6
            eax_6, ecx_5 = sub_634fe0()
            esi_1 = data_bac458
            
            if (eax_6 == 0)
                ecx_5 = data_bac4c8
            label_672be7:
                ecx_5 += 8
            label_672bea:
                
                if (sub_6b1fd0(ecx_5) != 0)
                    goto label_672c70
        
    label_672bf3:
        
        if (*(esi_1 + 0x140) == 0)
            goto label_672ca3
        
        void* eax_8 = sub_634fb0()
        ecx_5.b = eax_8.b
        char eax_9
        eax_9, ecx_5 = sub_6355a0(eax_8, 2, ecx_5.b, 2)
        
        if (eax_9 == 0)
            esi_1 = data_bac458
        label_672ca3:
            char* result
            
            if (*data_bac4a0 != 0)
                void* eax_13 = sub_634fb0()
                ecx_5.b = eax_13.b
                result = sub_635790(eax_13, 0x4d, ecx_5.b, 2, 2)
            
            if (*data_bac4a0 == 0 || result.b == 0)
                result.b = 0
                return result
            
        label_672c70:
            
            if (*(esi_1 + 0x140) != 0)
                sub_677bb0(1)
        else if (*(data_bac458 + 0x140) != 0)
            sub_677bb0(0xffffffff)
        
        sub_5cacb0(edi + 0x3bc)
        sub_676760()
        int32_t eax_12
        eax_12.b = 1
        return 1
    
    sub_5cacb0(edi + 0x3bc)

int32_t* ecx_1 = data_bac458

if (ecx_1[0x50].b != 0)
    sub_677bb0(0)
    ecx_1 = data_bac458

sub_62f9b0(ecx_1, ecx_1[0x57] - 0x158)
void* esi = data_bac458
sub_54ae40(*(esi + 0x15c) - 0xcc)
*(esi + 0x15c) -= 0x158
int32_t eax_3
eax_3.b = 1
return 1
