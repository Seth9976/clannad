// 函数: sub_442a01
// 地址: 0x442a01
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi_2 = arg2 * 0x64 + *(arg1 + 0x2c)
int16_t eax = *(esi_2 + 0x3c)
int32_t var_c = arg1
int16_t ecx = arg3.w
int32_t edi
int32_t var_1c = edi

if (zx.d(eax) + sx.d(ecx) s>= 0)
    *(esi_2 + 0x3c) = eax + ecx

int16_t ecx_1 = arg4.w
int16_t eax_2 = *(esi_2 + 0x3a)

if (zx.d(eax_2) + sx.d(ecx_1) s>= 0)
    *(esi_2 + 0x3a) = eax_2 + ecx_1

int32_t ebx_1 = *(esi_2 + 0x14) + *esi_2
arg2 = 0

if (*(esi_2 + 0x34) u> 0)
    do
        void* eax_7 = zx.d(*(ebx_1 + (arg2 << 1))) * 0x64 + *(esi_2 + 4)
        int16_t* edi_4 = *(eax_7 + 0x48) + *esi_2
        
        if (*edi_4 != 0)
            int32_t eax_9 = *(*(eax_7 + 0xc) + 0x10)
            int32_t var_8_1 = 0
            
            while (true)
                int32_t ecx_2 = eax_9
                
                if (ecx_2 == 0)
                    ecx_2 = 1
                
                uint32_t eax_10 = zx.d(var_8_1.w)
                
                if (eax_10 u>= ecx_2)
                    break
                
                if (arg4.w != 0)
                    sub_442a01(zx.d(*edi_4) + eax_10 - 1, 0, arg4)
                
                var_8_1 += 1
            
            if (arg3.w != 0)
                sub_442a01(zx.d(edi_4[1]) + zx.d(*edi_4) - 1, arg3, 0)
        
        arg2 += 1
    while (arg2 u< zx.d(*(esi_2 + 0x34)))

return 0
