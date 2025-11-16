// 函数: sub_4c8850
// 地址: 0x4c8850
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_3 = arg4
int32_t esi = arg2
int32_t var_8 = esi
void* edi = arg3
void* var_c = edi

if (i_3 == 0xffffffff || esi s<= i_3)
    int16_t* edx_1 = data_20af158
    
    if ((arg5.b & 4) != 0)
        if ((arg5.b & 1) == 0)
            *(edx_1 + edi) = 0x2d
            edx_1 += 1
        else
            arg1.w = data_63e7c0
            *(edx_1 + edi) = arg1.w
            edx_1 = &edx_1[1]
        
        data_20af158 = edx_1
    
    arg1 = arg5 & 2
    uint32_t var_18_1 = arg1
    
    if (arg1 == 0)
        arg1 = 0x11
        
        if ((arg5.b & 8) != 0)
            arg1 = 0
        
        if ((arg5.b & 1) == 0)
            if (esi s< i_3)
                int32_t eax_2 = i_3 - esi
                arg1 = zx.d((*"0123456789ABCDEF- ")[arg1]) * 0x1010101
                int32_t ecx_9
                int32_t edi_4
                edi_4, ecx_9 = __memfill_u32(edi + edx_1, arg1, eax_2 u>> 2)
                edx_1 += eax_2
                esi = var_8
                int32_t ecx_12
                int32_t edi_5
                edi_5, ecx_12 = __memfill_u8(edi_4, arg1.b, eax_2 & 3)
                edi = var_c
                i_3 = arg4
                data_20af158 = edx_1
        else if (esi s< i_3)
            uint32_t ebx = arg1
            int32_t i_2 = i_3 - esi
            int32_t i
            
            do
                arg1.w = *((ebx << 1) + &data_63e7a0)
                *(edx_1 + edi) = arg1.w
                edx_1 = &edx_1[1]
                i = i_2
                i_2 -= 1
            while (i != 1)
            i_3 = arg4
            data_20af158 = edx_1
    
    int32_t ecx_13 = esi - 1
    
    if (ecx_13 s>= 0)
        int32_t temp1_1
        
        do
            arg1 = zx.d((&data_20af1f0)[ecx_13])
            
            if ((arg5 & 1) == 0)
                arg1.b = (*"0123456789ABCDEF- ")[arg1]
                *(edx_1 + edi) = arg1.b
                edx_1 += 1
            else
                arg1.w = *((arg1 << 1) + &data_63e7a0)
                *(edx_1 + edi) = arg1.w
                edx_1 = &edx_1[1]
            
            temp1_1 = ecx_13
            ecx_13 -= 1
            data_20af158 = edx_1
        while (temp1_1 - 1 s>= 0)
    
    if (var_18_1 != 0)
        if (esi s< i_3)
            int32_t ebx_1 = i_3 - esi
            int32_t edi_7 = __builtin_memset(edi + edx_1, 0x20202020, ebx_1 u>> 2 << 2)
            esi = var_8
            edx_1 += ebx_1
            i_3 = arg4
            __builtin_memset(edi_7, 0x20, ebx_1 & 3)
            data_20af158 = edx_1
        
        if ((arg5.b & 1) != 0 && esi s< i_3)
            int32_t ebx_2 = i_3 - esi
            int32_t edi_10 = __builtin_memset(var_c + edx_1, 0x20202020, ebx_2 u>> 2 << 2)
            data_20af158 = edx_1 + ebx_2
            __builtin_memset(edi_10, 0x20, ebx_2 & 3)
else if ((arg5.b & 1) == 0)
    if (i_3 s> 0)
        int32_t esi_1 = data_20af158
        __builtin_memset(__builtin_memset(edi + esi_1, 0x3f3f3f3f, i_3 u>> 2 << 2), 0x3f, i_3 & 3)
        data_20af158 = esi_1 + i_3
else if (i_3 s> 0)
    int16_t* ecx = data_20af158
    int32_t i_1
    
    do
        arg1.w = data_63e7c0
        *(ecx + edi) = arg1.w
        ecx = &ecx[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    data_20af158 = ecx
