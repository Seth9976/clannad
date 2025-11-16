// 函数: sub_427a10
// 地址: 0x427a10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
int32_t var_4 = ebx
int32_t esi = 0

for (void* i = &data_9265b0; i s< &data_928db0; )
    if (esi u<= 0xff)
        int32_t eax = sub_4d1ba0(eax, 0x24, i, 0)
        int32_t ebx_2 = *((esi << 2) + &data_ef2af8)
        
        if (ebx_2 s>= 0 && ebx_2 u<= 0x1ff)
            *(ebx_2 * 0x74 + &data_13747ac) -= 1
            
            if (*(ebx_2 * 0x74 + &data_13747ac) s<= 0)
                sub_4d6c40(ebx_2 * 0x74 + 0x13747b0, ebx_2 * 0x74 + 0x13747b4)
                eax = sub_425320(ebx_2)
        
        bool cond:0_1 = data_702fc0 == 0
        *((esi << 2) + &data_ef2af8) = 0xffffffff
        
        if (not(cond:0_1))
            *((esi << 2) + &data_20c3e74) += 1
    
    i += 0x28
    esi += 1
