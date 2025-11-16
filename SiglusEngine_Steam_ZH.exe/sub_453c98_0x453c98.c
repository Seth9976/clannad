// 函数: sub_453c98
// 地址: 0x453c98
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t ebx
ebx.w = *(esi + 0x42)
int32_t edi
int32_t var_10 = edi
int32_t i = 0

if (arg3 == 0)
    goto label_453cc6

int32_t var_14_1 = 1
void* eax_1 = sub_4441fb(esi, arg3)

if (eax_1 != 0)
    ebx.w = *(eax_1 + 0x14)
label_453cc6:
    int32_t var_14_2 = 0xa
    void* eax_2 = sub_4439e9(esi, arg2)
    arg1 = eax_2
    
    if (eax_2 != 0)
        eax_2.w = *(esi + 0x40)
        
        if (ebx.w != eax_2.w)
            if (eax_2.w != 0xffff && *(zx.d(eax_2.w) * 0xb4 + *(esi + 0xa4) + 0x34) u> 0)
                arg3 = nullptr
                
                do
                    int32_t ecx_3
                    ecx_3.w = *(esi + 0x40)
                    int32_t ecx_5
                    
                    if (*(esi + 0x42) != ecx_3.w || zx.d(*(esi + 0x44)) != i)
                        ecx_5 = 0
                    else
                        ecx_5 = 0xffffffff
                    
                    sub_442a01(esi, 
                        zx.d(*(*(zx.d(ecx_3.w) * 0xb4 + *(esi + 0xa4) + 0x38) + arg3 + 0x34)), 
                        ecx_5, 0xffffffff)
                    arg3 = &arg3[0x38]
                    i += 1
                while (i u< *(zx.d(*(esi + 0x40)) * 0xb4 + *(esi + 0xa4) + 0x34))
            
            int32_t ecx_7 = *(esi + 0xa4)
            *(esi + 0x40) = ebx.w
            int32_t ebx_1 = 0
            int32_t i_1 = 0
            
            if (*(zx.d(ebx.w) * 0xb4 + ecx_7 + 0x34) u> 0)
                do
                    ecx_7.w = *(esi + 0x40)
                    int32_t ecx_9
                    
                    if (*(esi + 0x42) != ecx_7.w || zx.d(*(esi + 0x44)) != i_1)
                        ecx_9 = 0
                    else
                        ecx_9 = 1
                    
                    sub_442a01(esi, 
                        zx.d(*(*(zx.d(ecx_7.w) * 0xb4 + *(esi + 0xa4) + 0x38) + ebx_1 + 0x34)), 
                        ecx_9, 1)
                    i_1 += 1
                    ebx_1 += 0x38
                while (i_1 u< *(zx.d(*(esi + 0x40)) * 0xb4 + *(esi + 0xa4) + 0x34))
            
            *(esi + 0x118) |= 0x40
        
        int32_t eax_21 = *(esi + 0x118)
        int32_t mxcsr
        int16_t x87control
        
        if ((eax_21.b & 0x40) != 0)
            int32_t ecx_11 = *(esi + 0xa4)
            *(esi + 0x118) = eax_21 | 0x800
            int32_t ebx_2 = 0
            int32_t i_2 = 0
            
            if (*(zx.d(*(esi + 0x40)) * 0xb4 + ecx_11 + 0x34) u> 0)
                do
                    ecx_11.w = *(esi + 0x40)
                    int32_t ecx_13
                    
                    if (*(esi + 0x42) != ecx_11.w || zx.d(*(esi + 0x44)) != i_2)
                        ecx_13 = 0
                    else
                        ecx_13 = 1
                    
                    mxcsr, x87control = sub_4526ea(esi, 
                        zx.d(*(*(zx.d(ecx_11.w) * 0xb4 + *(esi + 0xa4) + 0x38) + ebx_2 + 0x34)), 
                        ecx_13)
                    i_2 += 1
                    ebx_2 += 0x38
                while (i_2 u< *(zx.d(*(esi + 0x40)) * 0xb4 + *(esi + 0xa4) + 0x34))
            
            *(esi + 0x118) &= 0xf7bf
        
        if ((*(esi + 0x118) & 1) != 0)
            __controlfp(mxcsr, x87control, *(esi + 0x114), 0x30000)
            *(esi + 0x118) &= 0xfffffffe
        
        void* i_3 = *(arg1 + 0x34)
        
        if (i_3 != 0)
            void* eax_33 = *(i_3 + 0x18)
            
            do
                eax_33 = *(eax_33 + 0x1c)
                
                if (*(zx.d(*(eax_33 + 0x14)) * 0x64 + *(esi + 0x2c) + 0x3a) u> 0)
                    return 1
            while (*(eax_33 + 0x1c) != i_3)

return 0
