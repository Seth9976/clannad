// 函数: sub_4da273
// 地址: 0x4da273
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_18 = edi
int32_t var_c = 0
int32_t var_14 = 0
int32_t var_10 = 0
uint8_t var_5 = 0

if (arg1[0x14].w != 0)
    do
        if ((var_c.b & 7) == 0)
            uint32_t ecx_1
            ecx_1.b = *(zx.d(var_10.w) + arg1 + 0x1f74)
            var_10 += 1
            var_5 = ecx_1.b
        
        uint32_t ecx_2 = zx.d(var_c.w)
        var_c += 1
        uint32_t ebx_1 = zx.d(*(ecx_2 + *arg1))
        
        if ((var_5 & 1) != 0)
            uint32_t esi_1 = zx.d(*(ebx_1 + arg1 + 0x1b85))
            sub_4d984c(arg1, zx.d(*(arg2 + (esi_1 << 2) + 0x404)), 
                zx.d(*(arg2 + (esi_1 << 2) + 0x406)))
            int32_t edi_3 = *((esi_1 << 2) + &data_acd948)
            
            if (edi_3 != 0)
                sub_4d984c(arg1, ebx_1 - arg1[esi_1 + 0x7a2], edi_3)
            
            uint32_t ebx_3 = zx.d(*(arg1[2] + (zx.d(var_14.w) << 1)))
            var_14 += 1
            uint32_t esi_2
            
            if (ebx_3 s>= 0x100)
                esi_2 = zx.d(*((ebx_3 s>> 7) + arg1 + 0x1d85))
            else
                esi_2 = zx.d(*(ebx_3 + arg1 + 0x1c85))
            
            int16_t* ecx_8 = arg3 + (esi_2 << 2)
            sub_4d984c(arg1, zx.d(*ecx_8), zx.d(ecx_8[1]))
            uint32_t edi_1 = *((esi_2 << 2) + &data_acd9c0)
            
            if (edi_1 != 0)
                sub_4d984c(arg1, ebx_3 - arg1[esi_2 + 0x7bf], edi_1)
        else
            int16_t* ebx_2 = arg2 + (ebx_1 << 2)
            sub_4d984c(arg1, zx.d(*ebx_2), zx.d(ebx_2[1]))
        
        var_5 u>>= 1
    while (var_c.w u< arg1[0x14].w)

sub_4d984c(arg1, zx.d(*(arg2 + 0x400)), zx.d(*(arg2 + 0x402)))
