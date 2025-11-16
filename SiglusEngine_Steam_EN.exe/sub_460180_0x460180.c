// 函数: sub_460180
// 地址: 0x460180
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg3
int32_t ecx = arg9
int32_t var_14 = edi

if (ecx s<= 0 || *(arg6 + 0x10) s< 0 || *(arg6 + 0x14) s< 0 || ecx s<= 0)
    return 

int32_t ebx_2 = arg4
int16_t* esi_1 = arg8 + 0xc
int32_t i

do
    if (esi_1[-4].b == 0)
        arg1.b = *(esi_1 - 7)
        void* edx
        
        if (arg1.b != 0)
            edx = zx.d(arg1.b)
        else
            edx = 0xffffffff
        
        int32_t var_24_1 = 1
        int32_t var_30_1
        int32_t var_2c_1
        int32_t var_28_1
        
        if (ebx_2 != 0)
            var_28_1 = 0xffffffff
            var_2c_1 = 0xffffffff
            var_30_1 = 0xffffffff
        else
            var_28_1 = ebx_2
            var_2c_1 = ebx_2
            var_30_1 = ebx_2
        
        sub_4c6e40(arg1, edx, ecx, var_30_1, var_2c_1, var_28_1)
    
    int32_t var_8_1
    int32_t eax_1
    int32_t ebx_3
    
    if (edi != 0)
        ecx = *(arg7 + 0x12c)
        
        if (ecx s< 0 || ecx s>= 0x100)
            ecx = 0xfe
        
        if (ebx_2 == 0)
            eax_1 = 0xffffffff
        else
            eax_1 = *(arg7 + 0x130)
            
            if (eax_1 s< 0 || eax_1 s>= 0x100)
                int16_t eax_3 = *esi_1
                
                if (eax_3 s< 0 || eax_3 s>= 0x100)
                    eax_1 = 0xffffffff
                else
                    eax_1 = 0xff
        
        ebx_3 = 0xffffffff
        var_8_1 = 0
    else
        ecx = sx.d(esi_1[-1])
        int16_t eax
        
        if (ebx_2 != 0)
            eax = *esi_1
        
        if (ebx_2 == 0 || eax s< 0 || eax s>= 0x100)
            eax_1 = 0xffffffff
            ebx_3 = *(esi_1 + 4)
            var_8_1 = *(esi_1 + 8)
        else
            ebx_3 = *(esi_1 + 4)
            eax_1 = sx.d(eax)
            var_8_1 = *(esi_1 + 8)
    
    char* edx_3 = &(&data_12a2990)[ecx * 2]
    
    if (ecx u> 0xff)
        edx_3 = &data_12a2990
    
    char* edi_1
    
    if (eax_1 u> 0xff)
        edi_1 = nullptr
    else
        edi_1 = &(&data_12a2990)[eax_1 * 2]
    
    ecx.b = esi_1[-4].b
    arg1 = nullptr
    
    if (ecx.b == 0)
        arg1 = 1
    else if (ecx.b == 1)
        arg1 = 2
    else if (ecx.b == 2)
        arg1 = 2
    
    if (ecx.b == 1 && arg2 == 0)
        edx_3 = nullptr
    
    void* ebx_4
    
    if (arg1 == 1)
        ebx_4 = arg6
        uint32_t eax_6 = zx.d(*(esi_1 - 7))
        arg1, ecx, edx_3 = sub_57f440(eax_6, zx.d(esi_1[-3]), ebx_4, eax_6, sx.d(esi_1[-6]), 
            sx.d(esi_1[-5]), edx_3, edi_1, ebx_3, var_8_1)
    else if (arg1 != 2)
        ebx_4 = arg6
    else
        ebx_4 = arg6
        uint32_t eax_9 = zx.d(*(esi_1 - 7))
        arg1, ecx, edx_3 = sub_45e0d0(eax_9, zx.d(esi_1[-2].b), ebx_4 + 0x20, eax_9, 
            sx.d(esi_1[-6]), sx.d(esi_1[-5]), edx_3, edi_1, ebx_3, var_8_1)
    
    edi = var_14
    
    if (edi != 0)
        ecx = *(esi_1 + 0xc)
        
        if (ecx != 0xffffffff)
            int32_t eax_11 = sx.d(esi_1[-5])
            arg1, ecx = sub_445d20(eax_11, sx.d(esi_1[-6]), arg5, eax_11, ecx, esi_1[8].b)
            
            if (*(ebx_4 + 0x2b64) == 0xffffffff)
                *(ebx_4 + 0x2b64) = *(esi_1 + 0xc)
                arg1.b = esi_1[8].b
                *(ebx_4 + 0x2b68) = arg1.b
    
    if (data_702fc0 != 0)
        if (data_1cd5369 != 0)
            int32_t eax_12 = data_13570fc
            
            if (eax_12 s< 0x18ffd)
                *(eax_12 + &data_1357100) = 0xa0d
                data_13570fc = eax_12 + 2
                
                if (eax_12 + 2 s< 0x18ffd)
                    *(eax_12 + 0x1357102) = 0xa0d
                    data_13570fc = eax_12 + 4
            
            data_1cd5369 = 0
        
        void* eax_15 = zx.d(esi_1[-2].b)
        edx_3.w = esi_1[-3]
        arg1, ecx = sub_45fff0(eax_15, edx_3.w, zx.d(esi_1[-4].b), eax_15)
    
    ebx_2 = arg4
    esi_1 = &esi_1[0x10]
    i = arg9
    arg9 -= 1
while (i != 1)
