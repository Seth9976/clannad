// 函数: sub_6ddbd0
// 地址: 0x6ddbd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    void* result = *(arg1 + 4)
    
    if (result != 0)
        if (arg2 == 0)
            return result
        
        void* eax_5 = result + arg2
        void* esi = arg1 + 8
        void* edi = arg2
        
        while (edi != eax_5)
            int16_t edx
            edx.b = *esi
            esi += 1
            edx:1.b = 8
            char i
            
            do
                if (edi == eax_5)
                    return result
                
                if ((edx.b & 1) == 0)
                    int32_t eax_6
                    eax_6.w = *esi
                    edi = __builtin_memcpy(edi, edi - (eax_6 u>> 4 << 2), ((eax_6 & 0xf) + 1) << 2)
                    esi += 2
                else
                    *edi = *esi
                    char* edi_1 = edi + 2
                    void* esi_1 = esi + 2
                    *edi_1 = *esi_1
                    void* edi_2 = &edi_1[1]
                    esi = esi_1 + 1
                    *edi_2 = 0xff
                    edi = edi_2 + 1
                
                edx.b u>>= 1
                i = edx:1.b
                edx:1.b -= 1
            while (i != 1)
        
        return result

return 0
