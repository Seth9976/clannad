// 函数: sub_47133f
// 地址: 0x47133f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg5
int32_t edx = sub_745f3f(ebx * 0xc)
int32_t var_8 = edx

if (edx != 0)
    int32_t* var_14
    
    for (int32_t i = 0; i u< 3; )
        (&var_14)[i] = edx
        i += 1
        edx += ebx << 2
    
    int32_t* edx_1 = var_14
    int32_t eax_3 = 0
    
    if (ebx u> 0)
        do
            edx_1[eax_3] = arg1[0xb]
            eax_3 += 1
        while (eax_3 u< ebx)
    
    int32_t* var_10
    sub_46cc96(var_10, ebx)
    arg5 = 0
    int32_t var_c
    sub_46cc96(var_c, ebx)
    arg5 = 0
    int32_t edi_1 = ebx & 0xfffff
    int32_t eax_6 = sub_46ea58(arg1, arg3, edi_1 | 0x20500000, var_10, arg4, edx_1, 0, arg2.b)
    arg5 = eax_6
    
    if (eax_6 s>= 0)
        int32_t eax_7 = sub_46ea58(arg1, arg3, edi_1 | 0x11000000, var_c, var_10, nullptr, 0)
        arg5 = eax_7
        
        if (eax_7 s>= 0)
            int32_t edx_2 = 0
            
            if (ebx u> 0)
                do
                    void* ecx_8 = arg1[2]
                    void* eax_10 = *(*(ecx_8 + 0x14) + (*(var_c + (edx_2 << 2)) << 2))
                    *(eax_10 + 4) = *(ecx_8 + 0xa8)
                    void* ecx_10 = arg1[2]
                    int32_t ecx_13 = *(*(*(ecx_10 + 0x10) + (*(ecx_10 + 0xa8) << 2)) + 8)
                    *(eax_10 + 0x10) = edx_2
                    edx_2 += 1
                    *(eax_10 + 0xc) = ecx_13
                while (edx_2 u< ebx)
            
            void* esi_1 = arg1[2]
            void* eax_12 = *(*(esi_1 + 0x10) + (*(esi_1 + 0xa8) << 2))
            *(eax_12 + 8) += 1
            arg5 = 0
else
    arg5 = 0x8007000e

j__free(var_8)
return arg5
