// 函数: sub_43877f
// 地址: 0x43877f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = *(arg1 + 0x10)

if (eax == 0)
    sub_437200(arg1, eax, eax, "internal error: scope underflow")
    return 0x80004005

int32_t edi
int32_t var_8 = edi

if (*(eax + 0x10) == 4)
    void* ecx = *(eax + 0x20)
    
    if (ecx != 0 && *(ecx + 0x10) != 4)
        void* edi_1 = eax + 0x18
        
        while (true)
            void* eax_5 = *edi_1
            
            if (eax_5 == 0)
                break
            
            *(*(eax_5 + 8) + 0x2c) = 1
            int32_t result = sub_437301(*(*(arg1 + 0x10) + 0x20), *(*edi_1 + 8))
            
            if (result s< 0)
                return result
            
            edi_1 = *edi_1 + 0xc
        
        *edi_1 = *(*(*(arg1 + 0x10) + 0x20) + 0x18)
        void* eax_9 = *(arg1 + 0x10)
        *(*(eax_9 + 0x20) + 0x18) = *(eax_9 + 0x18)
        *(*(arg1 + 0x10) + 0x18) = 0

void* eax_12 = *(arg1 + 0x10)
*(arg1 + 0x10) = *(eax_12 + 0x20)
*(eax_12 + 0x20) = 0
return 0
