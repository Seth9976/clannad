// 函数: sub_4a59e0
// 地址: 0x4a59e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg2
int32_t var_c = arg3
*arg7 = 0

if (esi s< 0)
    esi = 0

if (arg5 != 0 && esi != 0)
    esi += 1

int32_t edx = arg3

if (arg3 s< 0)
    edx = neg.d(edx)

int32_t ebx = 1
int32_t var_8 = 1
int32_t i = edx s/ 0xa

if (i s> 0)
    do
        ebx += 1
        i s/= 0xa
    while (i s> 0)
    
    var_8 = ebx

if (esi s< ebx)
    esi = ebx

if (esi s<= 0 || esi s>= arg9)
    return 0

char* ebx_1 = nullptr
char* edi_4 = arg8
char* eax_4

if (arg5 == 1)
    if (arg3 != 0)
        eax_4.b = arg3 s>= 0
        eax_4.b += 0xa
    label_4a5a95:
        *edi_4 = eax_4.b
        goto label_4a5a97
    
    *edi_4 = 0xc
label_4a5a97:
    ebx_1 = 1
    
    if (esi s> var_8)
        esi -= 1
    
    if (arg3 s< 0)
        arg3 = neg.d(arg3)
        var_c = arg3
else
    if (arg5 == 2)
        eax_4 = 0xff
        
        if (arg3 s< 0)
            eax_4 = 0xa
        
        goto label_4a5a95
    
    if (arg3 s< 0)
        *edi_4 = 0xa
        goto label_4a5a97

int32_t i_3 = esi - 1

if (esi != 1)
    int32_t i_1
    
    do
        int32_t ecx_1 = 1
        
        if (i_3 s> 0)
            int32_t j_1 = i_3
            int32_t j
            
            do
                ecx_1 *= 0xa
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        int32_t eax_6
        int32_t edx_5
        edx_5:eax_6 = sx.q(var_c)
        *(ebx_1 + edi_4) = divs.dp.d(edx_5:eax_6, ecx_1).b
        arg3 = mods.dp.d(edx_5:eax_6, ecx_1)
        ebx_1 = &ebx_1[1]
        var_c = arg3
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(ebx_1 + edi_4) = arg3.b

if (arg4 == 0)
    if (arg6 != 0)
        eax_4.b = *edi_4
        
        if (eax_4.b == 0xa || eax_4.b == 0xb || eax_4.b == 0xc)
            char* ecx_2 = 0xffffffff
            eax_4 = 1
            
            if (ebx_1 s> 1)
                while (*(eax_4 + edi_4) == 0)
                    ecx_2 = eax_4
                    eax_4 = &eax_4[1]
                    
                    if (eax_4 s>= ebx_1)
                        break
                
                if (ecx_2 != 0xffffffff)
                    eax_4.b = *edi_4
                    *(ecx_2 + edi_4) = eax_4.b
                    *edi_4 = 0
    
    int32_t i_2 = 0
    
    if (&ebx_1[1] s> 0)
        do
            eax_4.b = *edi_4
            
            if (eax_4.b u<= 9)
                if (eax_4.b != 0)
                    break
                
                if (i_2 != ebx_1)
                    *edi_4 = 0xff
            
            i_2 += 1
            edi_4 = &edi_4[1]
        while (i_2 s< &ebx_1[1])

*arg7 = &ebx_1[1]
return 1
