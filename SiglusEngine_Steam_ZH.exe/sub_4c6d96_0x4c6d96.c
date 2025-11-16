// 函数: sub_4c6d96
// 地址: 0x4c6d96
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
void* ebx = arg3

if (ebx == 0xffffffff)
    ebx = ((arg1[1] + 3) u>> 2) + 2
label_4c6dc1:
    
    if (ebx u<= 0x8000)
        int32_t* eax_6 = arg2
        arg2 = nullptr
        *eax_6 = ((ebx - 1) & 0x7fff) << 0x10 | 0xfffe
        eax_6[1] = *arg1
        int32_t* i = arg1[2]
        int32_t edi
        int32_t var_10_1 = edi
        arg3 = &eax_6[2]
        
        while (i != 0)
            if ((i[2].b & 4) == 0)
                void* ecx_2 = ((arg2 + 3) & 0xfffffffc) - arg2
                void* var_8_1 = ecx_2
                __builtin_memset(__builtin_memset(arg3, 0xabababab, ecx_2 u>> 2 << 2), 0xab, 
                    ecx_2 & 3)
                arg3 += ecx_2
                arg2 += ecx_2
            
            int32_t ecx_6 = i[1]
            int32_t esi_3
            int32_t edi_4
            edi_4, esi_3 = __builtin_memcpy(arg3, *i, ecx_6 u>> 2 << 2)
            __builtin_memcpy(edi_4, esi_3, ecx_6 & 3)
            int32_t eax_11 = i[1]
            i = i[4]
            arg3 += eax_11
            arg2 += eax_11
        
        void* ecx_11 = (ebx << 2) + 0xfffffff8 - arg2
        __builtin_memset(__builtin_memset(arg3, 0xabababab, ecx_11 u>> 2 << 2), 0xab, ecx_11 & 3)
        return 0
else if (ebx u>= ((arg1[1] + 3) u>> 2) + 2)
    goto label_4c6dc1

return 0x80004005
