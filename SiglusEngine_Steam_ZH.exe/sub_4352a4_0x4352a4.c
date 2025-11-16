// 函数: sub_4352a4
// 地址: 0x4352a4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_18 = edi
int32_t result = 0
int32_t eax = sub_433f9c(arg1, arg2, 1)

if (eax != 0)
    int32_t* ecx_5 = *(*(eax + 4) + 0x40) + *(arg1 + 0x344) + *(eax + 0x18)
    
    if ((ecx_5[4] == 0 || *(eax + 0x10) != 0xffffffff) && ecx_5[1] == 4 && *ecx_5 == 4)
        void* eax_2 = *(*(eax + 0x1c) + 8)
        
        if (arg3 == 0)
            *(eax_2 + 0x18) = nullptr
            *(eax_2 + 0x1c) = nullptr
        else
            sub_42f25e(&arg2, arg1 + 0x10)
            char* eax_3 = arg3
            char i
            
            do
                i = *eax_3
                eax_3 = &eax_3[1]
            while (i != 0)
            void* ebx = eax_3 - &eax_3[1] + 1
            void* eax_5 = sub_46b465(data_b97498, ebx, 1)
            
            if (eax_5 != 0)
                int32_t esi_3
                int32_t edi_2
                edi_2, esi_3 = __builtin_memcpy(eax_5, arg3, ebx u>> 2 << 2)
                __builtin_memcpy(edi_2, esi_3, ebx & 3)
                sub_42d09d(arg2)
                *(eax_2 + 0x18) = eax_5
                *(eax_2 + 0x1c) = ebx
            else
                result = 0x8007000e
                sub_42d09d(arg2)
        
        return result

return 0x8876086c
