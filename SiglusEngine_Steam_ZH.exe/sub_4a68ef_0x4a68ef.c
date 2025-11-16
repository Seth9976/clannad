// 函数: sub_4a68ef
// 地址: 0x4a68ef
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
int32_t edi
int32_t var_10 = edi

if (*(ebx + 0x48) == 0xffffffff)
    sub_4a035b(arg1, ebx + 0x14, ebx + 0x18, *(arg3 + 0x14), *(arg3 + 0x18))
else
    int32_t eax_1 = *(arg3 + 0x14)
    
    if (eax_1 == 0xffffffff)
        sub_4a035b(arg1, ebx + 0x14, ebx + 0x18, *(arg3 + 0x14), *(arg3 + 0x18))
    else
        void* esi_1 = *(*(arg1 + 0x14) + (eax_1 << 2))
        int32_t eax_2 = *(esi_1 + 0x48)
        arg2 = nullptr
        
        if (eax_2 != 0xffffffff)
            arg2 = sub_49e939(*(*(arg1 + 0x18) + (eax_2 << 2)))
        
        if (sub_49eb7a(*(*(arg1 + 0x18) + (*(ebx + 0x48) << 2))) == 0 || arg2 != 0)
            sub_4a035b(arg1, ebx + 0x14, ebx + 0x18, *(arg3 + 0x14), *(arg3 + 0x18))
        else
            int32_t i
            
            do
                *(ebx + 0x14) = *(esi_1 + 0x14)
                *(ebx + 0x18) = *(esi_1 + 0x18)
                
                if (*(esi_1 + 0x14) == 0xffffffff)
                    break
                
                esi_1 = *(*(arg1 + 0x14) + (*(esi_1 + 0x14) << 2))
                int32_t eax_9 = *(esi_1 + 0x48)
                
                if (eax_9 == 0xffffffff)
                    break
                
                i = sub_49e939(*(*(arg1 + 0x18) + (eax_9 << 2)))
            while (i == 0)

return 0
