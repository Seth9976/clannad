// 函数: sub_471cc0
// 地址: 0x471cc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg9 = 0
int32_t i = arg3
int32_t edx = arg4
int32_t var_18 = 0
int32_t var_c = edx
void* const var_14
uint32_t var_10

if (arg7 == 1)
    var_14 = 0x10e
label_471d08:
    var_10 = 0x167
    
    if (edx s<= 0xfffffffe || edx s>= 2)
        edx s>>= 1
        var_c = edx
else
    var_14 = nullptr
    
    if (arg7 != 2)
        goto label_471d08
    
    var_10 = 0xb3

int32_t ecx = arg5
uint32_t ebx = arg2

if (ecx s<= 0)
    for (; i u>= arg2; i -= arg2)
        *arg8 -= arg2
    
    goto label_471f26

if (ecx s< 2)
label_471f11:
    
    if (i u>= arg2 * ecx)
        return 0
    
    for (; i u>= arg2; i -= arg2)
    
    goto label_471f26

int32_t edi_1

if (arg6 == 1)
    if (i u>= arg2 * ecx)
        return 0
    
    var_18 = ecx
    int32_t eax_32 = ecx
    
    if (i u>= arg2)
        do
            i -= arg2
            eax_32 -= 1
        while (i u>= arg2)
        
        var_18 = eax_32
    
label_471f26:
    int32_t var_8_2 = edx
    
    if (edx == 0)
        return 0
    
    edi_1 = edx
else
    uint32_t eax_11
    
    if (arg6 == 2)
        eax_11 = 0
        arg4 = 0
        
        if (ecx s<= 0)
        label_471e9f:
            edi_1 = edx
        else
            int32_t edx_8 = 0
            int32_t var_1c_2 = 0
            
            while (true)
                ebx = arg2 - edx_8 s/ 0x64
                
                if (i u< ebx)
                    int32_t eax_28 = arg4 * divs.dp.d(sx.q(var_c * 0x64), ecx) s/ 0x64
                    edi_1 = var_c - eax_28
                    eax_11 = arg4
                    
                    if (var_c == eax_28)
                        if (var_c s< 0)
                            edi_1 = 0xffffffff
                        else if (var_c s> 0)
                            edi_1 = 1
                    
                    ecx = arg5
                    break
                
                i -= ebx
                eax_11 = arg4 + 1
                edx_8 = var_1c_2 + divu.dp.d(0:(arg2 * 0x64), ecx)
                arg4 = eax_11
                var_1c_2 = edx_8
                
                if (eax_11 s>= ecx)
                    goto label_471e9f
    else
        if (arg6 != 3)
            goto label_471f11
        
        if (ecx s>= 0xa)
            arg4 = 0x4b
        else if (ecx s>= 9)
            arg4 = 0x4a
        else if (ecx s>= 8)
            arg4 = 0x48
        else if (ecx s>= 7)
            arg4 = 0x45
        else if (ecx s>= 6)
            arg4 = 0x41
        else if (ecx s>= 5)
            arg4 = 0x3c
        else if (ecx s< 4)
            int32_t eax_9
            eax_9.b = ecx s>= 3
            arg4 = (eax_9 << 3) + 0x28
        else
            arg4 = 0x36
        
        eax_11 = 0
        int32_t var_8_1 = edx
        uint32_t var_1c_1 = 0
        edi_1 = edx
        
        if (ecx s> 0)
            do
                if (i u< ebx)
                    if (edi_1 == 0)
                        if (var_c s< 0)
                            edi_1 = 0xffffffff
                        else if (var_c s> 0)
                            edi_1 = 1
                    
                    break
                
                i -= ebx
                ebx = arg4 * ebx u/ 0x64
                ecx = arg5
                eax_11 = var_1c_1 + 1
                var_1c_1 = eax_11
                edi_1 = arg4 * edi_1 s/ 0x64
            while (eax_11 s< ecx)
    
    if (eax_11 == ecx || edi_1 == 0)
        return 0

uint32_t eax_35 = sub_4d1650(0x55)
int32_t edi_5 = divs.dp.d(sx.q(eax_35), edi_1)

if (edi_5 == 0)
    edi_5 = 1

uint32_t eax_38

if (i u< ebx)
    int32_t edx_16 = 0
    int32_t eax_40 = var_10 * i
    
    if (var_10 s< 0)
        eax_38 = neg.d(divu.dp.d(edx_16:(neg.d(eax_40)), ebx))
        
        if (eax_38 s< var_10)
            eax_38 = var_10
    else
        eax_38 = divu.dp.d(edx_16:eax_40, ebx)
        
        if (eax_38 s> var_10)
            eax_38 = var_10
else
    eax_38 = var_10

int32_t esi = divs.dp.d(sx.q(sub_4d1650(var_14 + eax_38)), edi_5)

if (arg7 == 1)
    esi += divs.dp.d(sx.q(eax_35), edi_5)

if (var_18 s> 0 && arg5 s> 0)
    esi = divs.dp.d(sx.q(var_18 * esi), arg5)

*arg9 = esi
return 1
