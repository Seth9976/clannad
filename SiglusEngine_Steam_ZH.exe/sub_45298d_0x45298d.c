// 函数: sub_45298d
// 地址: 0x45298d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t esi = arg1
int32_t edi
int32_t var_c = edi
int32_t mxcsr
int16_t x87control

if (*(esi + 0x3c) != 0)
    int32_t eax
    eax.w = *(esi + 0x42)
    void* edi_3 = zx.d(eax.w) * 0xb4 + *(esi + 0xa4)
    
    if (*(edi_3 + 0x34) u> arg2)
        int16_t ecx = *(esi + 0x44)
        
        if (arg2.w != ecx)
            if (ecx != 0xffff)
                int32_t edx_1
                edx_1.b = *(esi + 0x40) != eax.w
                sub_442a01(esi, zx.d(*(zx.d(ecx) * 0x38 + *(edi_3 + 0x38) + 0x34)), 0xffffffff, 
                    edx_1 - 1)
                arg1 = 0
            
            eax.w = *(esi + 0x40)
            eax.w -= *(esi + 0x42)
            *(esi + 0x44) = arg2.w
            int16_t temp1_1 = eax.w
            eax.w = neg.w(eax.w)
            sub_442a01(esi, zx.d(*(zx.d(arg2.w) * 0x38 + *(edi_3 + 0x38) + 0x34)), 1, 
                sbb.d(eax, eax, temp1_1 != 0) + 1)
            arg1 = 0
        
        void* ebx_3 = arg2 * 0x38 + *(edi_3 + 0x38)
        *(esi + 0x118) &= 0x7f
        
        if ((0x100 & *(esi + 0x118)) != 0)
            arg1 = 0x8876086c
        else
            uint32_t eax_11
            eax_11, mxcsr, x87control = sub_450e43(esi, *(ebx_3 + 0x34), 0xffff)
            arg1 = eax_11
            
            if (eax_11 s>= 0)
                *(esi + 0x118) |= 0x100
    else
        arg1 = 0x8876086c
else
    arg1 = 0x8876086c

if ((*(esi + 0x118) & 1) != 0)
    __controlfp(mxcsr, x87control, *(esi + 0x114), 0x30000)
    *(esi + 0x118) &= 0xfffffffe

return arg1
