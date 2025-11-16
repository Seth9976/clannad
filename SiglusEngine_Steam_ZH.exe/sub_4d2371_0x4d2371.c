// 函数: sub_4d2371
// 地址: 0x4d2371
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t var_8_1 = 0
int32_t eax = 0
int32_t edx = 0
int32_t edi
int32_t var_14 = edi
int32_t* esi = arg1

if (arg6 u> 0)
    arg1 = esi[0x54]
    
    do
        if (arg1 == *(arg5 + (eax << 2)))
            edx = 1
        
        eax += 1
    while (eax u< arg6)

int32_t result

if (esi[0x53] u<= arg2 || edx != 0)
    esi[0x4f] = 0xffffffff
    void* edi_3 = &esi[0x50]
    *edi_3 = 0xffffffff
    void* edi_4 = edi_3 + 4
    *edi_4 = 0xffffffff
    *(edi_4 + 4) = 0xffffffff
    int32_t eax_3 = sub_745f3f(esi[0xb] << 2)
    var_8_1 = eax_3
    
    if (eax_3 != 0)
        int32_t ecx_2 = esi[0xb] << 2
        int32_t i = 0
        arg1 =
            __builtin_memset(__builtin_memset(eax_3, 0xffffffff, ecx_2 u>> 2 << 2), 0xff, ecx_2 & 3)
        
        if (esi[2] u> 0)
            do
                void* eax_5 = *(esi[5] + (i << 2))
                arg1 = esi[0x22]
                
                if (arg1 == *(eax_5 + 4) && *(eax_5 + 8) == 0xffffffff)
                    arg1 = *(eax_5 + 0xc)
                    
                    if (arg1 u< esi[0xb])
                        if (*(eax_5 + 0x48) u< arg2 && *(eax_5 + 0x58) u>= arg2)
                            *(var_8_1 + (arg1 << 2)) = 0
                        
                        arg1 = *(eax_5 + 0x48)
                        
                        if (arg1 u>= arg2)
                            int32_t* eax_7 = var_8_1 + (*(eax_5 + 0xc) << 2)
                            
                            if (arg1 u< *eax_7)
                                *eax_7 = arg1
                
                i += 1
            while (i u< esi[2])
        
        int32_t edx_2 = esi[0xb]
        int32_t i_1 = 0
        esi[0x54] = 0
        esi[0x53] = 0
        
        if (edx_2 u> 0)
            do
                arg1 = nullptr
                
                if (arg6 u> 0)
                    while (i_1 != *(arg5 + (arg1 << 2)))
                        arg1 += 1
                        
                        if (arg1 u>= arg6)
                            break
                
                if (arg6 u<= 0 || arg1 u>= arg6)
                    arg1 = var_8_1 + (i_1 << 2)
                    
                    if (esi[0x53] u< *arg1)
                        esi[0x54] = i_1
                        arg1 = *arg1
                        esi[0x53] = arg1
                
                i_1 += 1
            while (i_1 u< esi[0xb])
        
        if (esi[0x53] u<= arg2)
            esi[0x53] = 0xffffffff
            esi[0x54] = edx_2
        
        goto label_4d24b0
    
    result = 0x8007000e
else
label_4d24b0:
    int32_t edi_15 = neg.d(arg4 - 1)
    arg5 = 0
    int32_t edi_18 = (sbb.d(edi_15, edi_15, arg4 != 1) & 0xfffffffd) + 3
    
    if (arg4 u<= 0)
    label_4d258f:
        result = 0
    else
        arg6 = &esi[edi_18 + 0x4f]
        
        while (true)
            int32_t eax_10 = *arg6
            
            if (eax_10 != 0xffffffff)
                arg1 = esi[5]
                *(arg1[eax_10] + 0x50) = arg2
            
            int32_t* var_18_2 = arg1
            int32_t* var_1c_1 = arg1
            var_1c_1.q = fconvert.d(float.t(0))
            int32_t eax_12 = sub_49f544(esi, esi[0x22], esi[0x54], edi_18, var_1c_1)
            *arg6 = eax_12
            
            if (eax_12 == 0xffffffff)
                break
            
            void* eax_13 = *(esi[5] + (eax_12 << 2))
            *(eax_13 + 0x3c) = 0
            *(eax_13 + 0x30) = 0
            *(eax_13 + 0x48) = arg2
            *(eax_13 + 0x50) = esi[0x53]
            *(eax_13 + 0x54) = arg2
            *(eax_13 + 0x58) = arg2
            *(eax_13 + 0x5c) = 1
            arg1 = *(esi[6] + (arg2 << 2))
            
            if (arg1[3] != 0)
                *(eax_13 + 0x18) = *(*(esi[5] + (*arg1[4] << 2)) + 0x18)
                arg1 = *(*(esi[5] + (**(*(esi[6] + (arg2 << 2)) + 0x10) << 2)) + 0x14)
                *(eax_13 + 0x14) = arg1
            
            if (arg3 != 0)
                arg1 = *arg6
                *(arg3 + (arg5 << 2)) = arg1
            
            arg6 += 4
            edi_18 += 1
            arg5 += 1
            
            if (arg5 u>= arg4)
                goto label_4d258f
        
        result = 0x8007000e

j__free(var_8_1)
return result
