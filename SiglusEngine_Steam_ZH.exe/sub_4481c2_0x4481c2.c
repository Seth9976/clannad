// 函数: sub_4481c2
// 地址: 0x4481c2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t edi
int32_t var_10 = edi
int32_t result = 0
arg1.w = *(esi + 0x42)

if (esi[0xf] == 0 && arg3 != 0)
    int16_t ecx = esi[0x11].w
    
    if (ecx != 0xffff)
        int16_t eax = *(esi + 0x42)
        int32_t edx_1
        edx_1.b = esi[0x10].w != eax
        sub_442a01(esi, zx.d(*(*(zx.d(eax) * 0xb4 + esi[0x29] + 0x38) + zx.d(ecx) * 0x38 + 0x34)), 
            0xffffffff, edx_1 - 1)
        result = 0
    
    esi[0x11].w = 0xffff
    int32_t eax_5
    
    if (arg2 != 0)
        int32_t var_14_2 = 1
        void* eax_6 = sub_4441fb(esi, arg2)
        
        if (eax_6 != 0)
            eax_6.w = *(eax_6 + 0x14)
            int32_t ecx_5 = esi[0x2d]
            eax_6.w += 1
            *(esi + 0x42) = eax_6.w
            eax_5 = ecx_5 + ((zx.d(eax_6.w) * esi[0x2b]) << 2)
            goto label_448281
        
        result = 0x8876086c
    else
        eax_5 = esi[0x2d]
        *(esi + 0x42) = 0
    label_448281:
        esi[0x2e] = eax_5
        
        while (true)
            if (zx.d(*(esi + 0x42)) u>= esi[0x28])
                *arg3 = 0
                result = 1
                break
            
            esi[0x2e] = esi[0x2d] + ((zx.d(*(esi + 0x42)) * esi[0x2b]) << 2)
            
            if ((*(*esi + 0xf8))(esi, 0) s>= 0)
                *arg3 = not.d(zx.d(*(esi + 0x42)) * 0xb4 + esi[0x29])
                break
            
            *(esi + 0x42) += 1
else
    result = 0x8876086c

int16_t eax_16 = arg1.w
int32_t ecx_7 = esi[0x2d]
*(esi + 0x42) = eax_16
esi[0x2e] = ecx_7 + ((zx.d(eax_16) * esi[0x2b]) << 2)
return result
