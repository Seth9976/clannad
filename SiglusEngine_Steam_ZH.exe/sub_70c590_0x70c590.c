// 函数: sub_70c590
// 地址: 0x70c590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1

if (arg2 == 0)
    return 0

void* esi = arg1[4]

if (esi != 0 && arg2 u<= esi)
    void* i = esi + 1 - arg2
    int32_t* ebx_1
    
    if (arg1[5] u< 0x10)
        ebx_1 = arg1
    else
        ebx_1 = *arg1
    
    while (i != 0)
        void* eax_3 = _memchr(ebx_1, 0x40, i)
        int32_t* edi_1 = eax_3
        
        if (edi_1 == 0)
            break
        
        if (sub_6701a0(eax_3, 0xb08810, edi_1, arg2) == 0)
            void** eax_5 = arg1
            
            if (eax_5[5] u>= 0x10)
                eax_5 = *eax_5
            
            return edi_1 - eax_5
        
        i += ebx_1 - edi_1 - 1
        ebx_1 = edi_1 + 1

return 0xffffffff
