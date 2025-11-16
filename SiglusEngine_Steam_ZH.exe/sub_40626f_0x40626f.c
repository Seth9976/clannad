// 函数: sub_40626f
// 地址: 0x40626f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_150 = edi

if (arg2 == 0)
    return 0x8876086c

if (arg8 == 0xffffffff)
    arg8 = 0

if ((arg8 & 0xffe039ec) != 0 || (arg10 != 0 && arg10 != 1 && arg10 != 2 && arg10 != 3))
    return 0x8876086c

int32_t var_14_1

if (arg9 == 0)
    var_14_1 = 0
else
    var_14_1 = *arg9

if (arg10 != 3)
    int32_t eax_3 = sub_405f8c(arg2, arg8, arg11.b, sub_405eea(var_14_1), arg3)
    var_14_1 = eax_3
    
    if (eax_3 == 0)
        return 0x8876086a
else if (var_14_1 == 0)
    var_14_1 = 0x15

int32_t i_6

if (arg4 == 0)
    i_6 = 0xffffffff
else
    i_6 = *arg4

int32_t i_7

if (arg5 == 0)
    i_7 = 0xffffffff
else
    i_7 = *arg5

int32_t i_3

if (arg6 == 0)
    i_3 = 0xffffffff
else
    i_3 = *arg6

int32_t var_18_1

if (arg7 == 0)
    var_18_1 = 0xffffffff
else
    var_18_1 = *arg7

if (i_6 != 0xffffffff)
    if (i_7 == 0xffffffff)
        i_7 = i_6
    
    goto label_406381

if (i_7 != 0xffffffff)
    i_6 = i_7
label_406381:
    
    if (i_6 == 0)
        i_6 = 1
    
    if (i_7 == 0)
        i_7 = 1
else
    i_7 = 0x100
    i_6 = 0x100

if (arg11 == 5)
    if (i_6 u> i_7)
        i_7 = i_6
    
    i_6 = i_7

if (i_3 == 0xffffffff || i_3 == 0)
    i_3 = 1

int32_t edx
int32_t var_10c

if (arg10 == 3)
    edx = var_10c
else
    void var_148
    (*(*arg2 + 0x1c))(arg2, &var_148)
    edx = var_10c
    int32_t i_8
    
    if (arg11 != 4)
        int32_t i_10
        
        if (i_6 u> i_10)
            i_6 = i_10
        
        int32_t i_11
        
        if (i_7 u> i_11)
            i_7 = i_11
        
        if (arg11 == 3)
            int32_t eax_19
            int32_t var_e0
            
            if ((edx.b & 0x20) == 0)
                eax_19 = var_e0
            else
                eax_19 = 1
            
            if (eax_19 != 0)
                int32_t i_15 = eax_19 * i_7
                
                if (i_6 u> i_15)
                    i_6 = i_15
                
                i_8 = eax_19 * i_6
                goto label_40644e
    else
        int32_t i_12
        i_8 = i_12
        
        if (i_3 u> i_8)
            i_3 = i_8
        
        if (i_6 u> i_8)
            i_6 = i_8
        
    label_40644e:
        
        if (i_7 u> i_8)
            i_7 = i_8
    int32_t eax_24
    
    if (arg11 == 3)
        eax_24 = 2
    else if (arg11 == 4)
        eax_24 = 0x40000
    else if (arg11 != 5)
        eax_24 = arg11
    else
        eax_24 = 0x20000
    
    if (var_18_1 == 1 && (edx:1.b & 1) != 0 && var_14_1 != 0x31545844 && var_14_1 != 0x32545844
            && var_14_1 != 0x33545844 && var_14_1 != 0x34545844 && var_14_1 != 0x35545844)
        eax_24 = 0
    
    if ((edx & eax_24) != 0)
        int32_t i_13 = i_6
        i_6 = 1
        
        if (i_13 u> 1)
            do
                i_6 <<= 1
            while (i_6 u< i_13)
        
        int32_t i_14 = i_7
        i_7 = 1
        
        if (i_14 u> 1)
            do
                i_7 <<= 1
            while (i_7 u< i_14)
        
        int32_t i_9 = i_3
        i_3 = 1
        
        if (i_9 u> 1)
            do
                i_3 <<= 1
            while (i_3 u< i_9)
int32_t i_4
int32_t i_5

if (var_14_1 == 0x31545844 || var_14_1 == 0x32545844 || var_14_1 == 0x33545844
        || var_14_1 == 0x34545844 || var_14_1 == 0x35545844)
    i_4 = (i_6 + 3) & 0xfffffffc
    i_5 = (i_7 + 3) & 0xfffffffc
    i_6 = i_4
    i_7 = i_5
else
    i_4 = i_6
    i_5 = i_7

int32_t eax_32

if (arg11 == 3)
    eax_32 = 0x4000
else if (arg11 == 4)
    eax_32 = 0x8000
else if (arg11 != 5)
    eax_32 = arg11
else
    eax_32 = 0x10000

int32_t ecx_5

if (arg10 == 3 || ((edx & eax_32) != 0 && ((edx:1.b & 1) == 0
        || ((i_4 & (i_4 - 1)) == 0 && (i_5 & (i_5 - 1)) == 0 && (i_3 & (i_3 - 1)) == 0))))
    int32_t esi = 0
    int32_t i = i_4
    
    if (i_4 != 0)
        do
            i u>>= 1
            esi += 1
        while (i != 0)
    
    int32_t ecx_6 = 0
    int32_t i_1 = i_5
    
    if (i_5 != 0)
        do
            i_1 u>>= 1
            ecx_6 += 1
        while (i_1 != 0)
    
    int32_t i_2 = i_3
    int32_t edx_2 = 0
    
    while (i_2 != 0)
        i_2 u>>= 1
        edx_2 += 1
    
    int32_t eax_36 = esi
    
    if (esi u<= ecx_6)
        eax_36 = ecx_6
    
    if (arg11 == 4 && edx_2 u> eax_36)
        eax_36 = edx_2
    
    ecx_5 = var_18_1
    
    if (ecx_5 u> eax_36 || ecx_5 == 0)
        ecx_5 = eax_36
    
    if (ecx_5 != 1 && (arg8:1.b & 4) != 0)
        ecx_5 = 0
else
    ecx_5 = 1

if (arg4 != 0)
    *arg4 = i_6

if (arg5 != 0)
    *arg5 = i_7

if (arg6 != 0)
    *arg6 = i_3

if (arg7 != 0)
    *arg7 = ecx_5

if (arg9 != 0)
    *arg9 = var_14_1

return 0
