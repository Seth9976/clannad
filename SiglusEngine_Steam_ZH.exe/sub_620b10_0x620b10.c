// 函数: sub_620b10
// 地址: 0x620b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax

if (*(data_bac484 + 0x138) == 0)
    void* ecx_1 = data_bac458
    
    if (*(ecx_1 + 0x351) == 0)
        eax = data_bac4a0
        
        if (*(eax + 0xcd) != 0 || *(eax + 0xce) != 0)
            eax.b = 1
            return eax
        
        if (*(ecx_1 + 0x350) == 0)
            if (*(eax + 0x1a5) == 0)
                char* eax_1
                eax_1.b = *data_bac498
                return eax_1
            
            eax.b = 1
            return eax

eax.b = 0
return eax
