// 函数: sub_620a70
// 地址: 0x620a70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax

if (*(data_bac484 + 0x138) == 0)
    eax = data_bac458
    
    if (*(eax + 0x351) == 0)
        void* ecx_1 = data_bac4a0
        
        if (*(ecx_1 + 0xcd) != 0)
            eax.b = 1
            return eax
        
        if (*(eax + 0x350) == 0)
            if (*(ecx_1 + 0x1a5) == 0)
                char* eax_1
                eax_1.b = *data_bac498
                return eax_1
            
            eax.b = 1
            return eax

eax.b = 0
return eax
