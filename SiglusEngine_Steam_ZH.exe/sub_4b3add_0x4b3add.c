// 函数: sub_4b3add
// 地址: 0x4b3add
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (zx.d((arg1[0x32]).w) u< 0x200)
    void* eax_1 = arg1[0x40]
    
    if ((*(eax_1 + 2) & 0xfff0) != 0)
        int32_t edi = *(eax_1 + 4)
        int32_t ebx = 0
        
        if (edi u> 0)
            int32_t* eax_3 = *(eax_1 + 8)
            
            do
                void* edx_2 = *(arg1[5] + (*eax_3 << 2))
                
                if (*(edx_2 + 8) != 0xffffffff)
                    int32_t result = sub_4b3166(arg1, *(edx_2 + 8))
                    
                    if (result s< 0)
                        return result
                    
                    break
                
                ebx += 1
                eax_3 = &eax_3[1]
            while (ebx u< edi)

return 0
