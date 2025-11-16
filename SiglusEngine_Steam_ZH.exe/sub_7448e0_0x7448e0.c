// 函数: sub_7448e0
// 地址: 0x7448e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg1

if (esi != 0)
    sub_99cba0(&esi[0x250])
    sub_99c590(&esi[0x1e0])
    sub_6e4890(&esi[0x78])
    
    if (*(esi + 0x48) != 0)
        int32_t eax_4 = *(esi + 0x34)
        
        if (eax_4 != 0)
            int32_t i = 0
            
            if (eax_4 s> 0)
                int32_t edi_1 = 0
                void* ecx_1 = nullptr
                arg1 = nullptr
                
                do
                    sub_99b640(*(esi + 0x48) + ecx_1)
                    sub_99b8c0(*(esi + 0x4c) + edi_1)
                    i += 1
                    ecx_1 = &arg1[0x20]
                    edi_1 += 0x10
                    arg1 = ecx_1
                while (i s< *(esi + 0x34))
            
            _free(*(esi + 0x48))
            _free(*(esi + 0x4c))
    
    int32_t eax_9 = *(esi + 0x3c)
    
    if (eax_9 != 0)
        _free(eax_9)
    
    int32_t eax_10 = *(esi + 0x44)
    
    if (eax_10 != 0)
        _free(eax_10)
    
    int32_t eax_11 = *(esi + 0x40)
    
    if (eax_11 != 0)
        _free(eax_11)
    
    int32_t eax_12 = *(esi + 0x38)
    
    if (eax_12 != 0)
        _free(eax_12)
    
    sub_6e4a80(&esi[0x18])
    int32_t ecx_3 = *esi
    
    if (ecx_3 != 0)
        int32_t eax_14 = *(esi + 0x2c8)
        
        if (eax_14 != 0)
            eax_14(ecx_3)
    
    _memset(esi, 0, 0x2d0)

return 0
