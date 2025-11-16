// 函数: sub_71cd20
// 地址: 0x71cd20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    void* result = *(arg1 + 4)
    
    if (result != 0)
        if (arg2 == 0)
            return result
        
        void* esi = arg1 + 8
        char* edi = arg2
        
        while (true)
            int16_t edx
            edx.b = *esi
            esi += 1
            edx:1.b = 8
            char i
            
            do
                if (edi == result + arg2)
                    return result
                
                if ((edx.b & 1) == 0)
                    int32_t eax_6
                    eax_6.w = *esi
                    edi = __builtin_memcpy(edi, edi - (eax_6 u>> 4), (eax_6 & 0xf) + 2)
                    esi += 2
                else
                    *edi = *esi
                    edi = &edi[1]
                    esi += 1
                
                edx.b u>>= 1
                i = edx:1.b
                edx:1.b -= 1
            while (i != 1)

return 0
